#include <stdio.h>
int main() 
{
  int n,rev=0;
  printf("Enter a number:");
  scanf("%d",&n);
  do 
  {
    rev=rev *10 + n%10;
    n/=10;
  }
    while (n!=0);
    printf("Reversed=%d\n",rev);
    return 0;
}
