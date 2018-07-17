#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(){
	printf("List of process: \n");
	if ( execl("/bin/ps","ps","-f",0) < 0) {
		fprintf(stderr,"Error in execl: %d\n", errno);
		exit(1);
	}
	else{
		printf("End the process");	
		exit(0);
	}
}

