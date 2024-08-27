#include "wc.h"
int main(int argc,char* argv[])
{
	FILE* file=NULL;
	char* file_name=NULL;
	int ligne;
	int mot;
	int caractere;
	int line_max;

	if(argc>=3)
	{
		file_name=argv[2];
		file=ouverture(file,file_name,argv);
		ligne=nbr_ligne(file,argv);
		mot=nbr_mot(file,argv);
		caractere=nbr_caractere(file,argv);
		line_max=max_line_lenght(file,argv);
	}
	else if(argc==2)
	{
		display_help(argv);
		//file_name=argv[1];
		//sans_option(ligne,mot,caractere);
	}
	return 0;
}
