#include<stdio.h>
int main(){
    int n;
    int *ptr;
    scanf("%d",ptr=&n);
    if(*ptr%2==0 && *ptr!=2){       
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
