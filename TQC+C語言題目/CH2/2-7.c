#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int i=1, total=0;//i的初始值為1
 while (i <= 100)//因為總合至100，所以100也要加進去
 {
  total += i;
  i++;
 }
 printf("1加到100的總和:%d\n", total);
 system("PAUSE");
 return 0;
}
