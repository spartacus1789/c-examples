#include<stdio.h>
#define IN 1
#define OUT 0
#define MAX 15
int main(){
    int c,state,nw,overflow,i,j;
    state=OUT;
    overflow=nw=0;
    int words[MAX];
    //init
    for(i=0;i<MAX;++i)
        words[i]=0;
    
    while(((c = getchar()) != EOF) || overflow){
        //test for overflow
        if(nw == MAX)
            overflow=1;

        if(c == ' ' || c == '\t' || c == '\n'){
            state = OUT;
        }else if(state == OUT){
            ++nw;
            ++words[nw];
            state=IN;
        }else{
            ++words[nw];
        }
    }

    //display horizontal histogram
    for(i=0;i<MAX;++i){
        if(words[i] > 0){
            printf("\n");
            for(j=0;j<words[i];++j)
                printf("*");
        }
    }

    printf("\nVertical histogram\n");

    //display vertical histogram
    
    for(i=MAX;i>0;--i){
        if(words[i] == 0)
            continue;
        for(j=0;j<MAX;++j){
            if(words[j] >= i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        
    }
}