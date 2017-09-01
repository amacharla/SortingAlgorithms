
#Build:

0:
	gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-hash_table_create.c -o a
0r: 0
	./a
0v: 0
	valgrind ./a

1:
	gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-djb2.c -o b
1r: 1
	./b

2:
	gcc -Wall -pedantic -Werror -Wextra 2-main.c 1-djb2.c 2-key_index.c -o c
2r: 2
	./c
3:
	gcc -Wall -pedantic -Werror -Wextra 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d
3r: 3
	./d
3v: 3
	valgrinde ./d
4:
	gcc -Wall -pedantic -Werror -Wextra 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e
4r: 4
	./e
5:
	gcc -Wall -pedantic -Werror -Wextra 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -g -o f
5r: 5
	./f

6:
	gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g
6r: 6
	./g
6v: 6
	valgrind ./g
