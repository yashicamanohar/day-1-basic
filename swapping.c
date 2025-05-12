#include <stdio.h> 
int main(){ 
    int a,b,c;
 a=6;
 b=5;
 c=b;
 b=a;
 a=c;
 printf("A=%d\n",a);
 printf("B=%d\n",b);
}
