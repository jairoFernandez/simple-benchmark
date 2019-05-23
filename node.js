var years = 1000000;
var perc = 1 + (0.001 / 100);
var start = 0.00001;
for (var i = 0; i < years; i++) {
 console.log("Years: "+ i + "\n" + start * Math.pow(perc, i));
}

// node node.js