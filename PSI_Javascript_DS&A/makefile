
ALL: DYNAMIC_DLL

RUN:
	node $(file).js
	
TEST:
	node ./Test/Test.js

BENCHMARK:
	node ./Benchmark/Benchmark.js
	
PUBLISH:
	npm publish

VERSION_PATCH:
	npm version patch

VERSION_MINOR:
	npm version minor

VERSION_MAJOR:
	npm version major

DYNAMIC_DLL:
	node-gyp configure

STATIC_DLL:
	node-gyp configure

WASM:
	em++ -std=c++11 $(file).cpp -Os -s WASM=1 -s SIDE_MODULE=1 -o $(file).wasm