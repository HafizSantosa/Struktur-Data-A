#include <iostream>
#include <string>
<<<<<<< HEAD

using namespace std;

=======
>>>>>>> c184b534db2a226834ad87606b8fac3694d3391c
const int MAX_DATA = 10;

struct Data {
    int id;
    string nama;
    string Data1;
    int Data2;
    string Data3;
    string Data4;
    string Data5;    
    string Data6;
    string Data7;
    string Data8;
    string Data9;
    string Data10;
};

void tampilkanData(const Data data[], int size) {
    if (size == 0) {
        cout << "Tidak ada data yang tersimpan.\n";
        return;
    }

    cout << "Data yang tersimpan:\n";
    for (int i = 0; i < size; ++i) {
        cout << "ID: " << data[i].id << "\n Nama: " << data[i].nama << "\n Jenis Kelamin: " << data[i].Data1
             << "\n Umur: " << data[i].Data2 << "\n Alamat: " << data[i].Data3 << "\n Nomor KTP: " << data[i].Data4
             << "\n Nomor Telepon: " << data[i].Data5 << "\n Pekerjaan: " << data[i].Data6 << "\n Status: " << data[i].Data7
             << "\n Golongan Darah: " << data[i].Data8 << "\n Agama: " << data[i].Data9 << "\n Kewarganegaraan: " << data[i].Data10 << endl;
    }
}

void tambahData(Data data[], int& size) {
    if (size >= MAX_DATA) {
        cout << "Database sudah penuh. Tidak dapat menambahkan data.\n";
        return;
    }

    Data newData;
    cout << "Masukkan ID: ";
    cin >> newData.id;
    cin.ignore();

    cout << "Masukkan Nama: ";
    getline(cin, newData.nama);

    cout << "Masukkan Jenis Kelamin: ";
    getline(cin, newData.Data1);

    cout << "Masukkan Umur: ";
    cin >> newData.Data2;
    cin.ignore();

    cout << "Masukkan Alamat: ";
    getline(cin, newData.Data3);

    cout << "Masukkan Nomor KTP: ";
    cin >> newData.Data4;
    cin.ignore();

    cout << "Masukkan Nomor Telepon: ";
    getline(cin, newData.Data5);

    cout << "Masukkan Pekerjaan: ";
    getline(cin, newData.Data6);

    cout << "Masukkan Status: ";
    getline(cin, newData.Data7);

    cout << "Masukkan Golongan Darah: ";
    getline(cin, newData.Data8);

    cout << "Masukkan Agama: ";
    getline(cin, newData.Data9);

    cout << "Masukkan Kewarganegaraan: ";
    getline(cin, newData.Data10);

    data[size++] = newData;
    cout << "Data berhasil ditambahkan.\n";
}

void hapusData(Data data[], int& size, int id) {
    for (int i = 0; i < size; ++i) {
        if (data[i].id == id) {
            for (int j = i; j < size - 1; ++j) {
                data[j] = data[j + 1];
            }
            --size;
            cout << "Data dengan ID " << id << " berhasil dihapus.\n";
            return;
        }
    }
    cout << "Data dengan ID " << id << " tidak ditemukan.\n";
}

void ubahData(Data data[], int size, int id) {
    for (int i = 0; i < size; ++i) {
        if (data[i].id == id) {
            cout << "Masukkan Nama yang baru: ";
            getline(cin, data[i].nama);
            cin.ignore();

            cout << "Masukkan Jenis Kelamin yang baru: ";
            getline(cin, data[i].Data1);

            cout << "Masukkan Umur yang baru: ";
            cin >> data[i].Data2;
            cin.ignore();

            cout << "Masukkan Alamat yang baru: ";
            getline(cin, data[i].Data3);

            cout << "Masukkan Nomor KTP yang baru: ";
            cin >> data[i].Data4;
            cin.ignore();

            cout << "Masukkan Nomor Telepon yang baru: ";
            getline(cin, data[i].Data5);

            cout << "Masukkan Pekerjaan yang baru: ";
            getline(cin, data[i].Data6);

            cout << "Masukkan Status yang baru: ";
            getline(cin, data[i].Data7);

            cout << "Masukkan Golongan Darah yang baru: ";
            getline(cin, data[i].Data8);

            cout << "Masukkan Agama yang baru: ";
            getline(cin, data[i].Data9);

            cout << "Masukkan Kewarganegaraan yang baru: ";
            getline(cin, data[i].Data10);

            cout << "Data berhasil diubah.\n";
            return;
        }
    }
    cout << "Data dengan ID " << id << " tidak ditemukan.\n";
}

void cariData(const Data data[], int size, int id) {
    for (int i = 0; i < size; ++i) {
        if (data[i].id == id) {
            cout << "Data ditemukan:\n";
            cout << "ID: " << data[i].id << "\n Nama: " << data[i].nama << "\n Jenis Kelamin: " << data[i].Data1
                 << "\n Umur: " << data[i].Data2 << "\n Alamat: " << data[i].Data3 << "\n Nomor KTP: " << data[i].Data4
                 << "\n Nomor Telepon: " << data[i].Data5 << "\n Pekerjaan: " << data[i].Data6 << "\n Status: " << data[i].Data7
                 << "\n Golongan Darah: " << data[i].Data8 << "\n Agama: " << data[i].Data9 << "\n Kewarganegaraan: " << data[i].Data10 << endl;
            return;
        }
    }
    cout << "Data dengan ID " << id << " tidak ditemukan.\n";
}

int main() {
    Data database[MAX_DATA];
    int size = 0;

    while (true) {
        cout << "\nPilih operasi yang ingin Anda lakukan:\n";
        cout << "1. Tampilkan Data\n";
        cout << "2. Tambah Data\n";
        cout << "3. Hapus Data\n";
        cout << "4. Ubah Data\n";
        cout << "5. Cari Data\n";
        cout << "6. Keluar\n";

        int pilihan;
        cin >> pilihan;

        if (pilihan == 1) {
            tampilkanData(database, size);
        } else if (pilihan == 2) {
            tambahData(database, size);
        } else if (pilihan == 3) {
            int id;
            cout << "Masukkan ID yang ingin dihapus: ";
            cin >> id;
            hapusData(database, size, id);
        } else if (pilihan == 4) {
            int id;
            cout << "Masukkan ID yang ingin diubah: ";
            cin >> id;
            ubahData(database, size, id);
        } else if (pilihan == 5) {
            int id;
            cout << "Masukkan ID yang ingin dicari: ";
            cin >> id;
            cariData(database, size, id);
        } else if (pilihan == 6) {
            cout << "Program selesai.\n";
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }

    return 0;
}
