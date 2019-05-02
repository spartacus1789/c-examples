#include<stdio.h>
void display(int v[]);
int main(){

    int i,j,gap,n,temp;
    int v[]={35,33,42,10,14,19,27};
    n=7;
    for(gap = n/2;gap > 0 ; gap /= 2){
        //printf("\n\ncurrent gap %d\n\n",gap);
        for(i=gap;i<n;++i){
            //printf("i = %d\n",i);
            for(j=i-gap;j>=0 && v[j] > v[j+gap];j-=gap){
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
                //printf("shift : %d and %d\n",v[j],v[j+gap]);
                display(v);
            }
            
        }
        
        
    }
}

void display(int v[]){
    int i;
    for(i =0;i<7;++i)
        printf("%d ",v[i]);
    printf("\n");
}