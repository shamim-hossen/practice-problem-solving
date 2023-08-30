/**
    1.filter arg hisebe function nibe
    2.sob element return dibe

*/
var numbers = [1,2,3,4,5,6,7,8,9,10];
var result = numbers.filter((currentValue,index,arr)=>{
    return currentValue>4;
})
console.log(result);