process_image:process_image.c
	gcc process_image.c -o process
program2:program2.c
	gcc program2.c -pthread -o program2
kill:kill.c
	gcc kill.c -o kill
small_cpl_let:small_cpl_let.c
	gcc small_cpl_let.c -pthread -o cap_small
dir_cre_rem:dir_cre_rem.c
	gcc dir_cre_rem.c -o directory
create_file:create_file.c
	gcc create_file.c -o create
ls_command:ls_command.c
	gcc ls_command.c -o ls
signal_behaviour:signal_behaviour.c
	gcc signal_behaviour.c -o signal
even_odd:even_odd.c
	gcc even_odd.c -pthread -o even_odd
cond_even_odd:cond_even_odd.c
	gcc cond_even_odd.c -pthread -o cond_even
clean:
	rm *.o
