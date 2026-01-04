function isPalindrome(str) {
  // 1. Normalize: convert to lowercase and remove non-alphanumeric characters
  const cleanStr = str.toLowerCase().replace(/[^a-z0-9]/g, '');
  
  // 2. Reverse and compare
  const reversedStr = cleanStr.split('').reverse().join('');
  
  return cleanStr === reversedStr;
}

console.log(isPalindrome("A man, a plan, a canal. Panama")); // true
