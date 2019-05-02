#include<stdio.h>
#define TABINC 8

int main(){
    int pos,c,nb,nt;
    nb=nt=0;
    for(pos = 1; (c = getchar()) != EOF ; ++pos){
        if(c == ' '){
            if(nb % TABINC != 0){
                ++nb;
            }else{
                ++nt;
                nb=0;
            }
        }else{
            //print all tab if there is any
            printf("%d",nt);
            for(;nt>0;--nt){
                putchar('t');
            }
            //if the char is tab forget all the blanks
            if(c == '\t'){
                nb=0;
            }else{
                //display all the blanks
                for(;nb>0;--nb){
                    putchar(' ');
                }
            }
            putchar(c);

            //if new line reset the postion to 1
            if(c == '\n'){
                pos=0;
            }else if(c == '\t'){   
                //set pos to the next tab stop
                pos=pos+(TABINC -(pos-1 )% TABINC)-1;
            }
        }
    }
    
}