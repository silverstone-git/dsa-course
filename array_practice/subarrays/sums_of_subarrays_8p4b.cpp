#include <iostream>

int main() {
    // find all the possible subarrays of a user entered array and their sums

    int n;
    std::cout << "Enter the length of array: ";
    std::cin >> n;

    int a[n], i;
    std::cout << "Enter the elements of the array: ";
    for(i = 0; i < n; i ++)
        std::cin >> a[i];


    int j, cur_el, sum, k, c;
    for(i = 0; i < n; i ++){

        j = i;
        c = i+1;
        sum = 0;
        std::cout << "Current subarray: " << std::endl;
        while(c <= n) {
            cur_el = a[j];
            std::cout << cur_el << " ";
            sum += cur_el;
            j++;
            if(j == c){
                std::cout << std::endl;
                std::cout << "Sum of this subarray is: " << sum << std::endl;
                sum = 0;
                j = i;
                c++;
            }
        }
        std::cout << std::endl;


/*
        for(j = i; j < n; j ++) {
            for(k = j; k < n; k ++) {
            }
        }
*/

    }

}
