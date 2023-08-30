/*FAT ARROW FUNCTION ()=>{};
1.syntactic sugar = short code
2.For fat arrow fuction inside this and outside this value is same
3.all normal function is constructor fuction br not arrow fucntion
*/

/*============================
1.syntactic sugar = short code
*/

// function number(n) {
//     return n;
// }
// console.log(number(20));


// let number = (n) => n;
// console.log(number(19));


/*============================
2.For fat arrow fuction inside this and outside this value is same
*/
// var javascript = {
//     name: "JavaScript",
//     libraries: ["React", "Angular", "Vue"],
//     printLibraries: function() {
//         this.libraries.forEach(function(a){
//             console.log(`${this.name} loves ${a}`);
//         });
//     },
// };
// javascript.printLibraries();


// var javascript = {
//     name: "JavaScript",
//     libraries: ["React", "Angular", "Vue"],
//     printLibraries: function() {
//         this.libraries.forEach((a)=>{
//             console.log(`${this.name} loves ${a}`);
//         });
//     },
// };
// javascript.printLibraries();


/*============================
3.all normal function is constructor fuction br not arrow fucntion 
*/
// function Person(name) {
//     this.name = name;
// }
// var sakib = new Person("Sakib");

// var Person((name)=> {
//     this.name;
// });
// var sakib = new Person("Sakib");