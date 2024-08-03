 const users=[
    {firstName:"Abhishek", lastName:"Kumar", age:23},
    {firstName:"Anuj", lastName:"Chaudhary", age:23},
    {firstName:"Atul", lastName:"Tiwari", age:22},
    {firstName:"Yasharth", lastName:"Srivastava", age:23},
    {firstName:"Rahul", lastName:"Kannoujiya", age:24},
    
]

var output = users.reduce((acc,curr)=>{
    if(curr.age===23){
        acc.push(curr.firstName+" "+curr.lastName);
    }
    return acc;
},[])

console.log(output); 