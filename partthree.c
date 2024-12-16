#include <stdio.h>
/*
    Viet chuong trinh cho nguoi dung nhap vao 1 chuoi bat ki ?
    ==> Kiem tra xem chuoi nguoi dung nhap vao co doi xung ko ?
    INPUT: heeh
    OUTPUT: doi xung
    INPUT: abcdcba
    OUTPUT: doi xung
    INPUT: hello
    OUTPUT: khong phai doi xung
*/
int main(){
    char text[100];
    int length, xuoiNguoc = 1;

    printf("Nhap vao mot chuoi bat ki: ");
    fgets(text, sizeof(text), stdin);

    length = strlen(text);
    if(text[length - 1] == '\n') {
        text[length - 1] = '\0';
        length--; 
    }

    for (int i =0; i < length / 2;i++){
        if(text[i] != text[length - i - 1]) {
            xuoiNguoc = 0;
            
        }
    }

    if (xuoiNguoc) {
        printf("doi xung \n");
    } else {
        printf("Khong phai doi xung \n");
    } 
    
    return 0;
}