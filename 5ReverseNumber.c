// Reverse number.c

//ผลลัพธ์
//Enter Number: 256
//Reverse number: 652

#include<stdio.h>
int main(){
    system("cls");
    int n,r=0;
    printf("Enter a no for reverse: ");
    scanf("%d",&n);
    
while (n != 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }
   printf("Reverse Number is %d\n",r);
   return 0;
}
