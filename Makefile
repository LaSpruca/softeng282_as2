C_ARGS:=-std=c17 -I./ -lm -Wall
CC:=clang

#Get all the c files
SRC:=$(shell find src/ -type f -name '*.c' -not -name 'main.c') 

#Get the files they're gonna be compiled to
OBJ:=$(patsubst src/%.c, out/obj/%.o, $(SRC))

DUMMY:=$(shell mkdir -p out/obj)

# If the first argument is "run"...
ifeq (run,$(firstword $(MAKECMDGOALS)))
  # use the rest as arguments for "run"
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  # ...and turn them into do-nothing targets
  $(eval $(RUN_ARGS):;@:)
endif

out/obj/%.o: src/%.c 
	$(CC) $(C_ARGS) -c $^ -o $@ 

out/main: src/main.c $(OBJ)
	$(CC) $(C_ARGS) src/main.c $(OBJ) -o out/main

out/test: $(shell find test/ -type f -name '*.c' -name '*.h') $(OBJ)
	$(CC) $(C_ARGS) test/main.c $(OBJ) -o out/test

out/find_largest: test/find_largest.c $(OBJ)
	$(CC) $(C_ARGS) test/find_largest.c $(OBJ) -o out/find_largest

test: out/test
	out/test

run: out/main
	out/main $(RUN_ARGS)

find_largest: out/find_largest
	out/find_largest

bin: out/main out/test out/find_largest

clean:
	rm -rf out

cc_db: clean
	bear -- make bin
