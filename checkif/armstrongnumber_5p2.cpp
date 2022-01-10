// to check if a number is an armstrong number, ie, its sum of cubed digits is a the number itself or not

#include <iostream>
#include <cmath>

int main() {

    int n;
    int n1;
    std::cout << "Enter a value of n which is to be checked for being an armstrong number\n> ";
    std::cin >> n;
    n1 = n;
    int sum = 0;
    int no_of_digits = log10(n) + 1;
    int cutout;
    while ( n > 0 ) {

        // modulo operator gives away trailing digit and the main number is divided by 10 to get rid of zero left behind
        cutout = n % 10;
        //n -= cutout;  --> there is no need for this in c++, the division operator with integers doesn't care about remainders, so, 123 divided by 10 is just 12
        n /= 10;

        sum += pow(cutout, no_of_digits);

    }

    if (sum == n1) {
        std::cout << "This indeed is an armstrong number" << std::endl;
    } else {
        std::cout << "This is not an armstrong number" << std::endl;
    }

    return 0;
}

