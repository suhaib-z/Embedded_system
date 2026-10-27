#include <stdio.h>
void move_zeros(int *arr, int n) 
{
  if (arr==NULL || n<=0) return;
  int *w=arr;
  for (int *r = arr; r<arr +n; r++) 
  {
    if (*r!=0) 
    {
        int t=*r;
         *r =*w;
         *w =t;
           w++;
        }
    }
}
int main(void) 
{
  int arr[] = {0,1,0,3,12};
  int n = sizeof(arr) / sizeof(arr[0]);
  move_zeros(arr,n);

    printf("[");
    for (int i=0; i<n; i++)
        printf("%d%s", arr[i],i<n -1 ? ",":"");
    printf("]\n");
    return 0;
}
