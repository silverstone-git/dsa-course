// to get array from user and print the maximum and minimum element in it

#include <iostream>
#include <climits>

int main() {

    int n;
    std::cout << "Enter the size of array: ";
    std::cin >> n;
    int arr[n];

    std::cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
        std::cin >> arr[i];

    int max_no = INT_MIN;
    int min_no = INT_MAX;

    for(int i = 0; i < n; i ++) {
        if(arr[i] > max_no)
            max_no = arr[i];
        if(arr[i] < min_no)
            min_no = arr[i];
    }

    std::cout << "The Maximum and Minimum numbers are: " << max_no << " and " << min_no << std::endl;

    return 0;
}
