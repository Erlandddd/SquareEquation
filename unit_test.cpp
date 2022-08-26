#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <TXLib.h>

#include "square_equation.h"


void Square_Unit_Tests ()                                                    //function performs unit tests
{
    double a = 0, b = 0, c = 0, TestX1 = 0, TestX2 = 0;
    int nTestRoots = 0, SuccessTests = 0, CountTests = 0;
    FILE * FileTests;

    printf ("PERFORMING UNIT TESTS:\n");

    FileTests = fopen ("UnitTest.txt", "r");                                //Unit Tests are in the file "UnitTests.txt"

    if (FileTests == NULL)
    {
        printf ("ERROR!!! UNABLE TO OPEN FILE WITH UNIT TESTS!!! PROGRAM COMPLETE!!!\n"); //shows an error when there are problems opening the file
        exit(EXIT_FAILURE);
    }

    while ((fscanf (FileTests, "%lg %lg %lg %d %lg %lg", &a, &b, &c, &nTestRoots, &TestX1, &TestX2)) == 6)          //read tests from a file
    {
        CountTests++;
        SuccessTests += Check_One_Test (a, b, c, nTestRoots, TestX1, TestX2, CountTests);
    }

    fclose (FileTests);

    printf ("------------------------------------------------\n");                                                  //summary of all tests
    printf ("SUCCESSFUL TEST PERFORMANCE: %d/%d.\n"\
    "NUMBER OF FAILED TESTS: %d.\n", SuccessTests, CountTests, CountTests - SuccessTests);
    printf ("------------------------------------------------\n");
}


int Check_One_Test (double a, double b, double c, int nTestRoots, double TestX1, double TestX2, int CountTests)     // one unit test is checked
{
    double x1 = 0, x2 = 0;
    int nRoots = Square_Equation (a, b, c, &x1, &x2);

    if (!(nRoots == nTestRoots && Double_Comparison (x1, TestX1) && Double_Comparison (x2, TestX2)))                //in case of failure
    {
        printf ("\nERROR:TEST ¹%d - a = %.2lg, b = %.2lg, c = %.2lg\n", CountTests, a, b, c);
        printf ("  CORRECT ANSWER: nRoots = %d, x1 = %.2lg, x2 = %.2lg\n", nTestRoots, TestX1, TestX2);
        printf ("INCORRECT ANSWER: nRoots = %d, x1 = %.2lg, x2 = %.2lg\n\n", nRoots, x1, x2);

        return 0;
    }
                                                                                                                    //if successful
    printf ("TEST ¹%2.d:  SUCCESS!\n", CountTests);

    return 1;
}

