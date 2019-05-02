#include<stdio.h>
#define IN 1
#define OUT 0
int main(){
    // int c;
    // int flag=0;
    // while((c = getchar()) != EOF){
    //     //check if the input is a blank
    //     if(c == ' '){
    //         if(flag == 0)   //check if the previous input was a blank
    //             putchar(c);
    //             flag=1;
    //     }else{
    //         putchar(c);
    //         flag=0;
    //     }
            
    // }

    // int c;

    // while((c = getchar()) != EOF){
    //     if(c == ' ')
    //         printf("\\b");
    //     else if(c == '\t')
    //         printf("\\t");
    //     else if(c == '\n')
    //         printf("\\n");
    //     else
    //         putchar(c);
    // }

    //count word

    // int c,nw,state;
    // state = OUT;
    // nw=0;
    // while((c = getchar()) != EOF){
    //     if(c == ' ' || c == '\t' || c == '\n'){
    //         state = OUT;
    //     }else{
    //         if(state == OUT)
    //             ++nw;
    //             state=IN;
    //     }
    // }
    // printf("\nThere are %d words",nw);

    //print one word per line

    int c,state;
    state=OUT;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            putchar('\n');
            state=OUT;
        }else if(state == OUT){
            putchar(c);
            state=IN;
        }else
            putchar(c);
    }
}