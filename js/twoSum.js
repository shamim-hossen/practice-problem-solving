/**
 * Two Sum
 */
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
    // Create a map to store: { value: index }
    const d = new Map();
    // Loop through the array
    for (let i = 0; i < nums.length; i++) {
        const x = nums[i];
        const y = target - x; // This is the 'complement' we need
        // Check if the complement exists in our map
        if (d.has(y)) {
            // If found, return the index of the complement and current index
            return [d.get(y), i];
        }
        // Otherwise, save the current number and its index in the map
        d.set(x, i);
    }
};