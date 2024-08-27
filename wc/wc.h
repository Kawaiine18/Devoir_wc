#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE_MAX 2000
FILE* ouverture(FILE* file,char* file_name,char* argv[]);
//void traitement(FILE* file,char* file_name,int argc,char* argv[]);
int nbr_ligne(FILE* file,char* argv[]);
int nbr_mot(FILE* file,char* argv[]);
int nbr_caractere(FILE* file,char* argv[]);
int max_line_lenght(FILE* file,char* argv[]);
void display_help(char* argv[]);
//int sans_option(int ligne,int mot,int caractere);