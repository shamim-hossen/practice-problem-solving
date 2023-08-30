/**
(condition)? trueBlock: falseBlock;
*/
// var age = 11;
// var type;
// if(age>=18) {
//     type = "Adult";
// }else if(age<10) {
//     type = "Child";
// }else{
//     type = "Young";
// }
// console.log(type);

var age = 9;
var type = (age>=18) ? "Adult":(age<10)? "Child":"Young";
console.log(type);