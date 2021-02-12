/*
Write a program which accept number from user and return multiplication of all
digits.

*/

#include<stdio.h>

int CountTwo(int no)
{
   int digit=0;
   int mult=1;
   while(no>0)
   {
     digit=no%10;
     mult=mult*digit;
     no=no/10;
   }

 return mult;
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
