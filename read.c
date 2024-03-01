#include<unistd.h>
int main(){
char buff[50];
int n;
n=read(0,buff,10);
write(1,buff,n);
}
