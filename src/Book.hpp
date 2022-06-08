#ifndef __BOOK_
#define __BOOK__

#include <iostream>
#include <string> // string bisa di ganti pakai const char*
#include <fstream>

using namespace std;

class Book
{
private:
    string fileName;
    ofstream out;
    ifstream in;

public:
    Book(string fileName);

    void read();
};

#endif