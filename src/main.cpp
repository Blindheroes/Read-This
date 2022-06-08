// cara run task buat save, compile, dan run rogram press [ctlr + shift + B]

#include <iostream>
#include <string> // string bisa di ganti pakai const char*
#include <fstream>
#include <stdlib.h>

#include "Book.hpp"

using namespace std;

int main()
{
    system("color 70");
    string targetFile = "READ.txt";
    Book file1(targetFile);
    file1.read();

    return 0;
}
