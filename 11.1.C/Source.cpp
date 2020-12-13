#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>

using namespace std;

bool Find(FILE* h);


bool Find(FILE* h) {
    char p = 0;
    char f;
    do {

        f = getc(h);
        if (f == 'x') return true;
        p = f;
    } while (f != EOF);
    return false;
}
int main() {
    FILE* h;

    if (fopen_s(&h, "11.1.txt", "r") != 0) {
        cerr << "Error opening file '11.1.txt'" << endl;
        exit(1);
    }

    bool found = Find(h);
    if (found) {
        cout << "'lgx' found successfully" << endl;
    }
    else {
        cout << " 'lgx' NOT found" << endl;
    }

    fclose(h);

    return 0;
}
