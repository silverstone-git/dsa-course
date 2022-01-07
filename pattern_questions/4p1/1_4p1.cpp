// create a 5 row 4 column rectangle of stars

#include <iostream>

int main() {

// counting starts at 0
int cols = 40;
int rows = 50;

for(int irow = 0; irow < rows; irow++) {
    for(int icol = 0; icol < cols; icol++) {
        std::cout << "*";
    }
    std::cout << std::endl;
}

return 0;
}
