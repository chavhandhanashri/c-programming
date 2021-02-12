/*
Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits
*/
#include<stdio.h>

int CountTwo(int no)
{
   int digit=0;
   int sum1=0,sum2=0;
   while(no>0)
   {
     digit=no%10;
     if(digit%2==0)
     { 
       sum1=sum1+digit;
     }
     else
     {
      sum2=sum2+digit;
     }
     no=no/10;
   }

 return sum1-sum2;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = CountTwo(iValue);
printf("%d",iRet);
return 0;
}
