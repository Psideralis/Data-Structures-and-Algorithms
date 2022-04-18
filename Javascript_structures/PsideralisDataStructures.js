/*
extern "C" {
    // Wrapper for our JavaScript function
    extern void consoleLog(int sum);
    int Sum(int a, int b) {
    int sum = a + b;
    consoleLog(sum);
    return sum;
    }
}
*/

const importObject = {
    env: {
        consoleLog: console.log,
    }
};

WebAssembly.instantiateStreaming(
    fetch('PsideralisDataSturctures.wasm'),
    importObject
    ).then(result => {
    const Sum = result.instance.exports.Sum;

});

var ffi = require('ffi');

var libm = ffi.Library('libm', {
    'ceil': [ 'double', [ 'double' ] ]
});

libm.ceil(1.5); // 2

function include(file) {
    var script  = document.createElement('script');
    script.src  = file;
    script.type = 'text/javascript';
    script.defer = true;
    document.getElementsByTagName('head').item(0).appendChild(script);
}

include('./Static/Static.js');
include('./Dynamic/Dynamic.js');
include('./Graph/Graph.js');
include('./NonClassic/NonClassic.js');