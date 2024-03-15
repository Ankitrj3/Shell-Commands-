#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(){
int x;
x = mkdir("ankit",0777);
if(x==-1){

printf("error\n");
}
else
{
printf("created");
}
return 0;
}
