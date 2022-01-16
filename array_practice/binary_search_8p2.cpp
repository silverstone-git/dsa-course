// to take a sorted array and value, search for the value in the array using the binary search algorithm

#include <iostream>


int binary_search(int arr[], int n, int key) {

	// ONLY SORTED ARRAYS ALLOWED

	int start = 0;
	int end = n-1;
	int mid;
	while(end-start > -1) {
		mid = start + ((end-start)/2);
		if(arr[mid] == key) {
			return mid;
		} else if(arr[mid] > key) {
			end = mid-1;
		} else if(arr[mid] < key) {
			start = mid+1;
		}
	}
	std::cout << "\n";
	return -1;
}


int main() {
	// driver program

	int n;
	std::cout << "Enter the size of array you want to search in: ";
	std::cin >> n;

	int arr[n];
	std::cout << "Enter the sorted array: ";
	for(int i = 0; i < n; i ++) {
		std::cin >> arr[i];
	}

	int key;
	std::cout << "Enter the key that you have to search: ";
	std::cin >> key;

	std::cout << binary_search(arr, n, key) << std::endl;

	return 0;
}
