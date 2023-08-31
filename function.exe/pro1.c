#include<stdio.h>
int main(){
    int i;
    int ans1, ans2, ans3,ans4, ans5;
    int point1, point2, point3, point4, point5;
printf("WELCOME TO THE GAME\n\n");
printf("> PRESS 7 TO START QUIZ GAME\n");
printf("> PRESS 0 TO QUIT THE GAME\n");
scanf("%d",&i);
if(i==7){
    printf("THE GAME HAS STARTED \n\n");
}
else if(i==0){
    printf("THE GAME HAS ENDED \n\n");
}
else{
    printf("INVALID GAME \n\n");
}
if(i==7){
    printf("1)WHICH ONE IS THE FIRST ENGINE IN INTERNET ?\n\n");
    printf("1)GOOGLE\n");
    printf("2)ARCHI\n");
    printf("3)WAIS\n");
    printf("4)ALTAVISTA\n");
    printf("ENTER YOUR ANSWER:");
    scanf("%d",&ans1);
    if(ans1==2){
        printf("CORRECT ANSWER\n");
        point1=5;
        printf("YOU HAVE SCORED %d POINT \n",point1);
    }
    else{
        printf("WRONG ANSWER\n");
    }
    printf("\n\n");
printf("2)WHICH ONE IS THE FIRST WEB BROWSER INVENTED IN 1990 \n\n");
printf("1)INTERNET EXPLORER\n");
printf("2)MOSAIC\n");
printf("3)MOZILLA\n");
printf("4)NEXUS\n");
printf("ENTER YOUR ANSWER:");
scanf("%d",&ans2);
if(ans2==4){
    printf("CORRECT ANSWER\n");
    point2=10;
    printf("YOU HAVE SCORED %d POINT \n",point2);
}
else{
    printf("WRONG ANSWER\n");
}
printf("\n\n");	
printf("3)FIRST COMPUTER VIRUS IS KNOWN AS ? \n\n");
printf("1)RABBIT\n");
printf("2)CREEPER VIRUS \n");
printf("3)EIK CLONER\n");
printf("4)SCA VIRUS \n");
printf("ENTER YOUR ANSWER:");
scanf("%d",&ans3);
if(ans3==3){
printf("CORRECT ANSWER\n");
point3=15;
printf("YOU HAVE SCORED %d POINT \n",point3);
}
else{
    printf("WRONG ANSWER\n");
}
printf("\n\n");
printf("4)FIREWALL IN COMPUTER IS USED FOR ?\n\n");
printf("1)SECURITY\n");
printf("2)DATA TRANSMISSION\n");
printf("3)MONITORING\n");
printf("4)AUTHENTICATION\n");
printf("ENTER YOUR ANSWER:");
scanf("%d",&ans4);
if(ans4==1){
    printf("CORRECT ANSWER\n");
    point4=20;
    printf("YOU HAVE SCORED %d POINTS\n",point4);
}
else{
    printf("WRONG ANSWER\n");
}
printf("\n\n");
printf("5)WHICH OF THE FOLLOWING IS NOT A DOUTBASE MANAGEMENT\n");
printf("1)MYSQL\n");
printf("2)ORCALE\n");
printf("3)COBAL\n");
printf("4)SYBASE\n");
printf("ENTER YOUR ANSWER:");
scanf("%d",&ans5);
if(ans5==3){
    printf("CORRECT ANSWER\n");
    point5=25;
    printf("YOU HAVE SCORED %d POINT\n",point5);
}
else{
    printf("WRONG ANSWER\n");
}
}
return 0;
}