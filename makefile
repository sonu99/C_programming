a.out :menu.o add.o print.o delete.o save.o update.o delete_all.o reverse.o modify.o sort.o	
	cc -o a.out menu.o add.o print.o delete.o save.o update.o delete_all.o          reverse.o modify.o sort.o
menu.o:menu.c 
	cc -c menu.c -o menu.o
add.o:add.c
	cc -c add.c -o add.o
print.o:print.c
	cc -c print.c -o print.o
delete.o:delete.c
	cc -c delete.c -o delete.o
save.o:save.c
	cc -c save.c -o save.o
update_list:update_list.c
	cc -c update.c -o update.o
delete_all.o:delete_all.c
	cc -c delete_all.c -o delete_all.o
reverses.o:reverses.c
	cc -c reverse.c -o reverse.o
modify.o:modify.c
	cc -c modify.c -o modify.o
sort.o:sort.c
	cc -c sort.c -o sort.o
