#include <unistd.h>

void     ft_print_numbers(void)
{
    char c;
    c = '0';
    while (c <= '9')
    {
        write (1, &c, 1);
        if (c < '9')
            write(1, &", ", 2);
        else
            break;
        c++;
    }
}

int main(void)
{
    ft_print_numbers();
    write(1, &"\n", 1);
}
