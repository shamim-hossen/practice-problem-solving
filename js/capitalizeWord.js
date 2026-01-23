// Capitalize Words (Title Case) Capitalize the first letter of every word in a sentence. Technique: Map and String Manipulation
/**
 * @param {string} str
 * @return {string}
 */
function capitalize(str) {
  return str
    .split(' ')
    .map(word => word.charAt(0).toUpperCase() + word.slice(1))
    .join(' ');
}
console.log(capitalize("this is a test")); // "This Is A Test"