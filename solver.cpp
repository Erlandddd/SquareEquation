#include <stdio.h>
#include <math.h>
#include <TXLib.h>

#include "solver.h"


int Square_Equation (double a, double b, double c, double* x1, double* x2)
{
    assert (isfinite (a) != 0);                  //checking that coefficients are finite numbers
    assert (isfinite (b) != 0);
    assert (isfinite (c) != 0);

    assert (x1 != nullptr);                      //null pointer check
    assert (x2 != nullptr);
    assert (x1 != x2);


     if (Double_Comparison (a, 0))               //a == 0 --> linear equation
    {
        return Linear_Equation (b, c, x1);
    }


    assert (!(Double_Comparison (a, 0)));        // square equation. a != 0

    double D = b*b - 4*a*c;                      //finding the discriminant

    if (D < 0)
    {
        return ZERO_ROOTS;
    }

    if (Double_Comparison (D, 0))                //D == 0
    {
        if (Double_Comparison (b, 0))
        {
            *x1 = 0;
        }
        else
        {
            *x1 = -b / (2 * a);
        }
        return ONE_ROOT;
    }

    if (D > 0)
    {
        double sqrt_D = sqrt (D);

        if (Double_Comparison (-b + sqrt_D, 0))
        {
            *x1 = 0;
            *x2 = (-b - sqrt_D) / (2 * a);

            return TWO_ROOTS;
        }

        if (Double_Comparison (-b - sqrt_D, 0))
        {
            *x1 = (-b + sqrt_D) / (2 * a);
            *x2 = 0;

            return TWO_ROOTS;
        }

        *x1 = (-b + sqrt_D) / (2 * a);
        *x2 = (-b - sqrt_D) / (2 * a);

        return TWO_ROOTS;
    }

    return ZERO_ROOTS;
}



int Linear_Equation (double b, double c, double* x1)    //the function solves the linear equation
{
    assert (isfinite (b) != 0);                         //checking that coefficients are finite numbers
    assert (isfinite (c) != 0);
    assert (x1 != nullptr);                             //null pointer check

    if (Double_Comparison (b, 0))                       //b == 0
    {

        if (Double_Comparison (c, 0))                   //c == 0
        {
            return INFINITY_ROOTS;
        }

        assert(!(Double_Comparison (c, 0)));            //c != 0

        return ZERO_ROOTS;
    }

    assert (!(Double_Comparison (b, 0)));               //b != 0

    if (Double_Comparison (c, 0))                       //c == 0
    {
        *x1 = 0;
    }
    else
    {
        *x1 = -c / b;
    }

    return ONE_ROOT;
}



int Double_Comparison (double n, double m)             //function compares two double numbers
{
    return (fabs(n - m) < DBL_EPSILON);
}



