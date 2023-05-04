#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
  int n, fd1,fd2;
  char buf[50];
//  fd1 = open("test.txt", O_RDONLY);
  n = read(0, buf, 20);
  fd2 = open("target.txt",O_WRONLY|O_APPEND);
  write(fd2,buf,n);
}
