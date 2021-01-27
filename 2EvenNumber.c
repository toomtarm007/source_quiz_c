// Even number.c

// ผลลัพธ์
//Enter Number: 12
//2 4 6 8 10 12

#include<stdio.h>
void main(){
    system("cls");

    int i, n;
    printf("Enter a no : ");
    scanf("%d",&n);

    printf("Even no. of %d terms are :- \n",n);
    for(i=1; i<= n; i++) {
        if(i%2 != 0 )
            continue;
        else
            printf("%d ",i);
    }
}