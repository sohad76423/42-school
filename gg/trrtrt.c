#include <unistd.h>

void    rush(int x, int y)
{
    int a;
    int b;

    a = x;
    b = y;
    while (y > 0)
    {
        x = a;
        while (x > 0)
        {
            if ((b == y) || (y == 1))
            {
                if (x == a)
                    write(1, "A", 1);
                else if (x == 1)
                    write(1, "C", 1);
                else
                    write(1, "B", 1);
            }
            else
            {
                if ((x == a) || (x == 1))
                    write(1, "B", 1);
                else
                    write(1, " ", 1);
            }
            x--;
        }
        y--;
        write(1, "\n", 1);
    }
}

int    main(void)
{
    rush(5.6, 5);
    return (0);
}