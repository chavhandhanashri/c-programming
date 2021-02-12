#include<stdio.h>


void digit(int no)
{
   int i=0,digit=0;

  if(no<0)
 {
   no=-no;
  }

  while(no>0)
  {
    digit=no%10;
  
   printf("%d\n",digit);
   
    no=no/10;

  }

}

int main()
{
  int v=0;

  printf("Enter no");
   scanf("%d",&v);

  digit(v);

return 0;

}
