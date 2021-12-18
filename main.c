#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stringFunc.c"

#define wordLen 30
#define textLen 1024

int main() {
    char try[6]="H e l";
    printf("%s",try);
    char word[wordLen];
    char text[textLen];
    int i=0;
    char c;
    while(c != ' ' && c != '\n' && c != '\t'){
        scanf("%c",&c);
        word[i] = c;
        i++;
    }
    word[i-1] = '\0';
    i=0;
    while(c != '~'){
        scanf("%c",&c);
        text[i] = c;
        i++;
    }
    text[i-1] = '\0';
    int val=0;
    i=0;
    c=word[0];
    while(c!='\0'){
        c=word[i];
        val=val+convertToGeo(c);
        i++;
    }
    printf("Gematria Sequences: ");
    gematria(val,text);
    printf("\n");
    printf("Atbash Sequences: ");
    AtbashSequences(text,word);
    printf("\n");
    printf("Anagram Sequences: ");
    anagram(text,word);
    return 0;
}
