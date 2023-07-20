## Define variables:
CC=cc
CFLAGS=-Wall -Wextra -Werror
CFILES=rush-02.c
OBJECTS=rush-02.o
BINARY=rush-02
## from here it begins to generate rush-02 file
all:$(BINARY)
## we need to create the .o files before generating rush-02 file
$(BINARY):$(OBJECTS)
	$(CC) -o $@ $^
## this is the rule to create the .o files
%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^
## this is how to clean all the generated files
fclean:
	rm -fr $(BINARY) $(OBJECTS)
