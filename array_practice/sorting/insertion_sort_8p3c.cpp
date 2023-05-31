// to sort an array using the insertion sort technique

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

        int i = 1;
        int j;
        int tmp;
	while(i < n) {
                std::cout << "J is: " << j << std::endl;
                std::cout << "i is: " << i << std::endl;
                j = i;
                while(myarr[j] < myarr[j-1]) {
                        if(j < 1) {
                                break;
                        }
                        tmp = myarr[j];
                        myarr[j] = myarr[j-1];
                        myarr[j-1] = tmp;
                        j--;
                        std::cout << "J is: " << j << std::endl;
                        std::cout << "i is: " << i << std::endl;
                }
                i++;
        }

        for(int i = 0; i < n; i ++){
		std::cout << myarr[i] << " ";
	}
	
	std::cout << std::endl;
}
