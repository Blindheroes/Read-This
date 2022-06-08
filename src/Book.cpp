#include <iostream>
#include <string> // string bisa di ganti pakai const char*
#include <fstream>

#include "Book.hpp"

using namespace std;

Book::Book(string fileName)
{
    Book::fileName = fileName;
}

void Book::read()
{
    Book::in.open(Book::fileName, ios::in);
    string text;
    int enter = 0;
    while (!Book::in.eof())
    {
        Book::in >> text;
        cout << text << " ";
        enter++;
        if (enter == 5)
        {
            cout << endl;
            enter = 0;
        }
    }
    Book::in.close();
}
