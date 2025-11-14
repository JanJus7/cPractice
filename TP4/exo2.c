#include <stdio.h>
#include <stdlib.h>
#include <string.h> // pour strlen, stncmp
#include <ctype.h> // pour toupper



/*Question 1*/
char* find_word(char* text, char* word){
    /*Compléter ci-dessous*/
    int len_word = strlen(word);
    char* p = text;
    while (*p != '\0') {
        if (strncmp(p, word, len_word) == 0) {
            return p;
        }
        p++;
    }
    return NULL;
}


/*Question 2*/
void capitalize_word(char* text, char* word){
/*Compléter ci-dessous*/
    char* pword = find_word(text, word);
    if (word != NULL) {
        int len = strlen(word);
        int i = 0;
        while (i < len) {
            *pword = toupper(*pword);
            i++;
            pword++;
        }
    }
    
}


/*Question 3*/
int word_occurrences(char* text, char* word){
/*Compléter ci-dessous*/
    int counter = 0;
    // bonus - to finish...
    return counter;
    
}



int main(){
    char texte[] = "Ce texte servira d'exemple pour l'exercice sur l'arithmetique des pointeurs et les chaines de caracteres."
    " Cet exemple permet aussi de rappeler qu'un pointeur sur un caractere d'une chaine permet immediatement de definir" 
    " une sous chaine qui commence par le caractere dont le pointeur est l'adresse.";
 
    
    printf("find_word(texte,\"%s\"):\n","aussi");
    printf("%s\n\n",find_word(texte,"aussi"));
    
    printf("find_word(texte,\"%s\"):\n","dont");
    printf("%s\n\n",find_word(texte,"dont"));
    
    printf("word_occurrences(texte,\"%s\"): %d\n","chaine", word_occurrences(texte,"exemple"));
    printf("word_occurrences(texte,\"%s\"): %d\n","pointeur", word_occurrences(texte,"pointeur"));
    
    printf("\ncapitalize_word(texte,\"%s\"):\n","exemple");
    capitalize_word(texte,"exemple");
    printf("%s\n",texte);

}
