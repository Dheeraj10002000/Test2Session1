#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int find_fibo(int n)
{
  int a=0;
  int b=1;
  int c=0;
  for(int i=0; i<=n; i++)
    {
      c=a;
      a=b;
      b=b+c;
    }
  return c;
}
void output(int n, int fibo)
{
  printf("the %dth term is %d",n,fibo);
}
int main()
{
  int a, fibo;
  a=input();
  fibo=find_fibo(a);
  output(a,fibo);
  return 0;
}