CFLAGS = -Wall -Wextra -Wpedantic -std=c11 -O3
CC = gcc

BIN = bin

clean:
	rm -rf $(BIN)

compile:
	mkdir -p $(BIN)
	$(CC) -o $(BIN)/findinf src/main.c $(CFLAGS)

compile-debug: CFLAGS += -g
compile-debug: compile

run:
	$(BIN)/findinf
install:
	sudo cp -p $(BIN)/findinf /bin/findinf

uninstall:
	sudo rm /bin/findinf
