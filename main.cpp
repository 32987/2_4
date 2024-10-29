#include <iostream>
using namespace std;

void zad2_4() {
    int wysokosc;
    cout << "Wpisz wysokosc: " << endl;
    cin >> wysokosc;

    int liczba;
    if (wysokosc % 2 == 0) {
        liczba = 2;
    } else {
        liczba = 1;
    }

    for (int w = 0; w < wysokosc / 2; w++) {
        for (int i = 0; i < (wysokosc - liczba) / 2; i++) {
            cout << " ";
        }
        for (int i = 0; i < liczba; i++) {
            cout << "*";
        }
        cout << "\n";
        liczba += 2;
    }
    int liczba2 = wysokosc;
    for (int w = 0; w < wysokosc / 2 + 1; w++) {
        for (int i = 0; i < (wysokosc - liczba2) / 2; i++) {
            cout << " ";
        }
        for (int i = 0; i < liczba2; i++) {
            cout << "*";
        }
        cout << "\n";
        liczba2 -= 2;
    }
}

int main() {
    zad2_4();
    return 0;
}
