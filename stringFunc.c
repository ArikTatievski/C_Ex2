#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define wordLen 30
#define textLen 1024

void remove_spaces(char* s) {
    char* d = s;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ = *d++);
}

void Reverse (char word[],int sizeOfword){
    int i,j;
    char temp[sizeOfword];
    for (int k = 0; k < sizeOfword; k++) {
        temp[k]=word[k];
    }
    for(i=sizeOfword-1,j=0;i>=0;i--,j++){
        word[j]=temp[i];
    }
    word[sizeOfword]='\0';
}

char toAbtashLetter (char c){
    if(c == 'a' ){return 'z';}
    else if (c == 'A'){return 'Z';}
    else if(c=='b'){return 'y';}
    else if(c=='B'){return 'Y';}
    else if(c=='c'){return 'x';}
    else if(c=='C'){return 'X';}
    else if(c=='d'){return 'w';}
    else if(c=='D'){return 'W';}
    else if(c=='e'){return 'v';}
    else if(c=='E'){return 'V';}
    else if(c=='f'){return 'u';}
    else if(c=='F'){return 'U';}
    else if(c=='g'){return 't';}
    else if(c=='G'){return 'T';}
    else if(c=='h'){return 's';}
    else if(c=='H'){return 'S';}
    else if(c=='i'){return 'r';}
    else if(c=='I'){return 'R';}
    else if(c=='j'){return 'q';}
    else if(c=='J'){return 'Q';}
    else if(c=='k'){return 'p';}
    else if(c=='K'){return 'P';}
    else if(c=='l'){return 'o';}
    else if(c=='L'){return 'O';}
    else if(c=='m'){return 'n';}
    else if(c=='M'){return 'N';}
    else if(c=='n'){return 'm';}
    else if(c=='N'){return 'M';}
    else if(c=='o'){return 'l';}
    else if(c=='O'){return 'L';}
    else if(c=='p'){return 'k';}
    else if(c=='P'){return 'K';}
    else if(c=='q'){return 'j';}
    else if(c=='Q'){return 'J';}
    else if(c=='r'){return 'i';}
    else if(c=='R'){return 'I';}
    else if(c=='s'){return 'h';}
    else if(c=='S'){return 'H';}
    else if(c=='t'){return 'g';}
    else if(c=='T'){return 'G';}
    else if(c=='u'){return 'f';}
    else if(c=='U'){return 'F';}
    else if(c=='v'){return 'e';}
    else if(c=='V'){return 'E';}
    else if(c=='w'){return 'd';}
    else if(c=='W'){return 'D';}
    else if(c=='x'){return 'c';}
    else if(c=='X'){return 'C';}
    else if(c=='y'){return 'b';}
    else if(c=='Y'){return 'B';}
    else if(c=='z'){return 'a';}
    else if(c=='Z'){return 'A';}
}





void toAbtash (char word[],int sizeOfword){
    char temp;
    for (int i = 0; i < sizeOfword ; ++i) {
        temp=word[i];
        temp= toAbtashLetter(temp);
        word[i]=temp;
    }
}

void ascendingOrderString(char input[]) {
    int i, j;
    char temp;
    int stringLength = strlen(input);
    for (i = 0; i < stringLength - 1; i++) {
        for (j = i + 1; j < stringLength; j++) {
            if (input[i] > input[j]) {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
}

int convertToGeo(char c){
    if(c == 'a' || c == 'A'){return 1;}
    else if(c == 'b' || c == 'B'){return 2;}
    else if(c == 'c' || c == 'C'){return 3;}
    else if(c == 'd' || c == 'D'){return 4;}
    else if(c == 'e' || c == 'E'){return 5;}
    else if(c == 'f' || c == 'F'){return 6;}
    else if(c == 'g' || c == 'G'){return 7;}
    else if(c == 'h' || c == 'H'){return 8;}
    else if(c == 'i' || c == 'I'){return 9;}
    else if(c == 'j' || c == 'J'){return 10;}
    else if(c == 'k' || c == 'K'){return 11;}
    else if(c == 'l' || c == 'L'){return 12;}
    else if(c == 'm' || c == 'M'){return 13;}
    else if(c == 'n' || c == 'N'){return 14;}
    else if(c == 'o' || c == 'O'){return 15;}
    else if(c == 'p' || c == 'P'){return 16;}
    else if(c == 'q' || c == 'Q'){return 17;}
    else if(c == 'r' || c == 'R'){return 18;}
    else if(c == 's' || c == 'S'){return 19;}
    else if(c == 't' || c == 'T'){return 20;}
    else if(c == 'u' || c == 'U'){return 21;}
    else if(c == 'v' || c == 'V'){return 22;}
    else if(c == 'w' || c == 'W'){return 23;}
    else if(c == 'x' || c == 'X'){return 24;}
    else if(c == 'y' || c == 'Y'){return 25;}
    else if(c == 'z' || c == 'Z'){return 26;}
    else{return 0;}
}

void printSubstring(char string[], int pos, int len){
    char sub[1024];
    int c=0;
    while (c < len) {
        sub[c] = string[pos+c-1];
        c++;
    }
    sub[c] = '\0';

    printf("%s", sub);
}

void gematria(int val, char text[]){
    int firstPrint = 0;
    for(int i=0;i<textLen;i++){
        if(text[i] == '\0'){return;}
        if(convertToGeo(text[i]) == 0){continue;}
        int target= val - convertToGeo(text[i]);
        if(target == 0){
            if(firstPrint){printf("~");}
            printf("%c",text[i]);
            firstPrint = 1;
            continue;
        }
        int j=i+1;
        while (target>=0){
            if(target- convertToGeo(text[j])<0){break;}
            else if(target- convertToGeo(text[j]) == 0){
                if(firstPrint){printf("~");}
                printSubstring(text, i+1,j-i+1);
                firstPrint = 1;
                break;
            }
            else{
                target=target- convertToGeo(text[j]);
                j++;
            }
        }
    }
}
void AtbashSequences(char text[], char real_word[]){
    int firstprint=0;
    int sizeOfword= strlen(real_word);
    int sizeOftext= strlen(text);
    char word[sizeOfword];
    for (int i = 0; i <sizeOfword ; i++) {
        word[i]=real_word[i];
    }
    toAbtash(word,sizeOfword);
    char rev_word[sizeOfword];
    for (int i = 0; i <sizeOfword ; i++) {
        rev_word[i]=word[i];
    }
    Reverse(rev_word,sizeOfword);
    char ctxt;
    char temp;
    for (int i = 0; i <sizeOftext ; i++) {
        int k,j,n;
        ctxt=text[i];
        if (ctxt==word[0]){
            char string[sizeOftext];
            string[0]=word[0];
            for (j = 1, k =1,n=1; j <= sizeOftext ; j++,n++) {
                if(j==sizeOfword){
                    string[k]='\0';
                    if (firstprint){
                        printf("~");
                    }
                    printf("%s",string);
                    firstprint=1;
                    break;
                }
                temp= text[i+n];
                if (convertToGeo(temp)==0){
                    string[k]=temp;
                    k++;
                    j--;
                    continue;
                }
                else if (temp==word[j]){
                    string[k]=temp;
                    k++;
                }
                else{
                    break;
                }
            }
        }
        else if(ctxt==rev_word[0]){
            char string[sizeOftext];
            string[0]=rev_word[0];
            for (j = 1, k =1,n=1; j <= sizeOftext ; j++,n++) {
                if(j==sizeOfword){
                    string[k]='\0';
                    if (firstprint){
                        printf("~");
                    }
                    printf("%s",string);
                    firstprint=1;
                    break;
                }
                temp= text[i+n];
                if (convertToGeo(temp)==0){
                    string[k]=temp;
                    k++;
                    j--;
                    continue;
                }
                else if (temp==rev_word[j]){
                    string[k]=temp;
                    k++;
                }
                else{
                    break;
                }
            }
        }

    }
}

void anagram(char text[], char word[]){
    int wordlen = strlen(word);
    int texlen = strlen(text);
    char compare[strlen(word)];
    strcpy(compare,word);
    ascendingOrderString(compare);
    int firstPrint = 0;
    for(int i=0;i<texlen-wordlen+1;i++){
        if(text[i] == ' ' || text[i] == '\n' || text[i] == '\t'){
            continue;
        }
        char nomanie[texlen];
        int k = 0;
        int t = 0;
        for(int j=0;t<wordlen;j++){
            nomanie[k] = text[i+j];
            if(text[i+j] == "" || text[i+j] == ' ' || text[i+j] == '\n' || text[i+j] == '\t'){
                t--;
            }
            t++;
            k++;
        }
        nomanie[k] = '\0';
        char nomcheck[strlen(nomanie)];
        strcpy(nomcheck,nomanie);
        ascendingOrderString(nomcheck);
        remove_spaces(nomcheck);
        if(strcmp(nomcheck,compare) == 0){
            if(firstPrint){
                printf("~");
            }
            printf("%s",nomanie);
            firstPrint=1;
        }
    }
}
