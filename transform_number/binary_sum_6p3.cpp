// take two binary numbers, add them like binary numbers add and output the result

#include <iostream>
#include <string>

std::string adder(char n1, char n2, char *carry) {

    std::string resultbit;
    if( n1 == '1' && n2 == '1') {
        resultbit = "0";
        *carry = '1';
    } else if((n1 == '0' && n2 == '1') ||(n1 == '1' && n2 == '0')) {
        resultbit = "1";
        *carry = '0';
    } else {
        resultbit = "0";
        *carry = '0';
    }

    return resultbit;

}


std::string tripleadder(char n1, char n2, char *carry) {

    // this is a triple adder because a carry bit of 1 is assumed here

    std::string resultbit = "1";
    if(n1 == '0' && n2 == '0') {
        *carry = '0';
        return resultbit;
    } else if(n1 == '0' && n2 == '1' || n1 == '1' && n2 == '0') {
        *carry = '1';
        resultbit = "0";
        return resultbit;
    } else {
        *carry = '1';
        return resultbit;
    }

}

int main() {

    std::string n1;
    std::string n2;
    std::cout << "Enter the first binary\n> ";
    std::cin >> n1;
    std::cout << "Enter the second binary\n> ";
    std::cin >> n2;
    int l1 = n1.size();
    int l2 = n2.size();

    int shorter = std::min(l1,l2);
    int longer;
    std::string shortstring;
    std::string longstring;
    // default value is "" for strings
    std::string resultstring;

    if(shorter == l1) {
        longer = l2;
        longstring = n2;
        shortstring = n1;
    } else {
        longer = l1;
        longstring = n1;
        shortstring = n2;
    }

    char carry = '0';
    for(int i = shorter; i > 0; i --) {
        if(carry == '0') {
            resultstring = adder(
                shortstring[i-1],
                longstring[(longer - shorter) + i-1],
                &carry
            ) + resultstring;
        } else {
            resultstring = tripleadder(
                shortstring[i-1],
                longstring[(longer - shorter) + i-1],
                &carry
            ) + resultstring;
        }
    }
    
    //std::cout << "First loop over, carry is: " << carry << std::endl;
    //std::cout << "Resultstring is: " << resultstring << std::endl;

    int pos = longer-shorter-1;
    while(carry == '1') {
        if(pos == -1) {
            resultstring = carry + resultstring;
            break;
        }
        if(longstring[pos] == '0') {
            resultstring = '1' + resultstring;
            carry = '0';
        } else {
            resultstring = '0' + resultstring;
            carry = '1';
        }
        pos --;
    }
    
    //std::cout << "Second loop over, carry is: " << carry << std::endl;
    //std::cout << "Resultstring is: " << resultstring << std::endl;
    
    if(pos > -1) {
        resultstring = longstring.substr(0, pos+1) + resultstring;
    }
    
    //std::cout << "Third loop over, carry is: " << carry << std::endl;

    std::cout << resultstring << std::endl;

    return 0;
}
