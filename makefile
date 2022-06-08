CFLAGS=-Wall -Wextra -Wpedantic -O3
compile:
	mkdir -p bin/
	gcc -o bin/findinf src/main.c $(CFLAGS)
compile-debug: CFLAGS += -g
compile-debug: compile
run:
	bin/findinf
install:
	sudo cp -p bin/findinf /bin/findinf
uninstall:
	sudo rm /bin/findinf
