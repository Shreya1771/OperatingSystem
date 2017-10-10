#include<stdio.h>
#include<unistd.h>
int main()
{
int pid;
pid=fork();
   if(pid>0)
   {
    sleep(200);
    printf("child id %d \h",getpid());
    sleep(200);
    printf("parent id %d \n"getpid());
   }
   else
   {
    printf("child id %d \n",getpid());
    printf("parent id %d \n",getpid());
   }
   return 0;
   }
