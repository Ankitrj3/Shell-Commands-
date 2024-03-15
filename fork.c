#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(){
printf("the process id is : %d\n",getpid());
fork();
fork();

printf("hello mr ankit\n");
return 0;

}
