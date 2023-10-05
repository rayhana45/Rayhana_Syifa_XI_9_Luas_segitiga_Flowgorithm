#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    float luas;
    float alas;
    float tinggi;
    cout<<"Masukkan Alas Segitiga : \n";
    cin >> alas;
    cout<<"Masukkan Tinggi Segitiga : \n";
    cin >> tinggi;
    luas = (float) (alas * tinggi * 0.5);
    cout << "Luas segitiga adalah : " << luas << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
