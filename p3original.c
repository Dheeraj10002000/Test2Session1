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
  for(int i=2; i<n); i++)
    if(n%i != 0)
      return 0;
}