CC=gcc
CFLAGS=-g -Wall
OBJ=obj
INCLUDE=include
SRC=src
LIB=lib

.PHONY: install

# End points

install: libed
#	@test -f /usr/include/conio.h \
#		&& printf "/usr/include/conio.h already exists\n" \
#		|| true
#	@test -w /usr/include/ \
#		&& cp conio.h /usr/include/conio.h \
#		|| printf "Please run with elevated privileges\n" \

libed:\
	$(LIB)\
	$(OBJ)/conio.o
	ar -rcs $(LIB)/libconio.a $(OBJ)/*.o

# Files

$(OBJ)/%.o: $(SRC)/%.c $(OBJ)
	$(CC) $(CFLAGS) -c -I $(INCLUDE) $< -o $@

# Folders
$(OBJ):
	mkdir $@
$(LIB):
	mkdir $@
