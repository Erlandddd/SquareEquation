#include <stdio.h>
#include <math.h>
#include <TXLib.h>

#include "main.h"

int main ()
{
    txSetConsoleAttr (FOREGROUND_YELLOW | BACKGROUND_BLACK);

    printf ("THIS FUNCTION SOLVES A SQUARE EQUATION OF THE TYPE ax2 + bx + c = 0\n");     //Brief information about the function
    printf ("AND DISPLAYS THE ROOTS OF THE EQUATION, THE NUMBER OF ROOTS, FORMULA FOR FINDING THE ROOTS.\n\n");

    Square_Unit_Tests ();                             //checking unit tests

    double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;

    while (Input_Coefficient (&a, &b, &c))
    {
        int nRoots = Square_Equation (a, b, c, &x1, &x2);

        Output_Answer (a, b, c, nRoots, x1, x2);
    }

    return 0;
}
