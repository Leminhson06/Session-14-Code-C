#include <stdio.h>

int main() {
    char input[1000]; // Khai bao mang de luu chuoi nguoi dung nhap, kich thuoc toi da 1000 ky tu

    printf("Nhap vao mot chuoi bat ki: ");
    fgets(input, sizeof(input), stdin); 

    printf("Chuoi bạn vừa nhập: %s\n", input);

    return 0;
}