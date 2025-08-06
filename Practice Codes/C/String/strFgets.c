#include <stdio.h>

int main() {
    char Sentence[30];
    fgets(Sentence, sizeof(Sentence), stdin);
    puts(Sentence);
    
    return 0;
}