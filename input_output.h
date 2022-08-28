#pragma once
#include <stdio.h>
#include <math.h>
#include <TXLib.h>

int Input_Coefficient (double* a, double* b, double* c);
//--------------------------------------------------------------------------------------------------------------
//!Gets input a, b, c - coefficients
//!
//!@param [out]   a             Pointer to the a-coefficient
//!@param [out]   b             Pointer to the b-coefficient
//!@param [out]   c             Pointer to the c-coefficient
//!
//!@return 0 - program completion, 1 - re-entry of coefficients
//!
//!@note To cancel the input, enter any letter
//--------------------------------------------------------------------------------------------------------------

void Output_Answer (double a, double b, double c, int nRoots, double x1, double x2);
//--------------------------------------------------------------------------------------------------------------
//!Displays the answer on the screen
//!
//!@param [in]    a             a-coefficient
//!@param [in]    b             b-coefficient
//!@param [in]    c             c-coefficient
//!@param [in]    nRoots        Number of roots
//!@param [in]    x1            1st root
//!@param [in]    x2            2st root
//!
//!@return void
//!
//!@note If an invalid number of roots throws an error
//--------------------------------------------------------------------------------------------------------------

enum Roots {
    ZERO_ROOTS,     //!Shows that the equation has zero roots
    ONE_ROOT,       //!Shows that the equation has one root
    TWO_ROOTS,      //!Shows that the equation has two roots
    INFINITY_ROOTS  //!Shows that the equation has infinite roots
};
//--------------------------------------------------------------------------------------------------------------
