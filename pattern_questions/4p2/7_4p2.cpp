// make a zig zag pattern like -
/*

  *   *
 * * * *
*   *   *

this for n=9
*/

#include <iostream>
#include <cmath>

int main() {

    int n;
    std::cout << "Enter the value of n\n> ";
    std::cin >> n;

/*
An attempt to generalize the thing as a function of width of snake

    no_of_rows = 3;

    for(int irow = 0; irow < no_of_rows; irow ++) {

        // 3,7,11... is the series for which a new star appears in row one, a = 4n+3, arranging for n, it is (a-3)/4
        for(int icol = 0; icol < (n-no_of_rows)/(no_of_rows+1); icol ++)
    }

*/

    // 3,7,11... is the series for which a new star appears in row one, a = 4n+3, arranging for n, it is (a-3)/4
    int icol = 0;
    while(icol < (floor(((n-3)/4.00f))+1)) {
        if(icol == 0){
            std::cout << "  *";
        } else {
            std::cout << "   *";
        }
        icol ++;
    }
    std::cout << std::endl;

    // 2,4,6,... is the sequence for which a new star appears in row two, ie, a = 2n+2, arranging for n, it is (a/2)-1
    for(int icol = 0; icol < floor((n/2-1))+1; icol ++) {std::cout << " *";}
    std::cout << std::endl;

    // 1, 5, 9,... is the sequence for which a new star appears in row three, ie, a = 4n+1, arranging for n, it is (a-1)/4
    for(int icol = 0; icol < floor(((n-1)/4))+1; icol ++) {std::cout << "*   ";}
    std::cout << std::endl;
    

    return 0;
}





