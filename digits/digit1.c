/*
Write a program which accept number from user and display its digits in reverse
order.
Input :2395
Output : 
5
9
3
2
Input :-1018
Output : 
8
1
0
1
Input :9000
Output :
0
0
0
9
*/
#include<stdio.h>

void digits(int no)
{
  int digit=0;
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
  printf("Enter number\n");
  scanf("%d",&v);
  digits(v);
return 0;
}
