#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 10000

void getMorseCode(char ch) {
    switch (ch) {
        case 'A': printf(".- "); break;
        case 'B': printf("-... "); break;
        case 'C': printf("-.-. "); break;
        case 'D': printf("-.. "); break;
        case 'E': printf(". "); break;
        case 'F': printf("..-. "); break;
        case 'G': printf("--. "); break;
        case 'H': printf(".... "); break;
        case 'I': printf(".. "); break;
        case 'J': printf(".--- "); break;
        case 'K': printf("-.- "); break;
        case 'L': printf(".-.. "); break;
        case 'M': printf("-- "); break;
        case 'N': printf("-. "); break;
        case 'O': printf("--- "); break;
        case 'P': printf(".--. "); break;
        case 'Q': printf("--.- "); break;
        case 'R': printf(".-. "); break;
        case 'S': printf("... "); break;
        case 'T': printf("- "); break;
        case 'U': printf("..- "); break;
        case 'V': printf("...- "); break;
        case 'W': printf(".-- "); break;
        case 'X': printf("-..- "); break;
        case 'Y': printf("-.-- "); break;
        case 'Z': printf("--.. "); break;
        case '0': printf("----- "); break;
        case '1': printf(".---- "); break;
        case '2': printf("..--- "); break;
        case '3': printf("...-- "); break;
        case '4': printf("....- "); break;
        case '5': printf("..... "); break;
        case '6': printf("-.... "); break;
        case '7': printf("--... "); break;
        case '8': printf("---.. "); break;
        case '9': printf("----. "); break;
        case '.': printf(".-.-.- "); break;
        case ',': printf("--..-- "); break;
        case '!': printf("-.-.-- "); break;
        case '?': printf("..--.. "); break;
        case ' ': printf("/ "); break;
        default: break; 
    }
}

int main() {
    char name[MAX];
    printf("Enter Word: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    name[strcspn(name, "\n")] = '\0'; 

    int len = strlen(name);
    printf("Morse Code: ");
    for (int i = 0; i < len; i++) {
        char ch = toupper((unsigned char)name[i]);
        getMorseCode(ch);
    }
    printf("\n"); 

    return 0;
}
