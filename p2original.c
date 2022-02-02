#include <stdio.h>
int input()
{
  int a;
  printf("enter the value");
  scanf("%d",&a);
  return a;
}
int comp(int a,int b,int c)
{ 
  if((a>b)&&(a>c))
   return a;
  
  else if(b>c)
  return b;
  
  else
  return c;
}
int output(int a , int b , int c ,int big)
{
  printf("biggest number in %d,%d & %d is %d\n",a,b,c,big);
}
int main()
{
  int x,y,z,big;
  x=input();
  y=input();
  z=input();
  big=comp(x,y,z);
  output(x,y,z,big);
  return 0;
}