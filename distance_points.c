#include<stdio.h>
#include<math.h>
int main(){
    int x1;
    int y1;
    int x2;
    int y2;
    
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    float c=pow(x2-x1,2)+pow(y2-y1,2);
    float distance=sqrt(c);
    printf("%f",distance);
}
