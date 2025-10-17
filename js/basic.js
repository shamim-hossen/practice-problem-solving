/**
 * Math.random() easy implementation (based on time)
 */
function myRandom() {
    return (Date.now() % 1000) / 1000;
}
console.log(myRandom());
