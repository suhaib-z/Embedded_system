#include <stdio.h>
static void reverse(int*a,int*b) 
{
  while (a<b) 
  {
      int t=*a;
      *a++ =*b;
      *b-- =t;
  }
}
void rotate_right(int*arr,int n,int k) 
{
  if (arr==NULL || n<=0) 
    return;
  k %=n;
  if (k<0) k+=n;
  if (k==0) return;
  reverse(arr,arr+n-1);
  reverse(arr,arr+k-1);
  reverse(arr+k,arr+n-1);
}
int main(void) 
{
  int arr[] = {1,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k=3;
  rotate_right(arr,n,k);
   printf("[");
    for (int i=0; i<n; i++)
        printf("%d%s",arr[i],i<n-1 ? ",":"");
    printf("]\n");
    return 0;
}
