 #include "main.h"
/**
* main - check the code.
*
* Return: Always 0.
*/
{
        int num, A, B;

        if (n >= 0 && n <= 15)
        {
                for (num = 0; num <= n; num++)
                {
                        _putchar('0');

                        for (A = 1; A <= n; A++)
                        {
                                _putchar(',');
                                _putchar(' ');

                                B = num * A;

                                if (B <= 99)
                                        _putchar(' ');
                                if (B <= 9)
                                        _putchar(' ');

                                if (B >= 100)
                                {
                                        _putchar((B / 100) + '0');
                                        _putchar(((B / 10)) % 10 + '0');
                                }
                                else if (B <= 99 && B >= 10)
                                {
                                        _putchar((B / 10) + '0');
                                }
                                _putchar((B % 10) + '0');
                        }
                        _putchar('\n');
                }
        }
}

