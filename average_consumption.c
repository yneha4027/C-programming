#include<stdio.h>
int main(){
    
    int distance;
    float fuel; 
    
    scanf("%d %f",&distance,&fuel);
    float average= distance/fuel;
    
    printf("%.3f",average);
}
