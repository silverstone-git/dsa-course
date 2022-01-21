// bubble sort

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
    
    int primary_loop_limit = n;
    int secondary_loop_limit = n;
    int tmp;
    for(int i = 0; i < primary_loop_limit; i ++) {
        for(int j = 0; j < secondary_loop_limit-1; j ++) {
            if(myarr[j+1] < myarr[j]) {
                tmp = myarr[j+1];
                myarr[j+1] = myarr[j];
                myarr[j] = tmp;
            }
        }
        secondary_loop_limit --;
    }


	for(int i = 0; i < n; i ++){
		std::cout << myarr[i] << " ";
	}
	
	std::cout << std::endl;
}
