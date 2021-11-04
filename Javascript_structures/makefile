
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
	node-gyp

STATIC_DLL:
	node-gyp