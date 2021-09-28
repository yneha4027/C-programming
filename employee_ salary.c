#include<stdio.h>
int main(){
    char id[11];
    scanf("%s",id);
    //printf("%s\n",id);
    
    int hrs;
    scanf("%d",&hrs);
    //printf("yghjghj %d\n",hrs);
    
    float salary;
    scanf("%f",&salary);
   // printf("%f\n",salary);
    
    printf("employeid= %s , salary= %.2f\n",id,salary*hrs);
}
