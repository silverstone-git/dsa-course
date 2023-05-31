#include <iostream>
using namespace std;

// to find the length of longest contiguous arithmetic subarray, ie,
// the longest stint in which numbers of array were in AP
int main() {
	int size;
	int i = 0;
	int* arr_ptr;
	cout << "Enter size of the array: ";
	cin >> size;

	cout << "Enter the array:" << endl;
	arr_ptr = (int*) malloc((size)* sizeof(int));
	for(int i = 0; i < size; i ++) {
		cin >> arr_ptr[i];
	}
	// printing the input array
	cout << endl << "Entered array was:" << endl;
	for(int i = 0; i < size; i ++) {
		cout << arr_ptr[i] << " ";
	}
	cout<<endl;

	for(i = 0; i < size; i ++) {
		// finding the first repeating el
	}

	free(arr_ptr);
	return 0;
}
