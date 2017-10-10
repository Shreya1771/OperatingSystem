#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
   {
   int pid,pid1,i,j;
   pid=fork();
   if(pid=0)
   {
      printf("child process1 %d",getpid());
   }
   else
   {
   pid1=fork();
   if (pid1==0)
   {
      print("child process2: %d",getpid());
   }
   }
   }
