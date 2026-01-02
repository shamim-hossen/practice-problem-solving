chrome.action.onClicked.addListener(async (tab) => {
  let fileName = tab.title.replace(/[/\\?%*:|"<>]/g, '-').trim();

  chrome.debugger.attach({ tabId: tab.id }, "1.3", async () => {
    
    // 1. Force the page to use "Screen" colors instead of "Print" colors
    await chrome.debugger.sendCommand({ tabId: tab.id }, "Emulation.setEmulatedMedia", { media: "screen" });

    // 2. Get the actual size of the full scrollable webpage
    chrome.debugger.sendCommand({ tabId: tab.id }, "Page.getLayoutMetrics", {}, (metrics) => {
      const { contentSize } = metrics;

      // 3. Print to PDF using the website's actual height/width converted to inches (72 dpi)
      chrome.debugger.sendCommand({ tabId: tab.id }, "Page.printToPDF", {
        printBackground: true,
        paperWidth: contentSize.width / 72,
        paperHeight: contentSize.height / 72,
        marginTop: 0,
        marginBottom: 0,
        marginLeft: 0,
        marginRight: 0,
        pageRanges: "1" // This keeps it as one continuous long page
      }, (result) => {
        if (result && result.data) {
          chrome.downloads.download({
            url: "data:application/pdf;base64," + result.data,
            filename: `${fileName}.pdf`
          });
        }
        chrome.debugger.detach({ tabId: tab.id });
      });
    });
  });
});