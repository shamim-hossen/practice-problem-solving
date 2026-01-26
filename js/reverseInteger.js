/**
 * Reverse Integer
 * Reverse the digits of an integer (e.g., 123 -> 321, -123 -> -321). Technique: Math & String conversion.
 * @param {number} x
 * @return {number}
 */
function reverseInteger(x) {
  const reversed = parseInt(Math.abs(x).toString().split('').reverse().join(''));
  
  // Handle the negative sign
  if (x < 0) return reversed * -1;
  
  return reversed;
}

console.log(reverseInteger(-123)); // -321