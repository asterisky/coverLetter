#include <iostream>
#include "author.h"

using namespace std;

int main(){
    std::string input = "";
    cout << "Hello Potential Employer!  What's the name of the company do you want to recruit me into?\n";
    std::getline(std::cin, input);
    while(input.std::string::empty()){
        cout << "Please type the company name or use ctl+c to quit.\n";
        std::getline(std::cin, input);
    }
    writer::Author a;
    a.write(input);
}
