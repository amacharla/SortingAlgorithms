0:
	gcc -Wall -Wextra  -pedantic 0-bubble_sort.c 0-main.c print_array.c -g -o bubble
0r: 0
	./bubble
1:
	gcc -Wall -Wextra  -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -g -o insertion
1r: 1
	./insertion
2:
	gcc -Wall -Wextra  -pedantic 2-main.c 2-selection_sort.c print_array.c -g -o select
2r: 2
	./select
3:
	gcc -Wall -Wextra  -pedantic 3-main.c 3-quick_sort.c print_array.c -g -o quick
3r: 3
	./quick
