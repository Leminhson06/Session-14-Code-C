#include <stdio.h>

int main(){
    // Khai bao chuoi va gan gia tri ban dau
    char input[] = "Hello World";
    printf("Chuoi da khai bao: %s\n", input);
    char fullCharacters;
    printf("Nhap vao mot ki tu bat ky: ");
    scanf("%c", &fullCharacters);
    int count = 0;
    for (int i = 0; i < strlen(input); i++) {
        if(input[i] == fullCharacters) {
            count++;
        }
    }
    printf("Ky tu %c xuat hien %d lan trong chuoi.\n", fullCharacters, count);
    
    return 0;
}