
#include <stdio.h>

int fact(int numb)
{

     int n = numb, i = 1, x = 1;
     while (i < n)
     {

          ++i;
          x = x * i;
          printf("i is %d\n", i);
     }
     printf("factorial of %d\n", n);
     return x;
}

int main()
{
     int result = fact(6);
     printf("is %d\n", result);
     return 0;
}
