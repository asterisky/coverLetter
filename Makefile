all: coverletter

author.o: author.cpp author.h
	clang++ -c -g author.cpp
coverletter: CoverLetter.cpp author.h author.o
	clang++ -g author.o CoverLetter.cpp -o CoverLetter -I
clean:
	rm -rf *.o