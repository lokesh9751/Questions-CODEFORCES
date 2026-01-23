const { log } = require("console");
const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim();
let w = Number(input);
if(w>2){
    if(w%2==0){
        console.log("YES");
    }
    else{
        console.log("NO");
        
    }
}
else{
    console.log("NO");
}