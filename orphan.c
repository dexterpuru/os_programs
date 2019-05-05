#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() { // Create a child process
	int pid = fork();
	if (pid > 0)
		printf("in parent process\n"); // Note that pid is 0 in child process and negative if fork() fails
	else if (pid == 0) {
		sleep(10);
		printf("in child process");
	}
	return 0;
}
