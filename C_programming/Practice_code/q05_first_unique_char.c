#include <stdio.h>
int first_unique(const char*s,char*out) 
{
  if (s==NULL || out==NULL)return 0;
    for (const char*p=s; *p!='\0';p++) 
    {
      int count=0;
       for (const char*q=s; *q!='\0'; q++) 
       {
          if (*q==*p) count++;
        }
        if (count==1) 
        {
            *out=*p;
            return 1;
        }
    }
    return 0;
}
int main(void) 
{
  const char*tests[] = {"swiss","aabbcc"};
  for (int i=0; i<2; i++) 
  {
      char c;
      printf("Input:\"%s\"\n", tests[i]);
      if (first_unique(tests[i],&c))
          printf("Output:'%c'\n\n",c);
      else
          printf("Output:No unique character\n\n");
  }
  return 0;
}
