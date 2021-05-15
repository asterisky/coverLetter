all: coverletter

author.o: author.cpp author.h
	clang++ -c -g -std=c++11 author.cpp
coverletter: CoverLetter.cpp author.h author.o
	clang++ -g -std=c++11 author.o CoverLetter.cpp -o CoverLetter -I
clean:
	rm -rf *.o