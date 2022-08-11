#include<stdio.h>
int main()
{
  int n;
  int array[1000];
  int sum=0;
  printf("enter the size of the array");
  scanf("%d",&n);
  printf("enter the elements in arrays");
  for(int i=0;i<=n;i++)
    {
      scanf("%d",&array[i]);;
    }
  for(int i=0;i<=n;i++)
    {
      sum=sum+array[i];
    }
  printf("the sum of thr arrays %d",sum);
  return 0;
}