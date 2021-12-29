has_warning: has_warning.c
	gcc -Wall -Wextra -Werror has_warning.c -o has_warning

no_warning: no_warning.c
	gcc no_warning.c -o no_warning

clean:

fclean: clean
	-rm has_warning
	-rm no_warning

.PHONY: has_warning no_warning clean fclean