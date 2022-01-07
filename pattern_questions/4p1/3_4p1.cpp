// make a inverted symmetric right triangle, filled with stars

#include <iostream>

int main() {

int height = 50;

for(int irow = height; irow > 0; irow --) {
    for(int icol = irow; icol > 0; icol --) {
        std::cout << "*";
    }
    std::cout << std::endl;
}

return 0;
}
