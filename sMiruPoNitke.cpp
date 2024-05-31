#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int num;
    cout << "number of lab";
    cin >> num;
    switch (num) {
        case 1:
        system("g++ -o 1lab2.cpp");
        system("1lab2.cpp");
        break;
        case 2:
        system("g++ -o 2lab.cpp");
        system("2lab.cpp");
        break;
        case 3:
        system("g++ -o 3lab2.cpp");
        system("3lab2.cpp");
        break;
        default: 
        cout << "Error!";
    }

}