all: echo
echo: src/main.c
	gcc  -Wall -Wextra -O2 src/main.c -o echo