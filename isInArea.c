#include "func.h"
_Bool isInArea (double x, double y){
    if (((x*x + y*y <= 1) && (y >= 0)) || 
    ((x*x + y*y <= 1) && (y <= 0 && x <= 0)))
    {
         return 1;
    }
    return 0;
}