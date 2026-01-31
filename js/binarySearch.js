/**
 * Binary Search
 *  Find the index of a target in a sorted array. If not found, return -1.
Why it's important: It has $O(\log n)$ time complexity, which is much faster than a standard loop ($O(n)$) for large datasets.
 */
/**
 * @param {number[]} nums - Must be sorted
 * @param {number} target
 * @return {number}
 */
function binarySearch(nums, target) {
  let left = 0;
  let right = nums.length - 1;

  while (left <= right) {
    const mid = Math.floor((left + right) / 2);

    if (nums[mid] === target) return mid;
    
    if (nums[mid] < target) {
      left = mid + 1; // Target is in the right half
    } else {
      right = mid - 1; // Target is in the left half
    }
  }

  return -1;
}

console.log(binarySearch([1, 2, 3, 4, 5, 6, 7], 5)); // 4