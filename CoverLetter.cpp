#include <iostream>
#include "author.h"

using namespace std;

int main(){
    std::string input = "";
    std::string companyName = "";
    std::string positionName = "";
    std::string postingSource = "";
    cout << "Hello Potential Employer!  What's the name of the company do you want to recruit me into?\n";

    // get company name
    std::getline(std::cin, input);
    while(input.std::string::empty()){
        cout << "Please type the company name or use ctl+c to quit.\n";
        std::getline(std::cin, input);
    }
    companyName = companyName + input;
    cout << "I've always wanted to work at " << companyName << "!\n";    

    // get position
    cout << "What position are you looking to fill at " << companyName << "?\n";
    std::getline(std::cin, input);
    while(input.std::string::empty()){
        cout << "Please type the job title or use ctl+c to quit.\n";
        std::getline(std::cin, input);
    }
    positionName = positionName + input;

    // get the source
    cout << "What website did you post the listing to?\n";
    std::getline(std::cin, input);
    while(input.std::string::empty()){
        cout << "Please type the source or use ctl+c to quit.\n";
        std::getline(std::cin, input);
    }
    postingSource = postingSource + input;
    
    cout << "\n\n*************************\n Generating Cover Letter \n*************************\n\n\n\n";

    writer::Author* a = new writer::Author(companyName, positionName, postingSource);
    
    (*a).write(a);
    
    cout << "\n\n\n\n";
}
