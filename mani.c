#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
  //read a characters from user with read system call
  char buffer[1024];
  int nread = read(0, buffer, 1024);
  if (nread == -1)
  {
    perror("read");
    exit(1);
  }
  //write the characters to the standard output with write system call
  int nwrite = write(1, buffer, nread);
  if (nwrite == -1)
  {
    perror("write");
    exit(1);
  }
  return 0;

}
