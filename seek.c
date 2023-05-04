#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
  int n,f,f1,f2;
  char buf[50];
  f = open("seeking",O_RDWR);

  lseek(f,-11,SEEK_END);

  read(f,buf,10);
  write(1,buf,10);
}

