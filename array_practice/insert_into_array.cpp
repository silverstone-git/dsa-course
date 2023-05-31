#include<iostream>

int main() {
    int to_be_inserted;
    std::cout << "Enter the position where to insert the number: ";
    std::cin >> to_be_inserted;

    std::cout << "Enter the size of Array";
    int size;
    std::cin >> size;
    std::cout << "Enter the Array";

    // extra number to insert the number
    arr_ptr = (int*) malloc((size+1)* sizeof(int));
    for(int i = 0; i < size; i ++) {
        std::cin >> arr_ptr[i];
    }

    // insert by hitting the index from behind while displacing all elements by 1 until then

}
