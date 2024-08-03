function printTime(){
    console.clear();
    console.log(new Date().toLocaleTimeString());
}
setInterval(printTime,1000);