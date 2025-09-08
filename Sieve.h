/**
 * A tiny library for generating primes
 * @author Duncan
 * <pre>
 * Project: 1
 * Filename: Sieve.h 
 * Date: 99-99-9999
 * Course: csc 1254 section 1 
 * Instructor: Dr. Duncan
 * </pre>
 */
 
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
 
#ifndef SIEVE_
#define SIEVE_

using namespace std;
 
namespace Sieve
{
    /**
     * Displays a vector with the specified number of elements
     * per line in columns with the specified width
     * @param v the vector whose entries to Display
     * @param numPerLine the number of entries to display per line 
     * @param width the width of each column
     */
    void dispVect(const vector<int>& v, int numPerLine, int width);
    
    /**
     * Generate the first n primes
     * @param n an integer
     * @return a vector containing the first n prime numbers
     */ 
    vector<int> genPrimes(int n);
}
#endif //SIEVE_