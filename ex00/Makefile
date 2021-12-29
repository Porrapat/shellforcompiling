all: ft_putchar

ft_putchar: ft_putchar.o main.c
	gcc main.c ft_putchar.o -o ft_putchar

ft_putchar.o: ft_putchar.s
	gcc -c ft_putchar.s -o ft_putchar.o

ft_putchar.s: ft_putchar.i
	gcc -S ft_putchar.i -o ft_putchar.s
ft_putchar.i: ft_putchar.c
	gcc -E ft_putchar.c > ft_putchar.i

intel: ft_putchar.i
	gcc -S -masm=intel ft_putchar.i -o ft_putchar_intel.s


clean:
	-rm ft_putchar.i
	-rm ft_putchar.o
	-rm ft_putchar.s

fclean: clean
	-rm ft_putchar

.PHONY: main clean fclean intel