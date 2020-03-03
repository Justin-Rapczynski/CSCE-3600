/*
Prompt:
Recall	that	a	child	process	whose	parent	has	terminated	is	referred	to	as	an	orphan
process.	 This	means	 that	 the	 child	 is	 still	 executing,	 but	 its	 parent	 has	 terminated	
and	 that	 some	 process	 is	 then	 needed	 to	 handle	 the	 child’s	 exit	 status.	 Use	 the	
2 following	algorithm	and	 specific	 instructions	 to	 develop	a	 short,	 simple	 C	 program	
called	rec06B.c to	create	an	orphan	process

author: Justin Rapczynski
Date 3/2/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

char *name;
pid_t pid;
pid = fork();

if(pid == 0){
    // child
    printf(	"child:	%d	started\n",getpid() );
    printf( "child:	 parent	=	%d\n", getpid() );
    printf("Child:....\n");
    sleep(25); // while this wait enter ps -ef|grep $USER, Explanation below:
    printf("Woke up\n");
}
    else if(pid > 1){
        //parrent
        printf( "parent:	 %d	 started\n", getpid() );
        printf( "parent:	 parent	 =	%d\n", getpid() );

    }
        else{
            //error
            perror("fork error");
        }
name = (pid == 0) ? ("Child") : ("Parent");
printf( "%s:	terminating…\n", name);

return 0;
}

/* 	You	should	notice	your	child	process	is	still	running,	but	
has	 1	 for	 its	 parent	 process	 – this	 means	 that	 the	 init/systemd process	 has	
taken	 over	 as	 the	 parent	 (since	 our	 parent	 terminated)	 and	 will	 handle	 the	 child	
once	it	has	terminated.
*/