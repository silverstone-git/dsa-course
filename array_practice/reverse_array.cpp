// to reverse an array
//
#include<iostream>


int* reverse_array(int* arr1_ptr, int size) {

    static int* arr_ptr = (int*) malloc(size*sizeof(int));

    for(int i = 0; i < size; i ++) {
        arr_ptr[i] = arr1_ptr[size-i-1];
    }

    return arr_ptr;

}


int main() {
    // the array

    int size;
    std::cout << "Enter the size of array: ";
    std::cin >> size;
    int* arr1_ptr = (int*) malloc(size*sizeof(int));
    if(arr1_ptr == NULL) {
        exit(1);
    }
    std::cout << "Enter the array: ";
    for(int i = 0; i < size; i ++) {
        // getting array from user
        std::cin >> arr1_ptr[i];
    }

    int* rev_arr_ptr = reverse_array(arr1_ptr, size);

    for(int i = 0; i < size; i ++) {
        // In C/C++, adding int to an int pointer increments the address by int's size (in hex)
        //std::cout << "element at ptr " << (rev_arr_ptr+i) << " is " << *(rev_arr_ptr+i) << std::endl;
        std::cout << *(rev_arr_ptr+i) << " ";
    }

    std::cout << std::endl;

    std::cout << "ptr is: " << rev_arr_ptr << std::endl;
    std::cout << "ptr plus int 2 is: " << rev_arr_ptr+2 << std::endl;

    free(rev_arr_ptr);
    free(arr1_ptr);

}

