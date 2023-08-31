/*#include<stdio.h>
#include<conio.h>
void printHW(int count);
int main(int argc, char **argv){
printHW(7);
return 0;
}
void printHW(int count){
    if(count==0){
        return 0;
    }
    printf("Hello world!\n");
    printHW(count-1);
}*/

 #include<stdio.h>
 int fib(int n);
 int main() {
    printf("%d",fib(4));
return 0;
 }
 int fib(int n){
   int fibNa1=fib(n-1);
   int fibNa2=fib(n-2);
   int fibN=fibNa1+fibNa2;
   printf("fib of %d is:%d\n",n,fibN);
 if(n==0){
    return 0;
 }
 if(n==1){
    return 1;
 }
 }