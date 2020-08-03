#include<stdio.h>

struct Person{
 int age;
 float salary;

};

int main()
{
   struct Person person[4];
   int i;
   for(i=0;i<4;i++)
   {
       printf("enter the value of person %d\n",(i+1));
       printf("enter age:");
       scanf("%d\n",&person[i].age);
       printf("enter salary:");
       scanf("%f\n",&person[i].salary);

   }

    for(i=0;i<4;i++)
   {
       printf("enter the value of person %d\n",(i+1));
       printf("enter age:%d\n",person[i].age);
        printf("enter salary:%f\n",person[i].salary);


   }






}
