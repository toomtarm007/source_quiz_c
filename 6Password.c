//Password
//ผลลัพธ์
//Input the password: 2222
//Wrong password, try another
//Input the password: 1234
//Correct password

#include<stdio.h>
void main(){
     system("cls");

     int n;
     printf("Input the password: ");
     scanf("%d",&n);
    
     if (n == 1234){
        printf("Correct password");
     }
     else{
        printf("Wrong password");
     } 
}