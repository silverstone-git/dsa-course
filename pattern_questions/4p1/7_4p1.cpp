// make a butterfly pattern

#include <iostream>

int main() {

int n = 100;

int irow = 0;

while (irow < 2*n+1) {
    for(int icol = 0; icol < n; icol ++) {

        // a condition to check if the row has reached the end of the upper mountains, sets the irow to start the next mountains if so
        if((n - std::abs(n - irow)) + 1 > n/2) {
            irow = n*1.5f;
            irow = (int)irow;
            break;
        }

        // checks on every column, prints starts before row number-th column, then spaces and then stars again when column number is greater than width minus row number
        // (with minor alignment adjustments of -1 and -2)
        if( icol < (n - std::abs(n - irow))+1 || icol > (n - (n - std::abs(n - irow)))-2) {
            std::cout << "*";
        } else {
            std::cout << " ";
        }
    }
    irow ++;

    // this condition is to check if the row number has reached the middle part, we don't want a third empty row in between 2 mountains, so, a condition is added here
    // because this condition would be true as soon as the above loop breaks and no star is printed in the in-between row, so, no newline is needed, completely removing that row
    if( (n - std::abs(n - irow)) + 1 <= n/2 ) {
        std::cout << std::endl;
    }
}


return 0;
}
