#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <dirent.h>

int main(){
DIR *dp;
struct dirent *direntPT;
dp = opendir("ankit");
if(dp == NULL){
printf("error");
}
while((direntPT=readdir(dp))!=NULL){
printf("%s\n",direntPT->d_name);
printf("%ld\n",direntPT->d_ino);
}
return 0;

}
