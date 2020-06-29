/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation file for M1 Assessment
 *
 * This file contains the main() and the definitions for other statistical tasks such as mena, median, m  maximum, minimum. The print_array() and the sort_array() is called explicitly within the main() with the teat dataset passed as input
 *
 * @author Sibin Kurian
 * @date 29-06-2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
 
  /* Statistics and Printing Functions Go Here */


}

void print_array(unsigned char *start,int size)
{

}

int find_maximum(unsigned char *start,int size)
{

}

int find_minimum(unsigned char *start,int size)
{


}

float find_mean(unsigned char *start, int size)
{

}

float find_median(unsigned char *start, int size)
{

}

void sort_array(unsigned char *start, int size)
{

}

void print_statistics(unsigned char *start, int size)
{

}
