// half pyramid using numbers

#include <iostream>

int main() {

int height = 5;

for(int irow = 0; irow < height; irow ++) {
    for(int icol = 0; icol <= irow; icol ++) {
        std::cout << irow+1;
        std::cout << " ";
    }
    std::cout << std::endl;
}

return 0;
}
