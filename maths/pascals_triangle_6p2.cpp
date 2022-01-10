// make a pascal's triangle

#include <iostream>

int factorial(int n) {

    int prod = 1;
    int i = 2;
    while(i < n+1) {
        prod *= i;
        i++;
    }

    return prod;
}

int main() {

    int n;
    std::cout << "Enter the value of row number till which pascal's triangle is to be calculated\n> ";
    std::cin >> n;

    for(int irow = 0; irow < n; irow ++) {
        for(int icol = 0; icol < irow+1; icol ++) {
            std::cout << factorial(irow) / (factorial(icol) * factorial(irow - icol)) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

