#include <iostream>

int kalkulator() {
    const int threshold = 100000;
    // Diskon diberikan berdasarkan harga sebelum diskon
    int nilai_belanja;
    std::cout << "Masukkan nilai belanja: ";
    std::cin >> nilai_belanja;

    int jumlah_voucher;
    if (nilai_belanja >= threshold) {
        jumlah_voucher = nilai_belanja / threshold;

        const int nilai_diskon =  int(0.05*nilai_belanja);
        printf("Anda mendapat %d voucher \n", jumlah_voucher);
        printf("Anda mendapat diskon 5%% sebesar Rp%d \n",nilai_diskon);
        printf("Tagihan akhir Anda sebesar Rp%d \n", nilai_belanja- nilai_diskon);
    }
    return 0;
}

int payroll() {

    return 0;
}

int main() {

    int soal;
    std::cout << "Masukkan Soal yang ingin dijalankan (1 / 2): ";
    std::cin >> soal;

    if (soal == 1) {
        return kalkulator();
    }

    if (soal == 2) {
        return payroll();
    }

    std::cout << "Hanya bisa pilih 1 atau 2 ";
    return 1;
}
