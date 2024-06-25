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
 * @brief Week 1 coding assesment 
 *
 * Embedded systems introduction. This part is an introduction to C language
 *
 * @author Jeremy Turner
 * @date 24/06/2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 


/**
 * @brief Prints the statistics of an array
 *
 * A function that prints the statistics of an array including minimum, 
 * maximum, mean, and median.
 *
 * @return void
 */
void print_statistics();

/**
 * @brief Prints the array to the screen
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @return void
 */
void print_array();

/**
 * @brief returns the median value
 *
 * Given an array of data and a length, returns the median value
 * 
 * @param char arr[] char in a array
 * @param int size of array
 *
 * @return return char - the median (middle value)
 */
unsigned char find_median(unsigned char arr[], int n);

/**
 * @brief find_mean()
 *
 * A function that adds up all the values and then divide by the count of numbers
 * 
 * @param char arr[] char in a array
 * @param int size of array
 * 
 * @return char - the mean average
 */
unsigned char find_mean(unsigned char arr[], int n);

/**
 * @brief Finds the maximum of an array
 *
 * A function that traverses the array of value to identify the largest value
 *
 * @param char arr[] char in a array
 * @param int size of array
 * 
 * @return unsigned char
 */
unsigned char find_maximum(unsigned char arr[], int n);


/**
 * @brief Finds the minimum of an array
 *
 *  A function that traverses the array of value to identify the smallest value
 *
 * @param char arr[] char in a array
 * @param int size of array
 * 
 * @return <Add Return Informaiton here>
 */
unsigned char find_minimum(unsigned char arr[], int n);


/**
 * @brief Sorts the array from largest to smallest
 *
 * Given an array of data and a length, sorts the array from largest to smallest.  
 * (The zeroth Element should be the largest value, and the last element (n-1)
 *  should be the smallest value. )
 *
 * @param char arr[] char in a array
 * @param int size of array
 * 
 * @return void
 */
void sort_array(unsigned char arr[], int n);

#endif /* __STATS_H__ */
