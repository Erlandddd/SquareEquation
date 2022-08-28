#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <TXLib.h>


int Square_Equation (double a, double b, double c, double* x1, double* x2);
//--------------------------------------------------------------------------------------------------------------
//!Solves a square equation ax2 + bx + c = 0
//!
//!@param [in]    a             a-coefficient
//!@param [in]    b             b-coefficient
//!@param [in]    c             c-coefficient
//!@param [out]   x1            Pointer to the 1st root
//!@param [out]   x2            Pointer to the 2nd root
//!
//!@return Number of roots
//!
//!@note When the a-coefficient is zero, reduces the equation to a linear equation
//--------------------------------------------------------------------------------------------------------------

int Check_One_Test (double a, double b, double c, int nTestRoots, double TestX1, double TestX2, int CountTests);
//--------------------------------------------------------------------------------------------------------------
//!Executes one UNIT test
//!
//!@param [in]    a             a-coefficient
//!@param [in]    b             b-coefficient
//!@param [in]    c             c-coefficient
//!@param [in]    nTestRoots    Number of roots from UNIT test
//!@param [in]    TestX1        1st root from UNIT test
//!@param [in]    TestX2        2nd root from UNIT test
//!@param [in]    CountTests    Number of UNIT tests perfomed
//!
//!@return 1 - successful UNIT test, 0 - failed UNIT test
//!
//!@note In case of failure, displays the number of the test,
//!      the correct and incorrect answer
//--------------------------------------------------------------------------------------------------------------

void Square_Unit_Tests ();
//--------------------------------------------------------------------------------------------------------------
//!Executes and processes all UNIT tests, shows general statistics of tests execution
//--------------------------------------------------------------------------------------------------------------

int Double_Comparison (double n, double m);
//--------------------------------------------------------------------------------------------------------------
//!Compares two double numbers n and m
//!
//!@param [in]    n             1st double number to compare
//!@param [in]    m             2nd double number to compare
//!
//!@return 1 - equality of numbers, 0 - inequality of numbers
//!
//!@note Comparison occurs up to DBL_EPSILON precision
//--------------------------------------------------------------------------------------------------------------

