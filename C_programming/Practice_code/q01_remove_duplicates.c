#include <stdio.h>
int remove_duplicates(int*arr, int n) 
{
  if (arr==NULL || n<=0) return 0;
    int*w = arr;
    for (int*r = arr+1; r<arr + n; r++) 
    {
      if (*r != *w) 
      {
         w++;
          *w = *r;
        }
    }
    return (int)(w-arr) + 1;
}
int main(void) 
{
  int arr[] = {1,1,2,2,3,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int len = remove_duplicates(arr,n);

    printf("Length = %d\nArray = [",len);
    for (int i=0; i<len; i++)
        printf("%d%s",arr[i],i<len-1 ? ",":"");
    printf("]\n");
    return 0;
}
