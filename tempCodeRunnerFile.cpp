#include <iostream>
#include <vector>
#include <string>

const int MAX_DATA = 10; // Jumlah maksimal data yang dapat disimpan

struct Data {
    int id;
    std::string nama;
    std::string atribut1;
    std::string atribut2;
    std::string atribut3;
    std::string atribut4;
    std::string atribut5;
    std::string atribut6;
    std::string atribut7;
    std::string atribut8;
    std::string atribut9;
    std::string atribut10;
    // Tambahkan atribut lain yang diperlukan di sini
};

// Fungsi untuk menampilkan data
void tampilkanData(const std::vector<Data>& data) {
    if (data.empty()) {
        std::cout << "Tidak ada data yang tersimpan.\n";
        return;
    }

    std::cout << "Data yang tersimpan:\n";
    for (const Data& d : data) {
        std::cout << "ID: " << d.id << "\n Nama: " << d.nama << "\n Atribut 1: " << d.atribut1 << "\n Atribut 2: " << d.atribut2
                  << "\n Atribut 3: " << d.atribut3 << "\n Atribut 4: " << d.atribut4 << "\n Atribut 5: " << d.atribut5
                  << "\n Atribut 6: " << d.atribut6 << "\n Atribut 7: " << d.atribut7 << "\n Atribut 8: " << d.atribut8
                  << "\n Atribut 9: " << d.atribut9 << "\n Atribut 10: " << d.atribut10 << std::endl;
        // Tampilkan atribut-atribut lain yang diperlukan di sini
    }
}

// Fungsi untuk menambahkan data
void tambahData(std::vector<Data>& data) {
    if (data.size() >= MAX_DATA) {
        std::cout << "Database sudah penuh. Tidak dapat menambahkan data lebih lanjut.\n";
        return;
    }

    Data newData;
    std::cout << "Masukkan ID: ";
    std::cin >> newData.id;
    std::cin.ignore(); // Menghapus newline character dari input sebelumnya
    std::cout << "Masukkan Nama: ";
    std::getline(std::cin, newData.nama);
    std::cout << "Masukkan Atribut 1: ";
    std::getline(std::cin, newData.atribut1);
    std::cout << "Masukkan Atribut 2: ";
    std::getline(std::cin, newData.atribut2);
    std::cout << "Masukkan Atribut 3: ";
    std::getline(std::cin, newData.atribut3);
    std::cout << "Masukkan Atribut 4: ";
    std::getline(std::cin, newData.atribut4);
    std::cout << "Masukkan Atribut 5: ";
    std::getline(std::cin, newData.atribut5);
    std::cout << "Masukkan Atribut 6: ";
    std::getline(std::cin, newData.atribut6);
    std::cout << "Masukkan Atribut 7: ";
    std::getline(std::cin, newData.atribut7);
    std::cout << "Masukkan Atribut 8: ";
    std::getline(std::cin, newData.atribut8);
    std::cout << "Masukkan Atribut 9: ";
    std::getline(std::cin, newData.atribut9);
    std::cout << "Masukkan Atribut 10: ";
    std::getline(std::cin, newData.atribut10);
    // Masukkan atribut-atribut lain yang diperlukan di sini

    data.push_back(newData);
    std::cout << "Data berhasil ditambahkan.\n";
}

// Fungsi untuk menghapus data berdasarkan ID
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

// Fungsi untuk mengubah data berdasarkan ID
void ubahData(std::vector<Data>& data, int id) {
    for (Data& d : data) {
        if (d.id == id) {
            std::cin.ignore(); // Menghapus newline character dari input sebelumnya
            std::cout << "Masukkan Nama yang baru: ";
            std::getline(std::cin, d.nama);
            std::cout << "Masukkan Atribut 1 yang baru: ";
            std::getline(std::cin, d.atribut1);
            std::cout << "Masukkan Atribut 2 yang baru: ";
            std::getline(std::cin, d.atribut2);
            std::cout << "Masukkan Atribut 3 yang baru: ";
            std::getline(std::cin, d.atribut3);
            std::cout << "Masukkan Atribut 4 yang baru: ";
            std::getline(std::cin, d.atribut4);
            std::cout << "Masukkan Atribut 5 yang baru: ";
            std::getline(std::cin, d.atribut5);
            std::cout << "Masukkan Atribut 6 yang baru: ";
            std::getline(std::cin, d.atribut6);
            std::cout << "Masukkan Atribut 7 yang baru: ";
            std::getline(std::cin, d.atribut7);
            std::cout << "Masukkan Atribut 8 yang baru: ";
            std::getline(std::cin, d.atribut8);
            std::cout << "Masukkan Atribut 9 yang baru: ";
            std::getline(std::cin, d.atribut9);
            std::cout << "Masukkan Atribut 10 yang baru: ";
            std::getline(std::cin, d.atribut10);
            // Masukkan perubahan atribut-atribut lain yang diperlukan di sini
            std::cout << "Data berhasil diubah.\n";
            return;
        }
    }
    std::cout << "Data dengan ID " << id << " tidak ditemukan.\n";
}

// Fungsi untuk mencari data berdasarkan ID
void cariData(const std::vector<Data>& data, int id) {
    for (const Data& d : data) {
        if (d.id == id) {
            std::cout << "Data ditemukan:\n";
            std::cout << "ID: " << d.id << "\n Nama: " << d.nama << "\n Atribut 1: " << d.atribut1 << "\n Atribut 2: " << d.atribut2
                      << "\n Atribut 3: " << d.atribut3 << "\n Atribut 4: " << d.atribut4 << "\n Atribut 5: " << d.atribut5
                      << "\n Atribut 6: " << d.atribut6 << "\n Atribut 7: " << d.atribut7 << "\n Atribut 8: " << d.atribut8
                      << "\n Atribut 9: " << d.atribut9 << "\n Atribut 10: " << d.atribut10 << std::endl;
            // Tampilkan atribut-atribut lain yang ditemukan di sini
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
