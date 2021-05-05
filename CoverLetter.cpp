#include <iostream>
#include "author.h"

using namespace std;

int main(){
    std::string input = "";
    cout << "Hello Potential Employer!  What's the name of the company do you want to recruit me into?\n";
    cin >> input;
    writer::Author a;
    a.write(input);
}