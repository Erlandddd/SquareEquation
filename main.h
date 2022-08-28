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

void Square_Unit_Tests ();
//--------------------------------------------------------------------------------------------------------------
//!Executes and processes all UNIT tests, shows general statistics of tests execution
//--------------------------------------------------------------------------------------------------------------

