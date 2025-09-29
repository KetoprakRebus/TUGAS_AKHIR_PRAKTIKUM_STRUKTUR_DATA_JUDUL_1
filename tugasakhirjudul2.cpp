#include <iostream> 
using namespace std; 
 
void tukar(int *x, int *y); 
 
int main() { 
    int n; 
    int harga[1005]; 
 
    cout << "Masukkan jumlah barang: "; 
    cin >> n; 
 
    cout << "Masukkan harga tiap barang:\n"; 
    for (int i = 0; i < n; i++) { 
        cin >> harga[i]; 
    } 
 
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (harga[j] > harga[j + 1]) { 
                tukar(&harga[j], &harga[j + 1]); 
            } 
        } 
    } 
 
    cout << "\nDaftar harga barang setelah diurutkan (murah → mahal):\n"; 
    for (int i = 0; i < n; i++) { 
        cout << "Rp" << harga[i] << endl; 
    } 
    return 0; 
} 
 
void tukar(int *x, int *y) { 
    int z = *x; 
    *x = *y; 
    *y = z; 
} 
