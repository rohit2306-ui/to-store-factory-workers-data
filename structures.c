#include <stdio.h>
#include<string.h>
        struct rohit{
        int code;
        float salary;
        char name[10];
    };
    
int main(){
    int a;
    printf("enetr your limit to sotre the data:\n");
    scanf("%d",&a);
    for(int i=0;i < a;i++){
        struct rohit r1;
        r1.code;
        printf("enter your %d person code: \n",i+1);
        scanf("%d",&r1.code);
        r1.salary;
        printf("enter your %d person salary: \n",i+1);
        scanf("%f",&r1.salary);
        r1.name;
        printf("enter your %d person name: \n",i+1);
        scanf("%s", r1.name);
        
        printf("the value of code is:%d\n",r1.code);
         printf("the value of code is:%f\n",r1.salary);
          printf("the value of code is:%d\n",r1.code);
        }    
        return 0;
    }
    
    
