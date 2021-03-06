#include <iostream>
#include <cassert>

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
//----------------------------------------
int problemOne() {
    int sum = 0;
    for(int i = 0; i < 1000; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, 
the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-values
*/
//----------------------------------------
int problemTwo() {
    int one = 0;
    int two = 1;
    int sum = 0;
    for(int i = 1; i < 4'000'000; i++) {
        int current = one + two;

        if(current > 4'000'000) break;
        one = two;
        two = current;
        if(current % 2 == 0) sum+= current;
    }

    return sum;
}

/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/
//----------------------------------------
long long int problemThree() {
    long long i, n = 600851475143;
    for (i = 3; n > 1; i += 2)
        while (n % i == 0)
            n /= i;
    return i - 2;
}
//----------------------------------------
int main() {
    std::cout << "-----------------------------" << std::endl;
    std::cout << "--------Euler Project--------" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "problemOne: " << problemOne() << std::endl;
    std::cout << "problemTwo: " << problemTwo() << std::endl;
    std::cout << "problemTwo: " << problemThree() << std::endl;
    std::cout << "-----------------------------" << std::endl;


    return 0;
}