
ALL: BUILD RUN

BUILD:
	tsc $(file).ts

RUN:
	node $(file).js

PUBLISH:
	npm publish

VERSIONS:
	npm version patch
	npm version minor
	npm version major