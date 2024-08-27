#include "wc.h"
FILE* ouverture(FILE* file,char* file_name,char* argv[])
{
	FILE* f=NULL;
	f=fopen(file_name,"r");
	if(f==NULL)
	{
		printf("Erreur lors de l'ouverture du fichier\n");
		exit(1);
	}
	return (f);
}
int nbr_ligne(FILE* file,char* argv[])
{
	char chaine[TAILLE_MAX];
	int row=0;
	if(strcmp(argv[1],"-l")==0)
	{
		while(fgets(chaine,TAILLE_MAX,file)!=NULL)
		{
			row++;	
		}
		printf("le nombre de ligne est %d\n",row);
	}
	return (row);
}
int nbr_mot(FILE* file,char* argv[])
{
	char chaine[TAILLE_MAX];
	int words=0;
	if(strcmp(argv[1],"-w")==0)
	{
		do
		{
			fscanf(file,"%s\n",chaine);
			words++;
		}
		while(!feof(file));
		printf("le nombre de mot est %d\n",words);
	}
	return(words);
}
int nbr_caractere(FILE* file,char* argv[])
{
	char chaine[TAILLE_MAX];
	int charactere=0;
	int c;
	if(strcmp(argv[1],"-m")==0)
	{
		do
		{
			c=fgetc(file);
			charactere++;
		}
		while(c!=EOF);
		printf("le nombre de caractere est %d\n",(charactere-1));
	}
	return(charactere);
}
int max_line_lenght(FILE* file,char* argv[])
{
	char chaine[TAILLE_MAX];
	int longueur_ligne_1;
	int longueur_max;
	if(strcmp(argv[1],"-L")==0)
	{
		fgets(chaine,TAILLE_MAX,file);
		longueur_ligne_1=strlen(chaine);
		longueur_max=longueur_ligne_1;
		while(fgets(chaine,TAILLE_MAX,file))
		{
			if(strlen(chaine)>longueur_max)
			{
				longueur_max=strlen(chaine);
			}
		}	
	}
	return(longueur_max);
}
void display_help(char* argv[])
{
	FILE* fichier=NULL;
	char c[TAILLE_MAX];
	if(strcmp(argv[1],"--help")==0)
	{
		fichier=fopen("readme","r");				///on créer un fichier nommé 'readme' contenant l'aide d'utilisation de cette programme
		if(fichier!=NULL)
		{
			while(fgets(c,TAILLE_MAX,fichier)!=NULL)  ///on lit la ligne
			{
				printf("%s",c);					
			}
			fclose(fichier);
		}
	}
}


