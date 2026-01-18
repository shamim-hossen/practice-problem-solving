/**  Valid Anagram
 Check if two strings contain the exact same characters with the same frequencies (e.g., "listen" and "silent"). Technique: Frequency Counter (Hash Map).
*/
/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
function isAnagram(s, t) {
  if (s.length !== t.length) return false;

  const count = {};

  // Count frequency of chars in string s
  for (let char of s) {
    count[char] = (count[char] || 0) + 1;
  }

  // Decrement frequency based on string t
  for (let char of t) {
    if (!count[char]) return false; // Character not found or count is 0
    count[char]--;
  }

  return true;
}

console.log(isAnagram("anagram", "nagaram")); // true