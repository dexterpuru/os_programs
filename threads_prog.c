#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>


void *myfunc(void *myvar);

int main (int argc, char *argv[]) {
	pthread_t thread1, thread2;

	char *msg1= "first thread";
	char *msg2= "second thread";
	int ret1, ret2;

	ret1 = pthread_create(&thread1, NULL, myfunc,(void *) msg1);	// pthread_create(pthread_t *thread, pthread_attr_t *attr, void *(*start_routine) void(*)))
        //printf("sadfsfg\n");
	ret2 = pthread_create(&thread2, NULL , myfunc,(void *) msg2);

	printf("Main function after pthread_create\n");

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	printf("first thread ret1 = %d\n", ret1);
	printf("first thread ret1 = %d\n", ret1);
	return 0;
}

void *myfunc (void *myvar) {
	char *msg;
	msg = (char*) myvar;
	int i;
	for (i=1;i<10;i++) {
		printf("%s %d\n", msg, i);
		sleep(1);
	}
	return NULL;
}
