#include <iostream>
using namespace std;

int main() {
    // Deklarasi array dengan 10 elemen
    int data[10] = {80, 76, 87, 10, 67, 90, 77, 54, 9, 32};

    // Menampilkan elemen-elemen array
    cout << "Isi dari array adalah: ";
    for(int i = 0; i < 10; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
