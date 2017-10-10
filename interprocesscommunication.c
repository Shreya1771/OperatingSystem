#include<sys/type.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>
#include<stdio.h>
#include<uinstd.h>
int main()
{
  struct
  { 
      long mtype;
      char mtext[50];
  } msg,buff;
      int msqid=msgget((Key_t)1,IPC_CREAT|0666);
      if(msqid<0)
      {
        printf("error");
      }
      int pid=fork();
      if(pid>0)
      {
        msg.mtype=1;
        strcpy(msg.mtext,"hellow shreya");
        int len=strlen(msg.mtext);
        if(msgsnd(msqid,&msg,len,0)==-1)
        {
          printf("msg error");
        }
      }
  else
  {
    if(msgrcv(msquid,&buff,50,1,0)==-1)
    {
      printf("error2");
      
    }
    else
    {
      printf("%s \n",buff.mtext);
    }
  }
