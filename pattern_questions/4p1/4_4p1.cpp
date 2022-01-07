// make a mirror inverted image of a right triangle (with mirror axis at left)

#include <iostream>


int main() {

int height = 50;

for(int irow = height; irow > 0; irow --) {

    for(int icol = 0; icol < height; icol ++) {

        if(icol < irow) {
            std::cout << " ";
        } else {
            std::cout << "*";
        }
    }
    std::cout << std::endl;

}


return 0;
}
