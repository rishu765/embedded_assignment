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
 * @brief Definitions and macros required for the c1m1 assignment
 *
 * <Add Extended Description Here>
 *
 * @author Rishabh Gupta
 * @date 21/11/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Displays the statistical summary of a given array
 *
 * This function takes the calculated statistics (minimum, maximum, mean, and median) of an array
 * and outputs these values on the screen.
 * 
 * @param minimum The minimum value in the given array
 * @param maximum The maximum value in the given array
 * @param mean The mean of the given array
 * @param median The median of the given array
 *
 * @return void
 */
void print_statistics (unsigned char minimum, unsigned char maximum, float mean, unsigned char median);

/**
 * @brief Displays the elements of a provided array
 *
 * This function takes an array as input and outputs its contents to the screen.
 * 
 * @param array The initial element of the array to be displayed on the screen
 *
 * @return void
 */
void print_array (unsigned char *array, unsigned int counter);


/**
 * @brief Calculates the median of a provided array
 *
 * This function takes an array as input and determines its median value.
 * 
 * @param array The initial element of the array to be processed
 *
 * @return median The calculated median value of the given array.
 */
unsigned char find_median (unsigned char *array, unsigned int counter);


/**
 * @brief Computes the mean of the provided array
 *
 * This function takes an array as input and calculates its mean.
 * 
 * @param array The initial element of the array to be processed
 *
 * @return mean The computed mean value of the given array.
 */
float find_mean (unsigned char *array, unsigned int counter);


/**
 * @brief Determines the maximum value in the provided array
 *
 * This function takes an array as input and identifies its maximum value.
 * 
 * @param array The initial element of the array to be processed
 *
 * @return maximum The highest value within the given array.
 */
unsigned char find_maximum (unsigned char *array, unsigned int counter);\


/**
 * @brief Identifies the minimum value in the provided array
 *
 * This function takes an array as input and determines its minimum value.
 * 
 * @param array The initial element of the array to be processed
 *
 * @return minimum The smallest value within the given array.
 */
unsigned char find_minimum (unsigned char *array, unsigned int counter);


/**
 * @brief Arranges the elements of the provided array in descending order
 *
 * This function takes an array and its length as input, applies the bubble sort algorithm,
 * and organizes the array from the largest to the smallest element. The sorted array is not
 * explicitly returned but is modified in place.
 * 
 * @param array The initial element of the array to be processed
 *
 * @return void
 */
void sort_array (unsigned char *array, unsigned int counter);

#endif /* __STATS_H__ */
