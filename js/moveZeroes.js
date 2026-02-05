/**
 * Move all 0s to the end of an array while maintaining the order of non-zero elements. Do this in-place (without creating a new array). Technique: Two Pointers
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place.
 */
function moveZeroes(nums) {
  let lastNonZeroFoundAt = 0;

  // 1. Move all non-zeroes to the front
  for (let i = 0; i < nums.length; i++) {
    if (nums[i] !== 0) {
      nums[lastNonZeroFoundAt] = nums[i];
      lastNonZeroFoundAt++;
    }
  }

  // 2. Fill the remaining positions with 0
  for (let i = lastNonZeroFoundAt; i < nums.length; i++) {
    nums[i] = 0;
  }
}

const arr = [0, 1, 0, 3, 12];
moveZeroes(arr);
console.log(arr); // [1, 3, 12, 0, 0]