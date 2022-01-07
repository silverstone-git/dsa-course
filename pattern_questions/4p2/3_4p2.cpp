// make a parellogram of stars given the height

#include <iostream>

int main() {

    int n = 40;
    
    for(int irow = 0; irow <= n; irow ++) {
        for(int icol = 0; icol < n - irow; icol ++) {
            std::cout << " ";
        }
        for(int icol = 0; icol < n; icol ++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
