#include<stdio.h>
int main(){
//Write a script that accepts a directory name as a command line argument and displays the number of files in that directory.
char dir[100];
printf("Enter the directory name: ");
scanf("%s",dir);
int count=0;
FILE *fp;
fp=popen("ls -l","r");
char ch;
while((ch=fgetc(fp))!=EOF){
if(ch=='\n')
count++;

}
