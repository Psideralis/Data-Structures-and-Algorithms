
ALL: build 

test:	
ifeq ($(platform),LINUX)
	gcc
else ifeq ($(platform),WINDOWS)
	cl
else ifeq ($(platform),MAC)
	clang
else
	echo "NO PLATFORM."	
endif

benchmark:
ifeq ($(platform),LINUX)
	gcc
else ifeq ($(platform),WINDOWS)
	cl
else ifeq ($(platform),MAC)
	clang
else
	echo "NO PLATFORM."	
endif

build:
ifeq ($(platform),LINUX)
	gcc
else ifeq ($(platform),WINDOWS)
	cl
else ifeq ($(platform),MAC)
	clang
else
	echo "NO PLATFORM."	
endif

install:
ifeq ($(platform),LINUX)

else ifeq ($(platform),WINDOWS)

else ifeq ($(platform),MAC)

else
	echo "NO PLATFORM."
endif


uninstall:
ifeq ($(platform),LINUX)

else ifeq ($(platform),WINDOWS)

else ifeq ($(platform),MAC)

else
	echo "NO PLATFORM."
endif
