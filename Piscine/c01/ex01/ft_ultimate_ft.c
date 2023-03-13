#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main()
{
    int a;
    int *********nbr1;
    int ********nbr2;
    int *******nbr3;
    int ******nbr4;
    int *****nbr5;
    int ****nbr6;
    int ***nbr7;
    int **nbr8;
    int *nbr9;

    nbr1 = &nbr2;
    nbr2 = &nbr3;
    nbr3 = &nbr4;
    nbr4 = &nbr5;
    nbr5 = &nbr6;
    nbr6 = &nbr7;
    nbr7 = &nbr8;
    nbr8 = &nbr9;
    nbr9 = &a;

    ft_ultimate_ft(nbr1);
    printf("%d", a);
    return 0;
}
