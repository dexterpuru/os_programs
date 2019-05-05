//compile:- gcc -o write write_fifo.c

#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main() {
	int res, n;
	res = open("fifo1", O_WRONLY);
	write(res, "written", 7);
	printf("Process %d finished\n", getpid());
}
