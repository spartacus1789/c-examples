#include<stdio.h>

int x,y;
int sum();
int main(){
    extern int x;
    x=4;
    y=5;
    printf("kkkkkk%d",sum(x,y));

}

int sum(){
    return (x+y);
}