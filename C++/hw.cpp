#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Invalid input" << endl;
    }
    else if (marks >= 90)
    {
        cout << "A+\n";
    }
    else if (marks >= 80 && marks <= 89)
    {
        cout << "A\n";
    }
    else if (marks >= 70 && marks <= 79)
    {
        cout << "B\n";
    }
    else if (marks >= 60 && marks <= 69)
    {
        cout << "c\n";
    }
    else
    {
        cout << " FAil" << endl;
    }

    return 0;
}
/*

alternate 


#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    if (m < 0 || m > 100)   cout << "Invalid\n";
    else if (m >= 90)        cout << "A+\n";
    else if (m >= 80)        cout << "A\n";
    else if (m >= 70)        cout << "B\n";
    else if (m >= 60)        cout << "C\n";
    else                     cout << "Fail\n";

    return 0;
}
*/


/*
    90 and above → "A+"
    80 to 89 → "A"
    70 to 79 → "B"
    60 to 69 → "C"
    Below 60 → "Fail"


    Also prints "Invalid input" if marks are below 0 or above 100
    */