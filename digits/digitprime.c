#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

void digit(int no)
{
   int digit=0;

  while(no>0)
  {
    digit=no%10;
    printf("%d ",digit);
    no=no/10;

   }
}

BOOL prime(int d)
{  BOOL flag=TRUE;
   int i=0;
   if(d==1)
    {
      return FALSE;
    }
   if(d==2)
    {
      return TRUE;
    }
   for(i=2;i<d;i++)
    {
       if((d%i)==0)
        {
          flag=FALSE;
           break;
         }
    }
return flag;
}

int main()
{
   int v=0,d=0,t=0;
   BOOL iret=FALSE;
 printf("Enter value");
 scanf("%d",&v);
 digit(v);

  printf("\nprime digits are :");

  while(v>0)
  {
    d=v%10;
    iret=prime(d);
    if(iret==TRUE)
     {
       printf("%d ",d);
      }
     v=v/10;
  }

return 0;
}
