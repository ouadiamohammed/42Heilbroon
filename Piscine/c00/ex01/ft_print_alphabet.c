#include <unistd.h>

void ft_print_alphabet(void)
{
    char c;
    c = 'a';

    while (c <= 'z')
    {
        write (1, &c, 1);
        if (c < 'z')
            write (1, &", ", 2);
        else
            break;
        c++;
         
    }
    
}

int main ()
{
    ft_print_alphabet();
    return 0;
}
