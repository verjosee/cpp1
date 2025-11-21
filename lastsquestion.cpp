    #include <iostream>
    using namespace std;

    /*

        Soal 1:

        Buat sebuah struct PersegiPanjang, yang berisi :
        - panjang
        - lebar

        lalu buat sebuah function hitungLuas untuk menghitung Luas persegi 
        panjang tersebut dan tampilkan hasilnya.

        Hint : buat variable dengan tipe data struct PersegiPanjang terlebih dahulu,
                lalu isi dan kasih data tersebut ke function.
    */

    /*
        Soal 2:

        Buat sebuah struct Angka, yang berisi :
        - nilai (int)

        Buat function cekGanjilGenap yang menerima parameter berupa struct Angka,
        lalu mengecek apakah nilai tersebut ganjil atau genap, kemudian tampilkan hasilnya.

        Contoh:
        Input: 7
        Output: "Ganjil"

        Hint: isi nilai dalam struct, lalu kirim struct tersebut ke function.
    */

    /*
        Soal 3:

        Buat sebuah struct Batas, yang berisi :
        - N (int)

        Buat function tampilkanDeret yang menerima parameter berupa struct Batas,
        dan menampilkan deret angka dari 1 sampai N.

        Contoh:
        Jika N = 5 → Output: 1 2 3 4 5

        Hint: isi nilai N, lalu panggil function dengan parameter struct.
    */

    /*
        Soal 4:

        Buat sebuah struct NilaiSiswa, yang berisi :
        - nilai[5] (array dari int)

        Buat function hitungRata2 yang menerima struct NilaiSiswa,
        lalu menghitung dan menampilkan nilai rata-ratanya.

        Hint: isi array nilai dalam struct, lalu kirim struct tersebut ke function.
    */

    /*
        Soal 5:

        Buat struct Tanggal yang berisi :
        - hari
        - bulan
        - tahun

        Buat struct Mahasiswa yang berisi :
        - nama (string)
        - umur (int)
        - tglLahir (struct Tanggal)

        Buat function tampilkanData yang menerima struct Mahasiswa,
        lalu menampilkan seluruh datanya.

        Contoh output:
        Nama: Budi
        Umur: 16
        Tanggal Lahir: 12 - 5 - 2008

        Hint: isi semua data dalam struct Mahasiswa (termasuk tglLahir),
            lalu kirim struct tersebut ke function.
    */




#include <iostream>
using namespace std;

// Soal 1: Struct PersegiPanjang
struct PersegiPanjang {
    int panjang;
    int lebar;
};

void hitungLuas(PersegiPanjang pp) {
    int luas = pp.panjang * pp.lebar;
    cout << "Luas persegi panjang: " << luas << endl;
}

// Soal 2: Struct Angka
struct Angka {
    int nilai;
};

void cekGanjilGenap(Angka a) {
    if (a.nilai % 2 == 0) {
        cout << "Genap" << endl;
    } else {
        cout << "Ganjil" << endl;
    }
}

// Soal 3: Struct Batas
struct Batas {
    int N;
};

void tampilkanDeret(Batas b) {
    cout << "Deret angka: ";
    for (int i = 1; i <= b.N; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// Soal 4: Struct NilaiSiswa
struct NilaiSiswa {
    int nilai[5];
};

void hitungRata2(NilaiSiswa ns) {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += ns.nilai[i];
    }
    double rata2 = total / 5.0;
    cout << "Rata-rata nilai: " << rata2 << endl;
}

// Soal 5: Struct Tanggal dan Mahasiswa
struct Tanggal {
    int hari;
    int bulan;
    int tahun;
};

struct Mahasiswa {
    string nama;
    int umur;
    Tanggal tglLahir;
};

void tampilkanData(Mahasiswa mhs) {
    cout << "Nama: " << mhs.nama << endl;
    cout << "Umur: " << mhs.umur << endl;
    cout << "Tanggal Lahir: " << mhs.tglLahir.hari << " - " 
         << mhs.tglLahir.bulan << " - " << mhs.tglLahir.tahun << endl;
}

int main() {
    cout << " SOAL 1 " << endl;
    PersegiPanjang pp1;
    pp1.panjang = 10;
    pp1.lebar = 5;
    hitungLuas(pp1);
    
    cout << "\n SOAL 2 " << endl;
    Angka angka1;
    angka1.nilai = 7;
    cout << "Angka " << angka1.nilai << " adalah: ";
    cekGanjilGenap(angka1);
    
    cout << "\n SOAL 3 " << endl;
    Batas batas1;
    batas1.N = 5;
    tampilkanDeret(batas1);
    
    cout << "\n SOAL 4 " << endl;
    NilaiSiswa siswa1;
    siswa1.nilai[0] = 80;
    siswa1.nilai[1] = 85;
    siswa1.nilai[2] = 90;
    siswa1.nilai[3] = 75;
    siswa1.nilai[4] = 88;
    hitungRata2(siswa1);
    
    cout << "\n SOAL 5 " << endl;
    Mahasiswa mhs1;
    mhs1.nama = "Budi";
    mhs1.umur = 16;
    mhs1.tglLahir.hari = 12;
    mhs1.tglLahir.bulan = 5;
    mhs1.tglLahir.tahun = 2008;
    tampilkanData(mhs1);
    
    return 0;
}