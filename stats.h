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
 * @file stats.h
 * @brief Local header file which contains the prototypes for statistical functions and other functionality
 *
 * @author Sibin Kurian
 * @date 26-06-2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

   void print_array(unsigned char *start, int size);
/*
 * @brief Prints the contents of the array making use of charpointers
 *
 * @param start Character pointer which stores the starting address of the array
 * @param size  Size of the array
 */

   int find_maximum(unsigned char *start, int size);
/*
 * @brief Finds the maximum element in the array by looping through it and returns it.
 *
 * @param start Character pointer which stores the starting address of the array
 * @param size  Size of the array
 * @return The maximum element of the array stored in a variable named max
 */ 
 
   int find_minimum(unsigned char *start,int size);
 /*
 * @brief Finds the minimum element in the array by looping through it and returns it.
 *
 * @param start Character pointer which stores the starting address of the array
 * @param size  Size of the array
 * @return The minimum element of the array stored in a variable named min
 */ 
 
   float find_mean(unsigned char *start, int size);
  /*
 * @brief Finds the sum of elements by looping through through the array followed by the computation of 
 *  the   mean using the size of the array and returns it.
 *
 * @param start Character pointer which stores the starting address of the array
 * @param size  Size of the array
 * @return The mean of the array stored in a variable named mean
 */   
 
   float find_median(unsigned char *start, int size);
   /*
 * @brief Finds and returns the Median of the array after looping through the elements of the array
 *
 * @param start Character pointer which stores the starting address of the array
 * @param size  Size of the array
 * @return The mean of the array stored in a variable named mean
 */   
 
   void sort_array(unsigned char *start, int size);
   /*
 * @brief Sorts the array in Descending order
 *
 * @param start Character pointer which stores the starting address of the array
 * @param size  Size of the array
 * @return The mean of the array stored in a variable named mean
 */    
 
   void print_statistics(unsigned char *start, int size);
   /*
 * @brief Prints the statistical information onto the display device.
 *
 * @param start Character pointer which stores the starting address of the array
 * @param size  Size of the array
 * @return The mean of the array stored in a variable named mean
 */    

#endif /* __STATS_H__ */
