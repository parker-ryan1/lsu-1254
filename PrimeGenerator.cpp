/**
 * This is an interactive program that prompts the user
 * for an integer n and generates a list of prime numbers
 * in the interval [2,n]
 * @author Your Name, Duncan
 * @see Sieve.h
 * <pre>
 * Project: 1
 * Filename: PrimeGenerator.cpp
 * Course: csc 1254 section 1
 * Date: DATE LAST MODIFIED
 * Instructor: Dr. Duncan
 * </pre>
 */

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include "Sieve.h"

using namespace std;
using namespace Sieve;

int main()
{
    int n, width, numPerLine;
    
    cout << "Enter n to generate primes in [2, n] => ";
    cin >> n;
    
    if (n < 2) {
        cout << "No primes in the interval [2, " << n << "]" << endl;
        return 1;
    }
    
    cout << "Enter the display column width => ";
    cin >> width;
    
    cout << "Enter the number of primes per line to display => ";
    cin >> numPerLine;
    
    vector<int> primes = genPrimes(n);
    
    cout << "\nThere are " << primes.size() << " primes in [2, " << n << "]" << endl;
    dispVect(primes, numPerLine, width);
    
    return 0;
}