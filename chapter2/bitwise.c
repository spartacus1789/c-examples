#include<stdio.h>

void showbits(int n);
int main(){
    // showbits(8);
    // int i=9;
    // printf("\n9 in bitwise\n");
    // showbits(9);
    // printf("\n9 one's complement bitwise\n");
    // showbits(~9);
    // int n=9;
    // showbits(n);
    // showbits(n >> 3);

    // unsigned int d = 9, m = 3, y = 1990, year, month, day, date ;
    // date = ( y - 1980 ) * 512 + m * 32 + d ;
    // showbits(date);
    // showbits(date >> 9);
    // showbits(date << 7);
    // showbits((date << 7) >> 12);

    printf("%d",1 & 2);
    printf("%d",1 && 2);
}

void showbits(int n){
    int i,k,andmask;
    for(i=15;i>=0;--i){
        andmask = 1 << i;
        k=n & andmask;
        k == 0 ? printf("0") : printf("1");
    }
    printf("\n");
}