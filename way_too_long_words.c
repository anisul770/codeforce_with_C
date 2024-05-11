#include<stdio.h>
int main(){
    int n,i,j,*ptr;
    scanf("%d",ptr = &n);
    for (i=0; i<*ptr; i++){
        char word[100];
        scanf("%s", word);
        for(j=0;word[j]!='\0';++j);
        if(j<=10){
            printf(word);
        }
        else{
            printf("%c%d%c",word[0],j-2,word[j-1]);
        }
        printf("\n");
    }
    return 0;    
}
