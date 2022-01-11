// to check if three given numbers are in a pythagorean triplet

#include <iostream>


bool check_pythagorean_triplet(int hypo, int adj, int perp) {
    if(hypo*hypo == adj*adj + perp*perp) {
        return true;
    } else {
        return false;
    }
}

int max_from_three(int n1, int n2, int n3) {

    return std::max(n1, std::max(n2,n3));

}

int main() {

    int n1,n2,n3;
    bool is_triplet = false;
    std::cout << "Enter the value for the first number\n> ";
    std::cin >> n1;
    std::cout << "Enter the value for the second number\n> ";
    std::cin >> n2;
    std::cout << "Enter the value for the third number\n> ";
    std::cin >> n3;

    int hypo = max_from_three(n1, n2, n3);
    

    if(hypo == n1){
        is_triplet = check_pythagorean_triplet(n1, n2, n3);
    } else if(hypo == n2) {
        is_triplet = check_pythagorean_triplet(n2, n1, n3);
    } else {
        is_triplet = check_pythagorean_triplet(n3, n1, n2);
    }

    if(is_triplet) {
        std::cout << "It is a pythagorean triplet" << std::endl;
    } else {
        std::cout << "It is not a pythagorean triplet" << std::endl;
    }

    return 0;
}
