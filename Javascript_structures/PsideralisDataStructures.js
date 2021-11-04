WebAssembly.instantiateStreaming(fetch('PsideralisDataSturctures.wasm'), importObject)
.then(results => {

});

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