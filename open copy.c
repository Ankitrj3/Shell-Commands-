#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main(){
   char buff[50];
   printf("overwriting the file\n");
   int f1 = open("F1.txt", O_RDWR | O_CREAT ,0642);
   int n = read(0,buff,14);
   write(f1,buff,n);
   int f2 = open("F2.txt", O_CREAT | O_RDWR | O_APPEND ,0664);
   char buff2[50];
   int n2 = read(0,buff2,45);
   write(f2,buff2,n2);
   write(f2,buff,n);
   
   close(f2);


}
