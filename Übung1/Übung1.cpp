//
// This Code belongs to Harald Swoboda a Student of HTL WienWest Class 1BBIF
// This work was done for AINF Prof Jaich.
//

#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main() {
    char instring;
    string empty = "";

    system("cls");
    cout << "\n\n Enter something:\n ";
    cin >> instring;

    bool ok = true;
    if (isalpha(instring)) {
        if (isupper(instring)) cout << "\n\n Grossbuchstabe ";
        else cout << "\n\n Kleinbuchstabe ";
    } else if (isdigit(instring)) cout << "\n\n Ziffer ";
    else if (instring == '%') cout << "\n\n Modulo–Operator ";
    else if (instring == '+' || instring == '*' || instring == '/' || instring == '-') cout << "\n\n Rechenoperator ";
    else cout << "\n\n sonstiges Zeichen ";

    cout << "\n\n press an letter or number, then enter...\n ";
    cin >> empty;
}
