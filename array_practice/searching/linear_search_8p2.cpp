// to take an array and value, search for the value in the array using linear search algorithm

#include <iostream>

int linear_search(int arr[], int n, int key) {

	for(int i = 0; i < n; i ++) {
		if (arr[i] == key) {
			return i;
		}
	}

	return -1;
}

int main() {

	int n;
	std::cout << "Enter the number of elements you want to search in: ";
	std::cin >> n;

	int arr[n];
	std::cout << "Enter the array elements: ";
	for(int i = 0; i < n; i ++) {
		std::cin >> arr[i];
	}

	int key;
	std::cout << "Enter the element you want to search: ";
	std::cin >> key;

	std::cout << "The index of given key is: " << linear_search(arr, n, key) << std::endl;

}
