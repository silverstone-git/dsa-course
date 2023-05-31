#include <iostream>
#include <climits>
using namespace std;

// to find the length of longest contiguous arithmetic subarray, ie,
// the longest stint in which numbers of array were in AP
int main() {

	int i;
	int size;
	int* arr_ptr;
	int c = 0;
	cout << "Enter size of the array: ";
	cin >> size;

	// note that size taken is size + 1 to accommodate the comparison for
	// the last theme park day

	cout << "Enter the array:" << endl;
	arr_ptr = (int*) malloc((size+1)* sizeof(int));
	for(int i = 0; i < size; i ++) {
		cin >> arr_ptr[i];
	}
	// printing the input array
	cout << endl << "Entered array was:" << endl;
	for(int i = 0; i < size; i ++) {
		cout << arr_ptr[i] << " ";
	}
	cout<<endl;

	int mx = INT_MIN;
	arr_ptr[size] = INT_MIN;
	for(i = 0; i < size; i++) {
		//looping through the number of days in the local theme park
		if(arr_ptr[i] > mx && arr_ptr[i] > arr_ptr[i+1]) {
			mx = arr_ptr[i];
			c++;
		}
	}

	cout << "the number of record breaking days were: " << c << endl;

	free(arr_ptr);
	return 0;
}
