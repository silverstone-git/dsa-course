// to take an array and a number i and find the maximum till it

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

    int i;
    std::cout << "Enter the i index till which you want max: ";
    std::cin >> i;

    int mx = myarr[0];
    for(int t = 0; t <= i; t ++) {
        if (myarr[t] > mx) {
            mx = myarr[t];
        }
    }
    

	std::cout << mx << std::endl;

    return 0;
}

