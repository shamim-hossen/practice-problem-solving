/**
 * @param {number[]} prices
 * @return {number}
 */
function maxProfit(prices) {
  let minPrice = Infinity;
  let maxProfit = 0;
  for (let i = 0; i < prices.length; i++) {
    if (prices[i] < minPrice) {
      minPrice = prices[i]; // Found a new lowest price to buy
    } else if (prices[i] - minPrice > maxProfit) {
      maxProfit = prices[i] - minPrice; // Check if selling today gives better profit
    }
  }
  return maxProfit;
}

console.log(maxProfit([7, 1, 5, 3, 6, 4])); // 5 (Buy at 1, sell at 6)