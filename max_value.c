#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    scanf("%d %d %d",&a,&b,&c);
    
    d=a;
    if(d<b){
        d=b;
    }
    if(d<c){
        d=c;
    } 
    printf("%d",d);
}
