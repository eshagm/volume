#include<stdio.h>

struct Distance {
   int feet,inch
}; 

int main() 
{
	struct Distance s,s1,sum; 
   printf("Enter 1st distance\n");
   printf("Enter feet = ");
   scanf("%d", &s.feet);
   printf("Enter inch = ");
   scanf("%d", &s.inch);
 
   printf("\nEnter 2nd distance\n");
   printf("Enter feet = ");
   scanf("%d", &s1.feet);
   printf("Enter inch = ");
   scanf("%d", &s1.inch);
   
   sum.feet = s.feet + s1.feet;
   sum.inch = s.inch + s1.inch;

   while(sum.inch>=12)
    {
   	    sum.feet++;
   	    sum.inch-=12;
    }
    printf("sum of distance = %d",sum.feet,sum.inch);
}

