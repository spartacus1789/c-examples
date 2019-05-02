#include <stdio.h>
#include <ctype.h>
double atof(char s[]);
int main()
{
    printf("%f\n", atof("14.4e-5"));
}

double atof(char s[])
{
    int i, sign, exp, esign;
    double val, power;
    //skip white spacess
    for (i = 0; isspace(s[i]); ++i)
        ;
    sign = (s[i] == '-') ? -1 : 1;

    //skip the sign
    if (s[i] == '-' || s[i] == '+')
        ++i;

    for (val = 0.0; isdigit(s[i]); ++i)
    {
        val = 10.0 * val + (s[i] - '0');
    }

    //skip the dot
    if (s[i] == '.')
        ++i;

    for (power = 1.0; isdigit(s[i]); ++i)
    {
        val = 10.0 * val + (s[i] - '0'); //add the value
        power *= 10;                     //increase the power on each loop
    }

    val = (sign * val) / power;
    //check if there exponent
    if (s[i] == 'e' || s[i] == 'E')
    {
        ++i;
        //assign exponent sign
        esign = (s[i] == '-') ? -1 : 1;

        //skip the sign position
        if (s[i] == '-' || s[i] == '+')
            ++i;

        for (exp = 0; isdigit(s[i]); ++i)
        {
            exp = 10 * exp + (s[i] - '0');
        }

        if (esign < 0)
        {
            while (exp-- > 0)
                val /= 10;
        }
        else
        {
            while (exp-- > 0)
                val *= 10;
        }
    }
    return val;
}