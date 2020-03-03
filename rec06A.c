/*
Prompt:
 Recall	 that	 when	 a	 child	 terminates,	 but	 its	 parent	 is	 not	 currently	 waiting,	 the	
terminated	 child	 process	 becomes	 a	 zombie	 process.	 Use	 the	 following	 algorithm	
and	specific	instructions	to	develop	a	short,	simple	C	program	called	rec06A.c to	
create	a	zombie	process.

author: Justin Rapczynski
Date 3/2/2020
*/
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main() 
{
pid_t pid;
pid = fork();

if (pid == 0){

exit(0);

}
    else if (pid > 0){

        sleep(3);
        system("ps	-e	-o	pid,ppid,stat,user,cmd	|	grep	$USER");

    }

        else{
           	perror("fork error");
        }
        return 0;
}