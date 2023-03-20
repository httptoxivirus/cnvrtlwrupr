#include<stdio.h>
#include<string.h>
void cnvrt(char str[]) {
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] + 'A' - 'a';
        else if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] - 'A' + 'a';
    }
}

int main() {
    char str[50];
    printf("Enter the string : \n");
    gets(str);
    cnvrt(str);
    printf("%s",str);
    return 0;
}
