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
        printf("enter your code: \n");
        scanf("%d",&r1.code);
        r1.salary;
        printf("enter your salary: \n");
        scanf("%f",&r1.salary);
        r1.name;
        printf("enter your name: \n");
        scanf("%s", r1.name);
        
        printf("the value of code is:%d\n",r1.code);
         printf("the value of code is:%f\n",r1.salary);
          printf("the value of code is:%d\n",r1.code);
        }    
        return 0;
    }
    
    
