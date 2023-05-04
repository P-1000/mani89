#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/wait.h>
#include<stdio.h>
int main(){
  pid_t p;
  int w1,wstatus;
  p = fork();
  if(p==0){
//    sleep(10);
    printf("I am child having PID %d\n", getpid());
    printf("My Parent PID is %d\n", getppid());
  }
  else{
//    wait(NULL);
    w1 = wait(&wstatus);
    printf("Status is %d\n", WIFEXITED(wstatus));
    printf("Statys is %d\n", w1);
    printf("I am parent having PID %d\n", getpid());
    printf("My child PID is %d\n", p);
  }
}

