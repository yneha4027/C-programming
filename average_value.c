#include<stdio.h>
int main(){
    float w1;
    float n1;
   float w2;
   float n2;
   
   scanf("%f %f %f %f",&w1,&n1,&w2,&n2);
   float average=((w1*n1+w2*n2)/(n1+n2));
   printf("%f",average);
}
