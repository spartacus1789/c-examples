#include<stdio.h>

void squeez(char s1[],char s2[]);
void squeez1(char s[],char c);
int main(){
    char one[16]="my name is yosef";
    char two[4]="aefn";
    squeez1(one,'c');
    
}

void squeez(char s1[],char s2[]){
    int i,j,k;
    for(i=k=0;s1[i] != '\0' ; i++){
        for(j=0;s2[j] != '\0' && s2[j] != s1[i];j++)
            ;
        if(s2[j] == '\0')
            s1[k++] = s1[i];
    }
    s1[k] = '\0';
    printf("%s",s1);
}
void squeez1(char s[],char c){
    int i,j;
    for(i=j=0;s[i] != '\0';++i)
        if(s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
    printf("%s",s);
}