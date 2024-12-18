all: client

client: client.o Q11.o
	gcc client.o Q11.o -g -lm -o client

client.o: client.c Q11.h
	gcc -std=c99 -Wall -Werror -Wvla -g -c client.c

Q11.o: Q11.c Q11.h
	gcc -std=c99 -Wall -Werror -Wvla -c Q11.c