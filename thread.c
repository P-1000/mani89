#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
int i,j;
void *thread_function(void *arg);
int main()
{
    pthread_t mythread;
    pthread_create(&mythread, NULL, thread_function, NULL);
   // pthread_join(mythread, NULL);
    printf("in main thread\n");
    for(i=20;i<25;i++)
    {
        printf("i=%d\n",i);
        sleep(1);
    } 
    return 0;
}
void *thread_function(void *arg)
{
    printf("in thread_function\n");
    for(j=0;j<5;j++)
    {
        printf("j=%d\n",j);
        sleep(1);
    }
    return NULL;
}

