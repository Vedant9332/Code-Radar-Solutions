#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("%d",a);
    }
    else if(b>c&&c>a){
        printf("%d",b);
    }
    else if(c>b&&c>a){
        printf("%d",c);
    }
    else if(a=b=c){
        printf("%d",a);
    }
    return 0;

}