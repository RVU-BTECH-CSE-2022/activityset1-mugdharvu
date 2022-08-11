#include<stdio.h>
float m;
{
printf("%s",chr);
scanf("%f",&m);
return m;
}
float find_largest(int x, int y, int z)
{
  float l;
  if (x>=y)
  {
    l=x;
  }
  if(x<y)
  {
    l=y;
  }
  if(l<z)
  {
    l=z;
  }
  return l;
}
float output(float x,float y, float z, float a)
{
  printf("the largest jumber among%f, %f and %f is %f\n",x,y,z,a);
  return 0;
}
int main(){
  float x,y,z;
  printf("enter the three numbers:\n");
  x=inputnum("1st no.");
  y=inputnum("2nd no.");
  z=inputnum("3rd no.");
  float a=find_largest(x,y,z);
  output(x,y,z,a);
  return 0;
  }
}
