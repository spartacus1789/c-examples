#include<stdio.h>

void expand(char s1[],char s2[]);
int main(){

    char s1[]="a-z0-9";
    char s2[100];
    expand(s1,s2);
    printf("%s",s2);
}

void expand(char s1[],char s2[]){
    int c,i,j;
    i=j=0;

    //looping over s1 
    while((c = s1[i++]) != '\0'){
        //check for compressed statment like a-z
        if(s1[i] == '-' && s1[i+1] >= c){
            ++i;    //jump to the next element (rigth range of statment)
            while(c < s1[i])
                s2[j++] = c++;
        }else{
            s2[j++] = c;
        }

    }
    s2[j] = '\0';   //add end line mark
}