
// to right rotate array in cpp

#include<iostream>

int main() {
    int size;
    std::cout << "Enter size: ";
    std::cin >> size;

    int* arr_ptr = (int*) malloc(size* sizeof(int));

    int i = 0;
    std::cout << "Enter array: ";
    while (i < size) {
        std::cin >> arr_ptr[i];
        i++;
    }

    std::cout << "Entered array was: ";

    i = 0;
    while(i < size) {
        std::cout << arr_ptr[i] << " ";
        i++;
    }

    std::cout << std::endl;

    int d;
    std::cout << "How many elements do you wanna right-rotate: ";
    std::cin >> d;

    int* arr_ptr_2 = (int*) malloc(size* sizeof(int));

    // right shifting
    i = 0;
    while(i < size) {
        // modulus cycles you back to starting index when d+i hits the end of array
        arr_ptr_2[(i+d) % (size)] = arr_ptr[i];
        i++;
    }


    std::cout << "Rotated array is: ";

    i = 0;
    while(i < size) {
        std::cout << arr_ptr_2[i] << " ";
        i++;
    }
    std::cout << std::endl;

    free(arr_ptr);
    free(arr_ptr_2);

}
