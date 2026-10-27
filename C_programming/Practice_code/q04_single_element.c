#include <stdio.h>
int single_element(const int *arr,int n) 
{
  int x =0;
  for (const int*p = arr; p<arr+n; p++)
    x^=*p;
  return x;
}
int main(void) 
{
    int arr[] = {4,1,2,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Single element = %d\n", single_element(arr,n));
    return 0;
}
