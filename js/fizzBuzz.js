// FizzBuzz Print numbers 1 to n. For multiples of 3 print "Fizz", for 5 "Buzz", for both "FizzBuzz". Technique: Modulo Operator.
/**
 * @param {number} n
 * @return {string[]}
 */
function fizzBuzz(n) {
  const result = [];
  
  for (let i = 1; i <= n; i++) {
    let output = "";
    if (i % 3 === 0) output += "Fizz";
    if (i % 5 === 0) output += "Buzz";
    
    // If output is empty, it's not a multiple of 3 or 5, so use the number
    result.push(output || i.toString());
  }
  
  return result;
}

console.log(fizzBuzz(15));
