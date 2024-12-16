#include <stdio.h>

int main(){
    char input[] = "Hello World";
    printf("Chuoi da khai bao: %s\n", input);
    printf("Cac ky tu trong chuoi: ");

    for (int i = 0; i < strlen(input); i++) {
        printf("%c", input[i]);
    }
    printf("\n");
    return 0;
}