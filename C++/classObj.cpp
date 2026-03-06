// Create a class called Book with the following attributes:

// title (string)
// author (string)
// year (int)
// Then create two objects of the class and print their attribute values.

#include <iostream>
#include <string>
using namespace std;

class book
{
public:
    string title;
    string author;
    int year;
};

int main()
{
    book book1;

    book1.title = "1st book";
    book1.author = "abc";
    book1.year = 2020;

    book book2;

    book2.title = "2nd book";
    book2.author = "def";
    book2.year = 2021;

    cout << book1.title << ", " << book1.author << ", " << book1.year << "\n";
    cout << book2.title << " " << book2.author << " " << book2.year ;
    return 0;
}

