/*
         *
       * * *
     * * * * *  
    * * * * * * --> Same number
    * * * * * * --> of stars
     * * * * *  
       * * *
         *

this for n = 4
*/

#include <iostream>

int main() {

    int n;
    std::cout << "Enter the value of n \n> ";
    std::cin >> n;

    int irow = 0;
    bool onerepflag = true;
    while(irow <= 2*n) {
        for(int icol = 0; icol < std::abs(n-irow); icol ++) {
            std::cout << " ";
        }
        for(int icol = 0; icol < n-std::abs(n-irow)+1; icol ++) {
            std::cout << "* ";
        }
        if(irow == n && onerepflag) {
            // the n irow value doesn't increment one time, when it is in the middle
            onerepflag = false;
        } else {
            irow ++;
        }
        std::cout << std::endl;
    }

    return 0;
}
