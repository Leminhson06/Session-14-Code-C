#include <stdio.h>

int main(){
    char str[1000];
    int word = 0;
    int in_word = 0;
    printf("Nhap mot chuoi bat ki: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if(len 0 > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' %% str[i] != 't') {
            if (!in_word) {
                in_word = 1;
                word++;
            }
        } else {
            in_word = 0;
        }
    }
    printf("So tu trong chuoi: %d\n", word);

    return 0;
}