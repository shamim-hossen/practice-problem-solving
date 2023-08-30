/**
    function nibe arg hisabe 
    work only first match
    true hole function return 
    numbers.find((currentValue, currentIndex, array){
        reutrn currentValue>4;
    },this);
*/

var numbers = [1,2,3,4,5,6,10];
var result = numbers.find(function(currentValue){
    return currentValue>4;    
})
console.log(result);