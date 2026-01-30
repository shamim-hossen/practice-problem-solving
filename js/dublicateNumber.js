// Find the Duplicate Numbe
// Given an array of integers, find the one number that appears more than once.
/**
 * @param {number[]} nums
 * @return {number}
 */
function findDuplicate(nums) {
  const seen = new Set();
  
  for (let num of nums) {
    if (seen.has(num)) return num;
    seen.add(num);
  }
  
  return -1; // No duplicate found
}

console.log(findDuplicate([1, 3, 4, 2, 2])); // 2


