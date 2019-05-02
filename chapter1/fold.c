#include<stdio.h>
#define MAXCOL 10
#define TABINC 8

int line[MAXCOL];
int expandtab(int pos);
void println(int pos);
int main(){
    int c,pos;
    pos=0;
    
    while((c = getchar()) != EOF){
        line[pos] = c;      //save the current char
        if(c == '\t'){
            pos=expandtab(pos);
        }
    }
}

int expandtab(int pos){
    line[pos] = ' ';    //tab is at least one blank
    for(++pos;pos < MAXCOL && pos % TABINC != 0 ; ++pos){
        line[pos] = ' ';
    }
    //check if the is a room left
    if(pos < MAXCOL){
        return pos;
    }else{
        println(pos);
        return 0;
    }
    
}

void println(int pos){
    int i;
    for(i =0 ; i < pos ;++i)
        putchar(line[pos]);
    //put newline if there is any printed chars
    if(pos > 0){
        putchar('\n');
    }
}