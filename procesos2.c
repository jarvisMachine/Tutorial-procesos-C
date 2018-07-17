#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(){
	int pid;
	int status = 0;
	pid = fork();
	switch(pid){
		case -1: 
			printf("Error to create the son process\n");
			exit(1);
			break;	
		case 0:
			//Son process
			printf("Son: The process father is -> %d\n", getppid());
			printf("Son: My pid is -> %d\n",getpid());
			exit(1);
			break;
		default:
			//proceso padre
			printf("Father: My pid is -> %d\n", getpid());
			printf("Father: The pid of my son is ->  %d\n", pid);
			wait(&status);
			printf("Father: The son proces has finished con status ->  %d\n", status);
			exit(0);
		}
	return 0;
}
 
