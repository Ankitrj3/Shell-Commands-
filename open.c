#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
char b[100];
int n ,fd;
fd = open("new.txt",O_RDONLY);
n = read(fd,b,20);
write(1,b,n);
}
