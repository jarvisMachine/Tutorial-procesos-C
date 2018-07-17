#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(){
	pid_t pid;
	if (pid=fork()==0){
		// Son process
		printf("Son: My pid is -> %d\n", getpid());
	}
	else{
		// father process
		printf("Father: My pid is -> %d\n", getpid());
		printf("Father: My son have the pid -> %d\n", pid);
		printf("Father: My father and the grand father of my son have the pid -> %d\n", getppid());
	}
	return 0;
}
