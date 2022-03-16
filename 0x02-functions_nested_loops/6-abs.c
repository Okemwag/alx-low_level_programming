include "main.h"

/**
* _abs - computes the absolute value of an integer
* @n: the int to check
* Return: the absolute value of int
*/
int _abs(int c)
{

if (c < 0)
{
return (c * ( -1));
}

else if (c == 0)
{
return (0);
}

else
{
return (c);
}

}
