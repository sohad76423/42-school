void rush( int x, int y)
{
    for ( int i = 1; i <= y; i++ )
    {
        for ( int n = 1; n <= x; n++ )
        {
            char t = 'X';
            if ( i == 1 && ( n == 1 || n == x ) ) 
                {
                    t = 'A';
                }
            else if ( i == y && (n == 1 || n == x ) )    
                {
                    t = 'C';
                }
            else if (( i == 1 || i == y) || (n == 1 || n ==  x))
                {
                    t = 'B';
                }
            else
                {
                    t = ' ';
                }
            ft_putchar(t);
        }    
    ft_putchar('\n');
    }
}