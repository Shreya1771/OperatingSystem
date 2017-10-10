# OperatingSystem
 fork(),getpid(),getppid(),wait()
 
 fork()- System call fork() is used to create processes. It takes no arguments and returns a process ID. The purpose of fork() is to create a new process, which becomes the child process of the caller. After a new child process is created, both processes will execute the next instruction following the fork() system call. Therefore, we have to distinguish the parent from the child. This can be done by testing the returned value of fork():
    If fork() returns a negative value, the creation of a child process was unsuccessful.
    fork() returns a zero to the newly created child process.
    fork() returns a positive value, the process ID of the child process, to the parent. The returned process ID is of type pid_t defined in sys/types.h. Normally, the process ID is an integer. Moreover, a process can use function getpid() to retrieve the process ID assigned to this process. 
 
 wait()- The system call wait() is easy. This function blocks the calling process until one of its child processes exits or a signal is received. For our purpose, we shall ignore signals. wait() takes the address of an integer variable and returns the process ID of the completed process. Some flags that indicate the completion status of the child process are passed back with the integer pointer. One of the main purposes of wait() is to wait for completion of child processes.
The execution of wait() could have two possible situations.
   If there are at least one child processes running when the call to wait() is made, the caller will be blocked until one of its child processes exits. At that moment, the caller resumes its execution.
   If there is no child process running when the call to wait() is made, then this wait() has no effect at all. That is, it is as if no wait() is there. 
 
 
  msgrcv(),msgsnd()-A message queue behaves like any other queue.  Using a message queue , parent and child can have  communication. The messages can be kept in the queue and the order of retrieval of messages can be  random. A message queue is created with msgget() function.   { Should understand the parameters of  msgget() } 
The created queue can be checked by using command ipcs –q . 
msgsnd() is used to send the message in the queue. The msgsnd() uses 4 parameters, starting address of  the structure messagesend, the length of the message and a 0 or IPC_NOWAIT
