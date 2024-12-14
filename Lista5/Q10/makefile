all: client

client: client.o Q10.o
	gcc client.o Q10.o -g -lm -o client

client.o: client.c Q10.h
	gcc -std=c99 -Wall -Wvla -g -c client.c

Q10.o: Q10.c Q10.h
	gcc -std=c99 -Wall -Werror -Wvla -c Q10.c