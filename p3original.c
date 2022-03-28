#include<stdio.h>
int input_number()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
{
  for(int i=2; i<=n/2; i++)
    if(n%i == 0)
    {
      return 0;
    } 

}
void output(int n, int is_prime)
{
  if(is_prime==0)
  {
    printf("%d is not prime",n);
  }
  else printf("%d is prime",n);
}
int main()
{
  int a,prime;
  a=input_number();
  prime=is_prime(a);
  output(a,prime);
  return 0;
}