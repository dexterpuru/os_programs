//compile:- gcc -o read read_fifo.c

#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main() {
	int res, n;
	char buffer[100];

	res = open("fifo1", O_RDONLY);
	n=read(res, buffer, 100);

	printf("Total bytes read: %d\n", n);
	printf("%s was passed to me \n", buffer);
	printf("Process %d finished\n", getpid());
}
