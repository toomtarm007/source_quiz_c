//ผลลัพธ์
//Enter Exchange Money: 2564
//1000 bath: 2
//500 bath: 1
//100 bath: 0
//50 bath: 1
//10 bath: 1
//1 bath: 4

#include<stdio.h>
void main(){
    system("cls");

    int m,b1000,b500,b100,b50,b20,l10,l5,l1;
    printf("Enter Exchange Money: ");
    scanf("%d",&m);

    b1000 = m/1000;
    m = m%1000;
    b500 = m/500;
    m = m%500;
    b100 = m/100;
    m = m%100;
    b50 = m/50;
    m = m%50;
    b20 = m/20;
    m = m%20;
    l10 = m/10;
    m = m%10;
    l5 = m/5;
    m = m%5;
    l1 = m;

    printf("1000 bath: %d\n",b1000);
    printf("500 bath: %d\n",b500);
    printf("100 bath: %d\n",b100);
    printf("50 bath: %d\n",b50);
    printf("20 bath: %d\n",b20);
    printf("10 bath: %d\n",l10);
    printf("5 bath: %d\n",l5);
    printf("1 bath: %d\n",l1);
}