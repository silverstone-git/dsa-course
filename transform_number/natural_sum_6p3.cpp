// to find the sum of numbers upto a given n

#include <iostream>


int summation(int n) {
    int sum = 0;
    for(int i = 0; i < n+1; i ++) {
        sum += i;
    }
    return sum;
}


int main() {

    int n;
    std::cout << "Enter a value for n, upto which sum of numbers is to be printed\n> ";
    std::cin >> n;
    std::cout << summation(n) << std::endl;

    return 0;
}


