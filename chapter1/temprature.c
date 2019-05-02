#include<stdio.h>
#define MAX 300
#define MIN 0
#define STEP 20
int main(){
    // float fhar,celi;
    // int min,max,step;
    // min=0;
    // max=200;
    // step=20;

    // fhar=min;
    // printf("%3s %9s\n","far","cel");
    // while(fhar <= max){
    //     celi=(5.0/9.0)*(fhar-32);
    //     printf("%3.0f%9.1f\n",fhar,celi);
    //     fhar=fhar+step;
    // }

    //using for loop
    int fahr;
    for(fahr = MIN ; fahr<=MAX ; fahr+=STEP)
        printf("%3d %9.1f\n",fahr,(5.0/9.0)*(fahr-32));
    
}