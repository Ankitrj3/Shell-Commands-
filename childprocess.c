#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(){
   pid_t cprocess;
   cprocess = fork();

if(cprocess == 0){
  printf("child process : PID = %d\n ",getpid());
}else if(cprocess>0){
printf("parent process : PID = %d\n ",getppid());
}else{
printf("fork failed process is not created \n");
}
}
