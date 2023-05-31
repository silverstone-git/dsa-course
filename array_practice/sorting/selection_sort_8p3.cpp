// sort an array using selection sort algorithm

#include <iostream>

int* selection_sort(int array[], int n){
	
	int minimum_index;
	int tmp;
	for(int i = 0; i < n; i ++) {
		minimum_index = i;
		for(int j = i; j < n; j ++) {
			if(array[j] < array[minimum_index]){
				minimum_index = j;
			}
		}
		tmp = array[i];
		array[i] = array[minimum_index];
		array[minimum_index] = tmp;
	}
	
	return array;

}


int main() {
	
	int n;
	std::cout << "Enter the length of array: ";
	std::cin >> n;
	
	int arr[n];
	std::cout << "Enter the array elements: ";
	for(int i = 0; i < n; i ++){
		std::cin >> arr[i];
	}
	
	int* sorted_array_ptr = selection_sort(arr,n);
	for(int i = 0; i < n; i ++){
		std::cout << sorted_array_ptr[i] << " ";
	}
	
	std::cout << std::endl;

}
