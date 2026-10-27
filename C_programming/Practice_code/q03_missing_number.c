#include <stdio.h>
int missing_number(const int *arr, intn) 
{
  int x=n;
  for (int i=0; i<n; i++)
    x^=i ^ arr[i];
  return x;
}
int main(void) 
{
    int arr[] = {3,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Missing number = %d\n", missing_number(arr,n));
    return 0;
}
