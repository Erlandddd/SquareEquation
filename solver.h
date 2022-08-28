#pragma once
#include <stdio.h>
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

int Linear_Equation (double b, double c, double* x1);
//--------------------------------------------------------------------------------------------------------------
//!Solves a linear equation bx + c = 0
//!
//!@param [in]    b             b-coefficient
//!@param [in]    c             c-coefficient
//!@param [out]   x1            Pointer to the one root
//!
//!@return Number of roots
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

enum Roots {
    ZERO_ROOTS,     //!Shows that the equation has zero roots
    ONE_ROOT,       //!Shows that the equation has one root
    TWO_ROOTS,      //!Shows that the equation has two roots
    INFINITY_ROOTS  //!Shows that the equation has infinite roots
};
//--------------------------------------------------------------------------------------------------------------


