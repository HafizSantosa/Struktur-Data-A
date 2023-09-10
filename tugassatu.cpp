#include <iostream>
#include <vector>
#include <string>

const int MAX_DATA = 10;

struct Data {
    int id;
    std::string nama;
    std::string Data1;
    std::string Data2;
    std::string Data3;
    std::string Data4;
    std::string Data5;
    std::string Data6;
    std::string Data7;
    std::string Data8;
    std::string Data9;
    std::string Data10;
};

void tampilkanData(const std::vector<Data>& data) {
    if (data.empty()) {
        std::cout << "Tidak ada data yang tersimpan.\n";
        return;
    }

    std::cout << "Data yang tersimpan:\n";
    for (const Data& d : data) {
        std::cout << "ID: " << d.id << "\n Nama: " << d.nama << "\n Data 1: " << d.Data1 << "\n Umur: " << d.Data2
                  << "\n Alamat: " << d.Data3 << "\n Nomor KTP: " << d.Data4 << "\n Nomor Telepon: " << d.Data5
                  << "\n Pekerjaan: " << d.Data6 << "\n Status: " << d.Data7 << "\n Golongan Darah: " << d.Data8
                  << "\n Agama: " << d.Data9 << "\n Kewarganegaraan: " << d.Data10 << std::endl;
    }
}

void tambahData(std::vector<Data>& data) {
    if (data.size() >= MAX_DATA) {
        std::cout << "Database sudah penuh. Tidak dapat menambahkan data.\n";
        return;
    }

    Data newData;
    std::cout << "Masukkan ID: ";
    std::cin >> newData.id;
    std::cin.ignore();
    std::cout << "Masukkan Nama: ";
    std::getline(std::cin, newData.nama);
    std::cout << "Masukkan Jenis Kelamin: ";
    std::getline(std::cin, newData.Data1);
    std::cout << "Masukkan Umur: ";
    std::getline(std::cin, newData.Data2);
    std::cout << "Masukkan Alamat: ";
    std::getline(std::cin, newData.Data3);
    std::cout << "Masukkan Nomor KTP: ";
    std::getline(std::cin, newData.Data4);
    std::cout << "Masukkan Nomor Telepon: ";
    std::getline(std::cin, newData.Data5);
    std::cout << "Masukkan Pekerjaan: ";
    std::getline(std::cin, newData.Data6);
    std::cout << "Masukkan Status: ";
    std::getline(std::cin, newData.Data7);
    std::cout << "Masukkan Golongan Darah: ";
    std::getline(std::cin, newData.Data8);
    std::cout << "Masukkan Agama: ";
    std::getline(std::cin, newData.Data9);
    std::cout << "Masukkan Kewarganegaraan: ";
    std::getline(std::cin, newData.Data10);

    data.push_back(newData);
    std::cout << "Data berhasil ditambahkan.\n";
}


void hapusData(std::vector<Data>& data, int id) {
    for (auto it = data.begin(); it != data.end(); ++it) {
        if (it->id == id) {
            data.erase(it);
            std::cout << "Data dengan ID " << id << " berhasil dihapus.\n";
            return;
        }
    }
    std::cout << "Data dengan ID " << id << " tidak ditemukan.\n";
}

void ubahData(std::vector<Data>& data, int id) {
    for (Data& d : data) {
        if (d.id == id) {
            std::cin.ignore();
            std::cout << "Masukkan Nama yang baru: ";
            std::getline(std::cin, d.nama);
            std::cout << "Masukkan Jenis Kelamin yang baru: ";
            std::getline(std::cin, d.Data1);
            std::cout << "Masukkan Umur yang baru: ";
            std::getline(std::cin, d.Data2);
            std::cout << "Masukkan Alamat yang baru: ";
            std::getline(std::cin, d.Data3);
            std::cout << "Masukkan Nomor KTP yang baru: ";
            std::getline(std::cin, d.Data4);
            std::cout << "Masukkan Nomor Telepon yang baru: ";
            std::getline(std::cin, d.Data5);
            std::cout << "Masukkan Pekerjaan yang baru: ";
            std::getline(std::cin, d.Data6);
            std::cout << "Masukkan Status yang baru: ";
            std::getline(std::cin, d.Data7);
            std::cout << "Masukkan Golongan Darah yang baru: ";
            std::getline(std::cin, d.Data8);
            std::cout << "Masukkan Agama yang baru: ";
            std::getline(std::cin, d.Data9);
            std::cout << "Masukkan Kewarganegaraan yang baru: ";
            std::getline(std::cin, d.Data10);
            std::cout << "Data berhasil diubah.\n";
            return;
        }
    }
    std::cout << "Data dengan ID " << id << " tidak ditemukan.\n";
}


void cariData(const std::vector<Data>& data, int id) {
    for (const Data& d : data) {
        if (d.id == id) {
            std::cout << "Data ditemukan:\n";
            std::cout << "ID: " << d.id << "\n Nama: " << d.nama << "\n Jenis Kelamin: " << d.Data1 << "\n Umur: " << d.Data2
                      << "\n Alamat: " << d.Data3 << "\n Nomor KTP: " << d.Data4 << "\n Nomor Telepon: " << d.Data5
                      << "\n Pekerjaan: " << d.Data6 << "\n Status: " << d.Data7 << "\n Golongan Darah: " << d.Data8
                      << "\n Agama: " << d.Data9 << "\n Kewarganegaraan: " << d.Data10 << std::endl;
            return;
        }
    }
    std::cout << "Data dengan ID " << id << " tidak ditemukan.\n";
}

int main() {
    std::vector<Data> database;

    while (true) {
        std::cout << "\nPilih operasi yang ingin Anda lakukan:\n";
        std::cout << "1. Tampilkan Data\n";
        std::cout << "2. Tambah Data\n";
        std::cout << "3. Hapus Data\n";
        std::cout << "4. Ubah Data\n";
        std::cout << "5. Cari Data\n";
        std::cout << "6. Keluar\n";

        int pilihan;
        std::cin >> pilihan;

        if (pilihan == 1) {
            tampilkanData(database);
        } else if (pilihan == 2) {
            tambahData(database);
        } else if (pilihan == 3) {
            int id;
            std::cout << "Masukkan ID yang ingin dihapus: ";
            std::cin >> id;
            hapusData(database, id);
        } else if (pilihan == 4) {
            int id;
            std::cout << "Masukkan ID yang ingin diubah: ";
            std::cin >> id;
            ubahData(database, id);
        } else if (pilihan == 5) {
            int id;
            std::cout << "Masukkan ID yang ingin dicari: ";
            std::cin >> id;
            cariData(database, id);
        } else if (pilihan == 6) {
            std::cout << "Program selesai.\n";
            break;
        } else {
            std::cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }

    return 0;
}
