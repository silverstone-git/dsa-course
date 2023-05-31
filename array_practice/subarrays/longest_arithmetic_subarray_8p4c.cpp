#include <iostream>
#include <climits>
using namespace std;

// to find the length of longest contiguous arithmetic subarray, ie,
// the longest stint in which numbers of array were in AP
int main() {
	int size;
	int* arr_ptr;
	int i;
	cout << "Enter size of the array: ";
	cin >> size;

	cout << "Enter the array:" << endl;
	arr_ptr = (int*) malloc((size)* sizeof(int));
	for(i = 0; i < size; i ++) {
		cin >> arr_ptr[i];
	}
	// printing the input array
	cout << endl << "Entered array was:" << endl;
	for(i = 0; i < size; i ++) {
		cout << arr_ptr[i] << " ";
	}
	cout<<endl;

	int max_len = INT_MIN;
	int cur_len = 0;
	for(i = 1; i < size-1; i++) {
		if(arr_ptr[i] - arr_ptr[i-1] == arr_ptr[i+1] - arr_ptr[i]) {
			cur_len++;
		} else {
			cur_len = 0;
		}
		if(cur_len > max_len) {
			max_len = cur_len;
		}

	}

	cout << "max contiguous ap is: " << max_len+2 << " digits long" << endl;


	free(arr_ptr);
	return 0;
}
