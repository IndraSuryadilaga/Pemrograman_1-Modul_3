#include <stdio.h>

int main() {
    int jumlah_detik;
    int jam, menit, detik, hari;

    scanf("%d", &jumlah_detik);

    jam = jumlah_detik / 3600;
    menit = (jumlah_detik % 3600) / 60;
    detik = jumlah_detik % 60;

    if (jam >= 24) {
        hari = jam / 24;
        jam = jam % 24;
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }

    return 0;
}