#include<stdio.h>

int main(){
    int c,i,nwhite,nother;
    int ndigits[10];
    //initialize elements
    nwhite=nother=0;

    for(i=0;i<10;++i)
        ndigits[i]=0;

    while((c = getchar()) != EOF){
        //check if it's a digit
        if(c >= '0' && c <= '9')
            ++ndigits[c-'0'];
        else if(c == ' ' || c == '\t' || c == '\n')
            ++nwhite;
        else
            ++nother;
    }
    
    //display results
    printf("Digits\n");
    for(i=0;i<10;++i)
        printf("%d\n",ndigits[i]);
    printf("whitespace : %d\nOthers : %d\n",nwhite,nother);
}