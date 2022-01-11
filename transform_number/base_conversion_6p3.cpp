// to make a converter between binary, octal, decimal, and hexadecimal
// this doesn't compile because I have yet to figure out how to include map in c++

#include <iostream>
#include <string>
#include <map>
#include <cmath>

int other_to_decimal(std::string other_base_number, int base) {

    // here, base is the base of the number given
    int l = other_base_number.size();
    int decimal = 0;
    int current_digit;
    char current_char = 'b';
    for(int i = 0; i < l; i ++) {
        current_char = other_base_number[l-i-1];
        if(current_char >= '0' && current_char <= '9'){

            // subtracting by 0 is like finding the distance from it, compare it to vectors
            // and distance from 0 is what we need, we don't need unicode, similar to
            // difference between vectors is independent of choice of origin
            current_digit = current_char - '0';

        } else if (current_char >= 'A' && current_char <= 'Z'){

            // adding 10 because if 1 is the distance from A, the number corresponding to
            // hex is 11, which is what we need
            current_digit = 10 + current_char - 'A';

        } else if (current_char >= 'a' && current_char <= 'z'){

            // same thing, but for small letters
            current_digit = 10 + current_char - 'a';

        } else {
            throw "What you have entered is neither binary, octal nor hexadecimal";
        }

        decimal += current_digit * pow(base, i);
    }

    return decimal;
}


void check_power(int susroot, int suspower, bool *is_power, int *power) {

    // calling by reference to give both the is_power and the exponent used

    int prod = 1;
    int current_exponent = 0;
    while(prod < suspower) {
        prod *= susroot;
        current_exponent ++;
    }

    *power = current_exponent;

    if(prod == suspower) {
        *is_power = true;
    } else {
        *is_power = false;
    }

}


std::map<int, int> decimal_to_other(int decimal, int base) {
    
    // here, base is the base to which decimal is to be
    // converted
    bool i_is_power_of_base;
    int number_to_distribute = decimal;
    int raised_to;
    int thedigit;
    // number being stored as place --> value pairs
    std::map<int, int> newnumber = {};
    int i = decimal;
    while(i > 0) {
        check_power(base, i, &i_is_power_of_base, &raised_to);
        if(i_is_power_of_base){
            //std::cout << "We just caught the power of : " << i << std::endl;
            thedigit = number_to_distribute / i;
            newnumber.insert({raised_to, thedigit});
            // greedy algorithm
            // this is equivalent to number_to_distribute %= i
            number_to_distribute -= (i * thedigit);
            // getting i down to number_to_distr because you can't get the maximum lower
            // power being more than the number
            i = number_to_distribute;

        } else{
            i --;
        }
    }
    return newnumber;
    
}


int main() {

    // driver program

    int inp;
    std::cout << "Enter the number in decimal\n> ";
    std::cin >> inp;

    int base;
    std::cout << "Enter the base you want it to convert it to\n> ";
    std::cin >> base;

    std::map<int, int> thenew_number = decimal_to_other(inp, base);
    
    for (auto&& item : thenew_number)
        std::cout << item.first << ": " << item.second << '\n';


    std::string inp2;
    std::cout << "Enter the number in other base\n> ";
    std::cin >> inp2;

    std::cout << "Enter the base of what you just entered\n> ";
    std::cin >> base;

    std::cout << other_to_decimal(inp2, base) << std::endl;

    return 0;
}
