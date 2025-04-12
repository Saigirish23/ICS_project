#include <stdio.h>
/*
        *    |            1    |            A
      * *    |          1 2    |          A B
    * * *    |        1 2 3    |        A B C
  * * * *    |      1 2 3 4    |      A B C D
* * * * *    |    1 2 3 4 5    |    A B C D E
*/
int main(void)
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=2*(5-i);j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}