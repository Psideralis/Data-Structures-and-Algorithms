
ALL: build 

test:	
ifeq ($(platform),LINUX)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else ifeq ($(platform),WINDOWS)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else ifeq ($(platform),MAC)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else
	echo "NO PLATFORM."
endif

benchmark:
ifeq ($(platform),LINUX)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else ifeq ($(platform),WINDOWS)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else ifeq ($(platform),MAC)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else
	echo "NO PLATFORM."
endif

build:
ifeq ($(platform),LINUX)
ifeq ($(language),OBJECTIVE-C)
	gcc `gnustep-config --objc-flags` -L/usr/include/GNUstep $(file).m -o $(file)
else ifeq ($(language),OBJECTIVE-C++)
	gcc `gnustep-config --objc-flags` -L/usr/include/GNUstep $(file).mm -o $(file)
endif
else ifeq ($(platform),WINDOWS)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else ifeq ($(platform),MAC)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else
	echo "NO PLATFORM."
endif

install:
ifeq ($(platform),LINUX)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else ifeq ($(platform),WINDOWS)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else ifeq ($(platform),MAC)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else
	echo "NO PLATFORM."
endif

uninstall:
ifeq ($(platform),LINUX)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else ifeq ($(platform),WINDOWS)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else ifeq ($(platform),MAC)
ifeq ($(language),OBJECTIVE-C)

else ifeq ($(language),OBJECTIVE-C++)

endif
else
	echo "NO PLATFORM."
endif