#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
  pid_t q;
  q = fork();
  if(q<0){
    printf("Error\n");
  }
  else if(q == 0){
    printf("child having pid %d\n",getpid());
    printf("parent of child having pid %d\n",getppid());
  }
  else{
    printf("parent having pid %d\n" ,getpid());
    printf("My child's pid %d\n",q);
  }


}
