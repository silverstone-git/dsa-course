// to reverse a number

#include <iostream>
#include <cmath>

int main() {

    int n;
    std::cout << "Enter a number to reverse\n> ";
    std::cin >> n;
    int newnumber = 0;
    int cutout;
    int no_of_digits = log10(n) + 1;
    int c = 1;

    while(n > 0) {
        cutout = n % 10;
        n /= 10;
        newnumber += cutout * pow(10, (no_of_digits - c));
        c++;
    }

    std::cout << newnumber << std::endl;

    return 0;
}
