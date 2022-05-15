CFLAGS=-g -Wall -Wextra -pedantic -Wformat=2 -Wextra
compile:
	mkdir -p bin/
	gcc -o bin/findinf src/main.c $(CFLAGS)
run:
	bin/findinf
push-to-user-bin:
	cp -p bin/findinf ${HOME}/bin/findinf
remove-from-user-bin:
	rm ${HOME}/bin/findinf
push-to-global-bin:
	sudo cp -p bin/findinf /bin/findinf
remove-from-global-bin:
	sudo rm /bin/findinf
cr:compile run
