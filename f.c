#include "func.h"
#include <math.h>
double f(double x)
{
    return (x < 3) ? (pow(x,4) + 9) : (54 * pow(x,4) / (-5 * pow(x,2)+7));
}
