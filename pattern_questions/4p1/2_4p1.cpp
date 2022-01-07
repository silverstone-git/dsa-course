// make a bordered sqaure (empty inside just like your mental state) rows = 5, columns = 4

#include <iostream>

int main() {

int columns = 40;
int rows = 50;

for(int irow = 0; irow < rows; irow ++) {

    for(int icol = 0; icol < columns; icol ++) {
        if(icol == 0 || irow == 0 || icol == columns-1 || irow == rows-1) {
            std::cout << "*";
        } else {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

}

return 0;
}
