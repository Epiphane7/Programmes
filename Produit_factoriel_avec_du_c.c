#include <stdio.h>
#include <stdlib.h>
int factorielle (int n)
{
    int i;
    if (n==0)
    {
        return 1;
    }
    else
    {
        for (i =1; i<=n-i; i++)
        {
            n=n*(n-i);
        }
        return n;
    };
};
int main()
{
    int n;
    int result;
    printf("Entrez n s'il vous plait! \n");
 scanf ("%i",&n);
 result=factorielle(n);
 printf("%i factorielle vaut %i\n",n,result);
return 0;
}
