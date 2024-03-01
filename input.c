#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main(){
   char buff[500];
   int n;
   int fd = open("input.txt",O_WRONLY);
   while(1){
      if(buff[0]=='$'){
        break;
      }
      n = read(0,buff,500);

   write(1,buff,n);
   write(fd,buff,n);
  }
}
