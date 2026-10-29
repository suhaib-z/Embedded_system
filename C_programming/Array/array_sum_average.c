#include <stdio.h>
int main() 
{
  int n,sum=0;
  printf("Enter size:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter %d elements:",n);
  for (int i=0;i<n;i++) 
  {
    scanf("%d",&arr[i]);
    sum+=arr[i];
  }
  printf("Sum=%d\n",sum);
  printf("Average = %.2f\n",(float)sum/n);
  return 0;
}
