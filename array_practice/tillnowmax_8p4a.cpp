// to take an array and a number i and find the maximum till that

#include <iostream>


int main() {
    
    int n;
    std::cout << "Enter the length of array: ";
    std::cin >> n;

    int myarr[n];
    std::cout << "Enter the array elements: ";
    for(int i = 0; i < n; i ++){
            std::cin >> myarr[i];
    }


    int i, mx;
    mx = myarr[0];
    for(i = 1; i < n; i ++) {
        if (myarr[i] > mx) {
            mx = myarr[i];
        }

        std::cout << "max till " << i << " is: " << mx << std::endl;
    }
    return 0;

}

