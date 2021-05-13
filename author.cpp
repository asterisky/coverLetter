#include <iostream>
#include <fstream>
#include "author.h"

using namespace std;
using namespace writer;

/* write to the file */
void writer::Author::write(writer::Author* a){
    std::fstream file("PizzikettiCoverLetter.txt", std::fstream::out);
    if(file.is_open()){
        file << a->letter;
    }
    cout << a->letter;
    file.close();
}

