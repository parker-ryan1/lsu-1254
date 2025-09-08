/**
 * Implementation file for a tiny library for generating primes
 * @author Duncan, YOUR NAME
 * @see Sieve.h
 * <pre>
 * Project: 1
 * Filename: Sieve.cpp
 * Date: 99-99-9999
 * Course: csc 1254 section 1 
 * Instructor: Dr. Duncan
 * </pre>
 */
 
#include "Sieve.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
 
using namespace std;

void Sieve::dispVect(const vector<int>& v, int numPerLine, int width)
{
    for (size_t i = 0; i < v.size(); i++) {
        cout << setw(width) << v[i];
        if ((i + 1) % numPerLine == 0 || i == v.size() - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}

vector<int> Sieve::genPrimes(int n)
{
    vector<int> primes;
    if (n < 2) return primes; // No primes if n < 2
    
    // Create a boolean vector "isPrime[0..n]" and initialize
    // all entries as true
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not primes
    
    // Sieve of Eratosthenes
    for (int i = 2; i * i <= n; i++) {
        // If isPrime[i] is not changed, then it is a prime
        if (isPrime[i]) {
            // Mark all multiples of i as non-prime
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    // Collect all prime numbers
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    
    return primes;
}