#include<iostream>
#include<cmath>

int bs(int arr[], int key, int hi, int lo, int lim) {
	int mid = (hi+lo)/2;
	std::cout << "lo is: ";
	std::cout << arr[lo] << std::endl;
	std::cout << "hi is: ";
	std::cout << arr[hi] << std::endl;
	std::cout << "mid is: ";
	std::cout << arr[mid] << std::endl;
	if(arr[mid] < key) {
		std::cout << "key above " << std::endl;
		lo = ceil(mid);
	} else {
		std::cout << "key below " << std::endl;
		hi = floor(mid);
	}
	std::cout << "lim is: ";
	std::cout << lim << std::endl;
	if(lim > 100){
		return 5;
	}
	lim++;
	if(hi == lo+1) {
		std::cout << "hi and lo consecutive, hi is: : ";
		std::cout << arr[hi] << std::endl;
		if(arr[hi] == key || arr[lo] == key) return 1;
		else return 0;
	} else {
		
		return bs(arr, key, hi, lo, lim);
	}
}

int main(int argc, char *argv[])
{
	int size = 10;
	int arr[10] = {2, 4, 7, 8, 10, 15, 17, 18, 20, 21};
	int i = 0;
	while(i < size) {

		std::cout << arr[i] << " ";
		i++;
	}
	std::cout << "enter key: ";
	int key;
	std::cin >> key;
	std::cout << bs(arr, key, size-1, 0, 10) << std::endl;
}
