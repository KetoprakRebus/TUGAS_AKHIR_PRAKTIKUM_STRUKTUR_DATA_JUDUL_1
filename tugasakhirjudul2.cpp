#include <iostream>
#include <string>
using namespace std;

// Fungsi Bubble Sort
void bubbleSort(string kontak[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (kontak[j] > kontak[j + 1]) {
                // Tukar posisi kontak
                string temp = kontak[j];
                kontak[j] = kontak[j + 1];
                kontak[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah kontak: ";
    cin >> n;

    string kontak[n];
    for (int i = 0; i < n; i++) {
        cout << "Nama kontak ke-" << i + 1 << ": ";
        cin >> kontak[i];
    }

    bubbleSort(kontak, n);

    cout << "\nDaftar kontak setelah diurutkan (A-Z):\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << kontak[i] << endl;
    }

    return 0;
}
