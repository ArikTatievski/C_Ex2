#ifndef EX3_STRINGFUNC_H
#define EX3_STRINGFUNC_H

/*
 * This function takes a character and turns it to his gematric value
*/
int convertToGeo(char c)
/*
 * This function searches in the text for all of the combinations with the same gematric value
*/
void gematria(int val, char text[]);
/*
 * This function searches of atbash sequences of the word in the text
*/
void AtbashSequences(char text[], char word[]);
/*
 * This function searches of anagram sequences of the word in the text
*/
void anagram(char text[], char word[]);



#endif //EX3_STRINGFUNC_H
