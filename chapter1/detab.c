#include<stdio.h>

#define TABINC 8
int main(){
    int c,nb,pos;
    pos=1;

    while((c = getchar()) != EOF){
        //check if the char is TAB
        if(c == '\t'){
            nb=TABINC-((pos-1) % TABINC);
            while(nb > 0){
                putchar(' ');
                ++pos;
                --nb;
            }
            
        }

        //check if char is newline
        else if(c == '\n'){
            putchar(c);
            pos=1;
        }
        else
        {
            putchar(c);
            ++pos;
        }
        

    }
}