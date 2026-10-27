#include <stdio.h>
int find_min_max(const int*arr,int n,int*out_min,int*out_max) 
{
  if (arr==NULL || out_min==NULL || out_max==NULL || n<=0)
      return -1;
   int mn=arr[0], mx=arr[0];
    for (const int*p=arr+1; p<arr+n; p++) 
    {
      if (*p<mn) mn=*p;
      if (*p>mx) mx=*p;
    }
    *out_min=mn;
    *out_max=mx;
    return 0;
}
int main(void) 
{
  int arr[] = {7,2,9,4,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  int mn,mx;
   if (find_min_max(arr,n,&mn,&mx)==0)
      printf("Minimum=%d\nMaximum=%d\n",mn,mx);
   else
      printf("Invalid input\n");
   return 0;
}
