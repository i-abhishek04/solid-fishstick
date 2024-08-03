const myArr = [19,23,42,23,53,64,23,13]

myArr.push(69);
myArr.shift();

console.log(myArr.includes(23))

console.log(myArr.length)

console.log("1 ", myArr);

const newarr1 = myArr.slice(2,6);

console.log("2 ", myArr);
console.log(newarr1);

const newarr2 = myArr.splice(2,4);
console.log("3 ", myArr);
console.log(newarr2);


