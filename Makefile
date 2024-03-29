C_ARGS:=-std=c17 -I./ -lm -Wall
CC:=clang

#Get all the c files
SRC:=$(shell find src/ -type f -name '*.c' -not -name 'main.c') 

#Get the files they're gonna be compiled to
OBJ:=$(patsubst src/%.c, out/obj/%.o, $(SRC))

DUMMY:=$(shell mkdir -p out/obj)

out/obj/%.o: src/%.c 
	$(CC) $(C_ARGS) -c $^ -o $@ 

out/main: src/main.c $(OBJ)
	$(CC) $(C_ARGS) src/main.c $(OBJ) -o out/main

out/test: $(shell find test/ -type f -name '*.c' -name '*.h') $(OBJ)
	echo $^
	$(CC) $(C_ARGS) test/main.c $(OBJ) -o out/test

test: out/test
	out/test

run: out/main
	out/main

bin: out/main out/test

clean:
	rm -rf out

cc_db: clean
	bear -- make bin
