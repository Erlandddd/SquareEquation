#include <stdio.h>
#include <math.h>
#include <TXLib.h>

#include "input_output.h"


int Input_Coefficient(double* a, double* b, double* c)      //Entering coefficients
{
    txSetConsoleAttr (FOREGROUND_LIGHTBLUE | BACKGROUND_BLACK);
    printf ("ENTER SQUARE EQUATION COEFFICIENTS: a b c.\n");
    printf ("TO EXIT THE PROGRAM, ENTER ANY LETTER.\n");
    txSetConsoleAttr ();

    if (scanf ("%lg %lg %lg", a, b, c) != 3)           //checking the number of entered coefficients
    {
        txSetConsoleAttr (FOREGROUND_LIGHTGREEN | BACKGROUND_BLACK);
        printf ("FUNCTION HAS COMPLETED ITS ACTION!");
        txSetConsoleAttr ();

        return 0;
    }

    return 1;
}



void Output_Answer (double a, double b, double c, int nRoots, double x1, double x2)        //outputs the answer
{
    txSetConsoleAttr (FOREGROUND_YELLOW | BACKGROUND_BLACK);
    printf ("SQUARE EQUATION: %.2lgx*x%+.2lgx%+.2lg = 0\n", a, b, c);                      //shows the equation with the given coefficients
    switch (nRoots)
    {
        case TWO_ROOTS:
            printf ("THIS SQUARE EQUATION HAS TWO ROOT CALCULATED BY THE FORMULA:"        //shows the general calculation formula
            " x = (-b +- sqrt(b*b - 4*a*c)) / (2*a)\nx1 = %.2lg\nx2 = %.2lg\n", x1, x2);
            break;
        case ONE_ROOT:
            printf ("THIS EQUATION HAS ONE ROOT: x = %.2lg\n", x1);
            break;
        case ZERO_ROOTS:
            printf ("THIS EQUATION DOES NOT HAVE ROOTS!\n");
            break;
        case INFINITY_ROOTS:
            printf ("THIS EQUATION HAS AN INFINITE NUMBER OF ROOTS!\n");
            break;
        default:
            txSetConsoleAttr (FOREGROUND_RED | BACKGROUND_BLACK);
            printf ("ERROR!!!\n");                                                          //if something goes wrong, it shows an ERROR!s
    }
    txSetConsoleAttr ();
    printf ("------------------------------------------------\n");
}

