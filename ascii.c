#include<stdio.h>
void main ()
{
    char ch ;
    int av;
    printf("enter a character: ");
    scanf("%c",&ch);
    av=ch;
     printf("ascii value %c : %d \n ", ch,av );
     if (av>=65 && av <=90){
        printf(" %c is a capital  ");
          }
 else if (av>=97 && av <=122 ){
    printf(" %c is small ");
 }
 else if(av>=48 && av<=57){
   printf("%c is number");

 }
 else if (( av >=0&&av<=47)||(av>=58 && av>=64)||(av>=91&&av<=96)||(av>=123&&av<=127)){
   printf("%c special character");
 }



    return 0;
}
