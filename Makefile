.PHONY: install

install: conio.h
	@test -f /usr/include/conio.h \
		&& printf "/usr/include/conio.h already exists\n" \
		|| true
	@test -w /usr/include/ \
		&& cp conio.h /usr/include/conio.h \
		|| printf "Please run with elevated privileges\n" \

