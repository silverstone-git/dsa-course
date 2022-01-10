// checking if the given number if prime or not

#include <iostream>

int main() {
    
    int n;
    bool can_divide = false;
    std::cout << "Enter the number which you want to check \n> ";
    std::cin >> n;

    // there are no factors of a number above its half except itself
    for(int i = 2; i < (n/2)+1; i ++) {
        if(n%i == 0) {
            can_divide = true;
            std::cout << "This i can divide the n: " << i << std::endl;
            break;
        }
    }

    if(can_divide) {
        std::cout << "The number isn't a prime" << std::endl;
    } else {
        std::cout << "The number is a prime" << std::endl;
    }


    return 0;
}
