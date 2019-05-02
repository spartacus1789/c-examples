#include<stdio.h>

int main(){

   // int c;
    //copy it's input to output stream
//     while((c = getchar()) != EOF)
//         putchar(c);
//     printf("\nhello %d",EOF);

    //character counter
//     long count;
//     for(count=0;getchar() != EOF;++count)
//         ;
//     printf("%ld",count);

    //line counting

//     int nl,c;
//     nl=0;

//     while((c = getchar()) != EOF){
//         if(c == '\n'){
//             ++nl;
//         }    
//     }
//     printf("%d",nl);

   //count blank,new line,tab

   int nl,nb,nt,c;
   nl=nb=nt=0;
        while((c = getchar()) != EOF)
                if(c == '\n')
                        ++nl;
                else if(c == ' ')
                        ++nb;
                else if(c == '\t')
                        ++nt;
        printf("\nblank : %d\ntab : %d\nline : %d",nb,nt,nl);
}