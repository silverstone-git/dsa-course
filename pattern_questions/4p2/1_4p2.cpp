// make an inverted triangle full of column numbers decrementing row by row

#include <iostream>

int main() {

int n = 50;

for(int irow = n; irow > 0; irow --) {
    for(int icol = 1; icol < irow+1; icol ++) {
        std::cout << icol << " ";
    }
    std::cout << std::endl;
}


return 0;
}
