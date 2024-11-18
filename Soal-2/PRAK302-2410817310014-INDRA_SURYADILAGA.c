#include <stdio.h>

int main() {
    int nilai;
    char grade, nama[40];

    printf("Masukan nilai : ");
    scanf("%i", &nilai);

    if (nilai >= 80) {
        grade = 'A';}
    else if (nilai >= 70) {
        grade = 'B';}
    else if (nilai >= 60) {
        grade = 'C';}
    else if (nilai >= 50) {
        grade = 'D';}
    else {
        grade = 'E';}

    printf("Nilai\t\t: %i\n", nilai);
    printf("Grade anda\t: %c\n", grade);
    
    return 0;
}