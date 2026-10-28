#include <stdio.h>
int main() 
{
  float a,b;
  char op;
  printf("Enter a, operator,b:");
  scanf("%f%c%f",&a,&op,&b);
  switch (op) 
  {
    case'+':printf("%.2f\n",a+b);break;
    case'-':printf("%.2f\n",a-b);break;
    case'*':printf("%.2f\n",a*b);break;
    case'/':
      if (b != 0)printf("%.2f\n",a/b);
      else printf("Cannot divide by zero\n");
      break;
    default:printf("Invalid operator\n");
  }
  return 0;
}
