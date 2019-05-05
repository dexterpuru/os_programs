#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main() {
	int res = mkfifo("fifo1",0777); //creates a named pipe with the name fifo1
	printf("named pipe created\n");
}
