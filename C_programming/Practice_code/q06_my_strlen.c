#include <stdio.h>
#include <stddef.h>
size_t my_strlen(const char*str) 
{
  if (str==NULL) 
    return 0;
  const char*p =str;
  while (*p!='\0') p++;
  return (size_t)(p-str);
}

int main(void) 
{
  printf("Length of\"Embedded\"= %zu\n",my_strlen("Embedded"));
  printf("Length of NULL=%zu\n",my_strlen(NULL));
  return 0;
}
