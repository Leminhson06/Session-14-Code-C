#include <stdio.h>

int main(){
    char str[1000]; // Chuoi de luu tru dau vao cua nguoi dung
    int count = 0; // Bien dem so ky tu la chu cai

    printf("Nhap mot chuoi bat ki: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++){
        if(isalpha(str[i])) {
            count++;
        }
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", count);

    return 0;
}