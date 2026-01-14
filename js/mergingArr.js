// Using the spread operator
const array1 = [1, 2, 3];
const array2 = [4, 5, 6];
const mergedArray = [...array1, ...array2];
console.log(mergedArray); // Output: [1, 2, 3, 4, 5, 6]


// Using concat() method
const a = [1, 2];
const b = [3, 4];
const merged = a.concat(b);
console.log(merged);

// push() with the Spread Operator
const arr1 = [1, 2];
const arr2 = [3, 4];
arr1.push(...arr2); 
console.log(arr1); // [1, 2, 3, 4]


// Array.flat()
const nested = [[1, 2], [3, 4], [5, 6]];
const merged = nested.flat(); // [1, 2, 3, 4, 5, 6]


// Merging and Removing Duplicates
const arr1 = [1, 2, 3];
const arr2 = [2, 3, 4];
const mergedUnique = [...new Set([...arr1, ...arr2])]; // [1, 2, 3, 4]
