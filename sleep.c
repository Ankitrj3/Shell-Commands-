#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(){
pid_t pp;
pp = fork();

if(pp==0){
printf("i am child process : %d\n",getpid());
printf("my parent process is id : %d\n",getppid());
}else{
sleep(2);
printf("i am parent process with id : %d\n",getpid());
printf("my child is process id : %d\n" , pp);
}

return 0;
}
