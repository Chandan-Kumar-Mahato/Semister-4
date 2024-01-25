// console.log('hi ');

// -----> Simple program to find the extension using split 

// var str = "e:/BEE/folder/server.js"

// var ans = str.split('.');
// ans = ans[ans.length-1];
// console.log(ans);
const path = require('path');

var na = __dirname;

console.log(path.basename(na));

// lets use 

var checkPath= __filename;


console.log(path.join("chandu","/kamal" , "./champ"));