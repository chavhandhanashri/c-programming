/*
Write a program which accept number from user and count frequency of such a
digits which are less than 6.

*/

#include<stdio.h>

int CountTwo(int no)
{
   int digit=0;
   int count=0;
   while(no>0)
   {
     digit=no%10;
     if(digit<6)
     { 
       count++;
     }
     no=no/10;
   }

 return count;
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
