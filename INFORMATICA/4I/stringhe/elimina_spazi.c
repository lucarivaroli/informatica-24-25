#include <stdio.h>

int main() {
    char s[200], out[200];
    int j = 0;

    printf("Inserisci una frase: ");
    fgets(s, 200, stdin);

    // Copio solo i caratteri che NON sono spazi
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n') {
            out[j++] = s[i];
        }
    }

    out[j] = '\0'; // chiudo la stringa

    printf("Senza spazi: %s\n", out);

    return 0;
}
