/*#include<stdio.h>
int add();
int main(){
add();
}
int add(){
    int a,b,sum;
    printf("enter two numbers:");
scanf("%d%d",&a,&b);
sum=a+b;
printf("the sum is: %d\n",sum);
return 0;
}*/

/*#include<stdio.h>
int mux(int,int);
int main(){
    int a,b,multi;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    multi=mux(a,b);
    printf("The multiply of two numbers is: %d\n",multi);
    return 0;
}
int mux(int m,int n){
int multi;
multi=m*n;
return multi;
}*/

/*#include<stdio.h>
int table(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    table(n);
    return 0;
} 
int table(int n) {
    int i;
    for(i=1;i<=10;i++){
printf( " %d\n",(n*i));
    }
}*/

/*#include<stdio.h>
#include<math.h>
int conversion(long n);
int main(){
    long n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d binary=%d decimal",n,conversion(n));
    return 0;
}
int conversion(long n){
    int decimal=0,i=0,remi;
    while(n!=0){
       remi=n%10;
       n=n/10;
       decimal+=remi*pow(2,i);
       ++i; 
    }
    return decimal;
}*/

/*#include<stdio.h>
int main(){
    int aadhar[5];
    //Input
printf("Please Enter the numbers\n");
for(int i=0;i<5;i++){
    printf("Entered numbers: who are entered by user=\n");
    scanf("%d",&aadhar[i]);
}
//Output
printf("The total Preview");
for(int i=0;i<5;i++){
    printf("THE number of Entries:%d\n",aadhar[i]);
}
return 0;
}*/

/*#include<stdio.h>
int sum(int,int);
float average(int,int);
int main(){
    int n1,n2,sums;
    float avg;
    printf("Enter first number");
    scanf("%d",&n1);
    printf("Enter second number");
    scanf("%d",&n2);
    sums=sum(n1,n2);
    avg=average(n1,n2);
    printf("Number1: %d, Number2: %d\n",n1,n2);
    printf("the total sum=%d,Average=%f\n",sums,avg);
    return 0;
}
int sum(intx,inty){
    int sum;
    int x,y;
    sum=x+y;
    return sum;
}
float average(intx,inty){
    float average;
    int x,y;
    return ((float)(x)+(float)(y))/2;
}*/
                                     /*RECURSION*/
/*#include<stdio.h>
int factorial(int m);
int main(){
    int x,y;
    printf("Enter a number");
    scanf("%d",&x);
    y=factorial(x);
    printf("%d",y);
}
int factorial(int x){
    if(x==0)
    return 1;
    else
    return x*factorial(x-1);
}*/

/*#include<stdio.h>
#include<math.h>
int power(int n1,int n2 );
int main(){
    int base,power,result;
    printf("Enter the base");
    scanf("%d",&base);
    printf("Enter the power");
    scanf("%d",&power);
    result=pow(base,power);
    printf("%d",result);
    return 0;
}
int power(int base,int power){
    if(power!=0)
    return (base*pow(base,power-1));
    else
    return 1;
}*/

/*wap to find sum of natural numbers using recursion*/
/*#include<stdio.h>
int add(int m);
int main(){
    int n,result;
    printf("Enter a positive inegar");
    scanf("%d",&n);
    result=add(n);
    printf("%d",result);
    return 0;
}
int add(int num){
if(num!=0)
return num+add(num-1);
else
return num;
}*/

/*wap to print fibonacci series using recursion*/
/*#include<stdio.h>
int fibo(int a){
    if(a==0){
        return 0;
    }
    if(a==1){
        return 1;
    }
    return fibo(a-1)+fibo(a-2);
}
int main(){
    int a,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(a=0; a<=n; a++){
    printf("%d\n",fibo(a)); 
    }
    return 0;
}*/

/*wap show a array to show complie time intialization*/
/*#include<stdio.h>
int main(){
int array[20],a,n;
printf("enter array to show number:");
scanf("%d",&n);
printf("please put number in this:\n");
for(a=0;a<n;a++){
    scanf("%d",&array[a]);
}
printf("Your complete result:\n");
for(a=0;a<n;a++){
    printf("%d\n",array[a]);
}
return 0;
}*/

/*c program to delete data item from Array*/     /*MOST VERY VERY IMPORTANT*/
/*#include<stdio.h>
int main(){
    int a[85],p,i,m;
    printf("Enter number of elements:");
    scanf("%d",&m);
    for(i=0;i<=m;i++){
scanf("%d",&a[i]);
    }
    printf("Enter the location for deletion\n");
    scanf("%d",&p);
    if(p>=m+1)
    printf("deletion is not possible:\n");
    else
    for(int i=p-1;i<=m-1;i++)
a[i]=a[i+1];
printf("result is %d\n");
for(i=0;i<=m-1;i++)
printf("%d\n",a[i]);
return 0;
}*/

/*FIND HIGEST NUMBER USING ARRAY*/
/*#include<stdio.h>
int main(){
    int a[20],m,p,high=0;
    printf("Enter the elements:");
    scanf("%d",&m);
    for(p=0;p<=m-1;p++){
        scanf("%d",&a[p]);
    }
    for(p=0;p<=m-1;p++){
        if(a[p]>high){
            high=a[p];
        }
    }
    printf("\n The higest number is:%d",high);
    return 0;
}*/

/*c program for search a data item and find its position in array*/
/*#include<stdio.h>
int main(){
    int a[85],i,j,m,data;
    printf("enter the elements:");
    scanf("%d",&m);
    for(i=0;i<=m;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=m;i++){
        printf("%d\n",a[i]);
    }
    printf("enter number to be found:");       //code give me wrong output
    scanf("%d",&j);
    while(j<m)
    {
        if(a[j]==data){
            break;
        }
        j=j+1;
    }
    printf("element found at position %d\n",data,j);
}*/

/*C PROGRAM TO FIND SUM AND AVERAGE OF ELEMENT OF ARRAY*/
/*#include<stdio.h>
int main(){
    int a[20],i,m;
    float avg,sum;
    printf("Enter the elements:\n");
    scanf("%d",&m);
    printf("The Elements are:\n");
    for(i=0;i<=m-1;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=m-1;i++){
        sum=sum+a[i];
    }
    avg=sum/m;
    printf("\n Sum of Elements:%f",sum);
    printf("\n Average of elements:%f",avg);
    return 0;
}*/

/*C PROGRAM TO PRINT THE TRANSPOSE OF A MATRIX*/
/*#include<stdio.h>
int main(){
    int arr[5][5],a,b,row,col;
    printf("Enter numbers of Rows:");
    scanf("%d",&row);
    printf("Enter numbers of column:");
    scanf("%d",&col);
    printf("\n Enter the matrix data:\n");
    for(a=0;a<=row-1;a++){
        for(b=0;b<=col-1;b++){
            printf("\n Enter the element[%d][%d]:",a,b);
            scanf("%d",&arr[a][b]);
        }
    }
    printf("\n\n Elements in the matix are:\n");
    for(a=0;a<=row-1;a++){
        for(b=0;b<=col-1;b++){
            printf("\t%d",arr[a][b]);
        }
        printf("\n");
}
printf("\n\n Transpose of a matrix:\n");
for(a=0;a<=row-1;a++){
    for(b=0;b<=col-1;b++){
        printf("\t%d",arr[b][a]);
    }
    printf("\n");
}
return 0;
}*/

/*c program to read and print two-dimensional array */
/*#include <stdio.h>
int main(){
   int matrix[5][5];
   int a,b,row,col;
   printf("Enter the row:");
   scanf("%d",&row);
   printf("Enter the column:");
   scanf("%d",&col); 
   printf("Enter elements in array:");
   for(int a=0; a<=row-1; a++){
    for(b=0; b<=col-1; b++){
        scanf("%d",&matrix[a][b]);
   }
}
printf("\nElements in the matrix:\n");
for(a=0; a<=row-1; a++){
    for(b=0; b<=row; b++){
        printf("%d ",matrix[a][b]);
    }
    printf("\n");
}
 return 0;
}*/
                                                 //Structure
/*c program to create,declare and intialize strcture*/                                                 
#include<stdio.h>
