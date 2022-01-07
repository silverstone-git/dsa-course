// make a floyd triangle

#include <iostream>

int main() {

int height = 20;

int ct = 1;

for(int irow = 0; irow < height; irow ++) {

    for(int icol = 0; icol < irow; icol ++) {

        std::cout << ct;
        std::cout << " ";
        ct++;
    }
    std::cout << std::endl;
}

/*

int a = 0;
int b = 1;


while(a < height) {
    a += b;
    while(true) {
        if(b > a) {
            //std::cout << b;
            //std::cout << " ";
            //a = b;
            std::cout << std::endl;
            break;
        }
        std::cout << b;
        std::cout << " ";
        b++;
        //b++;
    }
}

*/

return 0;
}
