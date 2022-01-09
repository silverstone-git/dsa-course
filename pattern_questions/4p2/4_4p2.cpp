// make a equilateral triangle pattern with 1s, 2s and 3s in parallel lines slope 1 inclined, 

#include <iostream>

int main() {

    int n;
    std::cout << "Enter the value of n \n: ";
    std::cin >> n;

    for(int irow = 0; irow < n; irow ++) {
        for(int icol = n-irow-1; icol > 0; icol --) {
            std::cout << " ";
        }
        for(int icol = 1; icol < irow+2; icol ++) {
            std::cout << icol << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
