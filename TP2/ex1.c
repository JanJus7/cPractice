#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

/***************** EXERCICE 1 ************************/

int nb_voyelles(char str1[]){
    int numberVoyelles = 0;
	for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'y' ||
            str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U' || str1[i] == 'Y') {
                numberVoyelles++;
        }
    }
	return numberVoyelles;   
}

int compare(char src1[], char src2[]){
    int i = 0;
    while (src1[i] != '\0' && src2[i] != '\0') {
        if (tolower(src1[i]) != tolower(src2[i])) {
            return tolower(src1[i]) - tolower(src2[i]);
        }
        i++;
    }

    return tolower(src1[i]) - tolower(src2[i]);
}


void verlan(char s[]){
	int len = strlen(s);
    
    for (int i = 0; i < len / 2; i++) {
        char tmp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = tmp; 
    }
}

void generate_pwd(char newpwd[]){
    printf("TODO : generate_pwd\n");
}

/********************** EXERCICE 2 *************************/

void repetition_code(char src[], char code[]){
	printf("TODO : repetition_code\n");
}

int correction_code(char code[], char decode[]){
	printf("TODO : correction_code\n");
	return EXIT_SUCCESS;
}


int nombre_erreurs(char src[], char decodee[]){
	printf("TODO : nombre_erreur\n");
	return EXIT_SUCCESS;
}


/********************** EXERCICE 3******************************/


void delete_spaces(char src[], int i){
	printf("TODO : delete_spaces\n");
}


int wordlist_format(char src[], int nc){
	printf("TODO : wordlist_format\n");
	return EXIT_SUCCESS;
}


/********************** EXERCICE BONUS******************************/


void repetition_code_n(char src[], char code[], int n){
	printf("TODO : repetition_code\n");
}


int majority(char code[], int i, int n){
	printf("TODO : majority\n");
	return EXIT_SUCCESS;
}

int correction_code_n(char code[], char decode[], int n){
	printf("TODO : correction_code_n\n");
	return EXIT_SUCCESS;
}




int main(){
    
    srand(time(NULL));
    char s1[]="Programmation C";
    char pwd1[16], pwd2[16], pwd3[16];
    char list1[]="Cette  phrase va  nous \t permettre de tester  la fonction wordlist_format";
    char msg[64]="Cet exemple montre comment l'exercice 2 fonctionne.";
    char code[400],decode[400];
    int nb_indecodable,wcount;
    char test[]="Un       exemple";
    
    printf("######## Tests Exercice 1#######\n\n");
    printf("Question 1\n\n");
    printf("Voyelles dans %s : %d\n","Testeur",nb_voyelles("Testeur"));
    printf("Voyelles dans %s : %d\n","Warning",nb_voyelles("Warning"));
    printf("Voyelles dans %s : %d\n\n","C++",nb_voyelles("C++"));
    
    printf("Question 2\n\n");
    printf("Comparaison de %s et %s : %d\n","BoNJour", "bonjoUR", compare("BoNJour","bonjoUR"));
    printf("Comparaison de %s et %s : %d\n","BoNJur", "bonjoUR", compare("BoNJur","bonjoUR"));
    printf("Comparaison de %s et %s : %d\n\n","B", "bo", compare("B","bo"));
    
    printf("Question 3\n\n");
    verlan(s1);
    printf("Verlan de Programmation C : %s\n\n",s1);
    
    printf("Question 4\n\n");
    generate_pwd(pwd1);
    generate_pwd(pwd2);
    generate_pwd(pwd3);
    printf("Mots de passe:\n%s\n%s\n%s\n\n",pwd1,pwd2,pwd3);
    
    printf("######## Tests Exercice 2#######\n\n");
    printf("\nQuestion 1\n\n");
    printf("Test code repetition\n\n");
    repetition_code(msg,code);
    printf("message original:\n%s\n\n",msg);
    printf("message avec code:\n%s\n\n",code);
    
    printf("\nQuestion 2\n\n");
    printf("Test correction code avec introduction de 7 erreurs \n\n");
    code[1]='7';
    code[2]='0';
    code[15]='Z';
    code[31]='%';
    code[32]='%';
    code[40]=']';
    code[44]='@';
    printf("code avec bruit:\n%s\n\n",code);
    nb_indecodable=correction_code(code,decode);
    printf("apres decodage (indecodable : %d) :\n%s\n\n",nb_indecodable,decode);
    printf("Nombre d'erreurs apres decodage: %d\n\n\n",nombre_erreurs(msg,decode));
    
    
    printf("\n######## Tests Exercice 3#######\n\n");
    printf("Chaine initiale: %s\n",test);
    delete_spaces(test,3);
    printf("Espaces supprimés à partir de l'indice 3: %s\n",test);
    printf("%s\n",list1);
    wcount=wordlist_format(list1,3);
    printf("Avec nc = 3 (%d mots):\n\n%s\n\n",wcount,list1);
    wordlist_format(list1,4);
    printf("Avec nc = 4 (%d mots):\n\n%s\n\n",wcount,list1);
    
        
    //BONUS
    printf("######## Tests Exercice BONUS avec n=5#######\n\n");
    repetition_code_n(msg,code,5);
    printf("codage :\n %s\n\n",code);
    code[1]='7';
    code[2]='0';
    code[15]='Z';
    code[31]='%';
    code[32]='%';
    code[40]=']';
    code[44]='@';
    nb_indecodable=correction_code_n(code,decode,5);
    printf("message reçu avec erreurs:\n %s\n\n",code);
    printf("apres decodage (indecodable : %d) :\n%s\n\n",nb_indecodable,decode);
    printf("Nombre d'erreurs apres decodage: %d\n",nombre_erreurs(msg,decode));
    
    return 0;
}


