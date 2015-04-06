#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

#include "pidinfo.h"

/* Part I */
void run_current()
{
        int pid = 1337;
	printf("PID ADDR: %p\n", &pid);
	FILE *fp;
	fp = fopen("/sys/kernel/kernellab/kcurrent","w");
	fprintf(fp, "%p", &pid);
	fclose(fp);
	
        /* Your code here. */
	
	//open file "/sys/kernel/kernellab/kcurrent
	//write pid memory address there
	//der kernel hocus pocus 
	//and the pid has become 1

        printf("Current addr: %d\n", pid);
}

/* Part II */
void run_pid()
{
        struct pid_info info;


        /* Your code here. */


        printf("PID: %d\n", info.pid);
        printf("COMM: %s\n", info.comm);
        printf("State: %ld", info.state);
}


int main()
{
        run_current();    
        run_pid();
        return EXIT_SUCCESS;
}
