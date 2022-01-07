// make a 1-0-1 pattern in the shape of a right triangle

#include <iostream>

int main() {

    int n = 50;

    for(int irow = 0; irow < n; irow ++) {
        for(int icol = 0; icol < irow+1; icol ++) {
            if((irow+icol) % 2 == 0) {
                std::cout << 1;
            } else {
                std::cout << 0;
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
