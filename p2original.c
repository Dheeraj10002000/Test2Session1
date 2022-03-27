#include<stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the points\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}

float is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float z;
  z=0.5*((x1)*(y2-y3)+(x2)*(y3-y1)+(x3)*(y1-y2));
  return z;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, float istriangle)
{
  if(istriangle==0)
  {printf("points doesnt form triangle\n");}
  else
    printf("points form triangle\n");
}

int main()
{
  float x1,x2,x3,y1,y2,y3;
  float a;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  a=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,a);
  return 0;
}





















































































