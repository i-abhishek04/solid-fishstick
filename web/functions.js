// function one(user){
//     console.log(`hello ${user}, how are you?`)
// }

// one("Abhishek")

const userone = {
    name: "anu",
    age: 23,
    printdetail: function (){
        console.log(`${this.name} is ${this.age} years old.`)
    }
}

userone.printdetail()

console.log(this)
function one(){
    console.log(this)

}
// one()

const fun = (num1, num2) =>{
    console.log(num1 + num2)
}

fun(3,4);

( (num1,num2) => {
    console.log(num1 + num2)
})(10,42);