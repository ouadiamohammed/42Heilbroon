#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char c;
    c = 'z';
    while (c >='a')
    {
       write (1, &c, 1);
       if(c > 'a')
        write (1, &", ", 2);
       else 
            break;
       c--;
    }   
}

int main ()
{
    ft_print_reverse_alphabet();
}
