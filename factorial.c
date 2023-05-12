#include <stdio.h>

int fact(int numb)
{

     int n = numb;
     int i = 1;
     int x = 1;
     while (i < n)
     {
          ++i;
          x = x * i;
          printf("i is %d\n", i);
     }
     return x;
}

int main()
{
     int result = fact(4);
     printf("%d\n", result);
     return 0;
}
