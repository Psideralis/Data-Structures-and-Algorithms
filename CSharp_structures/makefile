
ALL: build 

test:	
ifeq ($(platform),LINUX)
	csc /target:exe /out:test test.cs
else ifeq ($(platform),WINDOWS)
	csc /target:winexe /out:test.exe test.cs
else ifeq ($(platform),MAC)
	csc /target:exe /out:test test.cs
else
	echo "NO PLATFORM."
endif

benchmark:
ifeq ($(platform),LINUX)
	csc /target:exe /out:benchmark benchmark.cs
else ifeq ($(platform),WINDOWS)
	csc /target:winexe /out:benchmark.exe benchmark.cs
else ifeq ($(platform),MAC)
	csc /target:exe /out:benchmark benchmark.cs
else
	echo "NO PLATFORM."
endif

build:
ifeq ($(platform),LINUX)
	csc /target:library /out:PsideralisDataStructuresCS.dll $(files)
else ifeq ($(platform),WINDOWS)
	csc /target:library /out:PsideralisDataStructuresCS.dll $(files)
else ifeq ($(platform),MAC)
	csc /target:library /out:PsideralisDataStructuresCS.dll $(files)
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
