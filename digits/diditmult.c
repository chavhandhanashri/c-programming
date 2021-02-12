#include<stdio.h>


int digitmult(int no)
{
  int mult=1,digit=0;

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
  int v=0, iret=0;

  printf("Enter number");
  scanf("%d",&v);

  iret=digitmult(v);

  printf("%d is multiplication",iret);
}
