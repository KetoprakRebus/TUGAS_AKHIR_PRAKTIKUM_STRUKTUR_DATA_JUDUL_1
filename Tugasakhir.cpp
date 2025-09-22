#include <iostream>
using namespace std;

void menu() {
    cout << "\n=== SISTEM PARKIRAN ===\n";
    cout << "1. Lihat status parkiran\n";
    cout << "2. Parkirkan motor\n";
    cout << "3. Keluarkan motor\n";
    cout << "4. Tampilkan alamat memori slot parkir\n";
    cout << "5. Keluar\n";
    cout << "Pilih: ";
}

int main() {
    // Parkiran 3 baris x 3 kolom
    string parkir[3][3] = {
        {"Kosong", "Kosong", "Kosong"},
        {"Kosong", "Kosong", "Kosong"},
        {"Kosong", "Kosong", "Kosong"}
    };

    int choice;
    bool running = true;

    while (running) {
        menu();
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\nStatus Parkiran:\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << parkir[i][j] << "\t";
                }
                cout << endl;
            }
            break;

        case 2: {
            int baris, kolom;
            string plat;
            cout << "Masukkan baris (0-2): "; cin >> baris;
            cout << "Masukkan kolom (0-2): "; cin >> kolom;
            if (parkir[baris][kolom] == "Kosong") {
                cout << "Masukkan nomor polisi motor: ";
                cin >> plat;
                parkir[baris][kolom] = plat;
                cout << "Motor berhasil diparkir!\n";
            } else {
                cout << "Slot sudah terisi!\n";
            }
            break;
        }

        case 3: {
            int baris, kolom;
            cout << "Masukkan baris (0-2): "; cin >> baris;
            cout << "Masukkan kolom (0-2): "; cin >> kolom;
            if (parkir[baris][kolom] != "Kosong") {
                cout << "Motor dengan plat " << parkir[baris][kolom] << " keluar.\n";
                parkir[baris][kolom] = "Kosong";
            } else {
                cout << "Slot sudah kosong!\n";
            }
            break;
        }

        case 4:
            cout << "\nAlamat memori tiap slot parkir:\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << "Slot[" << i << "][" << j << "] : " << &parkir[i][j] << endl;
                }
            }
            break;

        case 5:
            running = false;
            cout << "Keluar dari program.\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }
    }

    return 0;
}
