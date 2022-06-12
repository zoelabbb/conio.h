.PHONY: install

install: conio.h
	test -f /usr/include/conio.h && echo "/usr/include/conio.h already exists"
	test -f /usr/include/conio.h || cp conio.h /usr/include/conio.h

