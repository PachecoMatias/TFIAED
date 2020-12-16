#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <iostream>
using namespace std;

 
 typedef char cadena [10];
 
struct registro2
{
       char ayn[60];
       char especialidad [60];
       cadena dia[6];
       int matricula;
       cadena os[20];
       char contrasenia[33]; 
       int cantidad;
       int cantOS;
    
};

med(FILE *arch2, registro2 veterinario)
{
	arch2=fopen("Veterinario.dat","a+b");
    int opc2=1;
    int longi=0;
  	int mayus=0,minus=0,num=0,paso2=0,paso3=0,paso4=0;
    char aux[50];
    int b,cant;
    int i=0;
    while (opc2!=0)
	{
    	printf("\nDATOS DEL VETERINARIO\n");
 		printf("\nApellido y nombre: ");
 	    _flushall();
 		gets(veterinario.ayn);

 		printf("\nEspecialidad: ");
 		_flushall();
 		gets(veterinario.especialidad);

 		printf("\nIngrese cantidad de dias de atencion: ");
 		scanf("%d",&veterinario.cantidad);
 		
 		for(int i=0;i<veterinario.cantidad;i++)
		{
				printf("\nIngrese el dia de atencion: ");
	 			_flushall();
				 gets(veterinario.dia[i]);
		}

 		printf("\nMatricula: ");
 		scanf("%d",&veterinario.matricula);
 		
 		printf("Ingrese la cantidad de obras sociales que recibe el veterinario: ");
 		scanf("%d", &veterinario.cantOS);
 		for (int i=0; i<veterinario.cantOS;i++)
 		{
 			printf("Ingrese las obras sociales: ");
 			_flushall();
 			gets(veterinario.os[i]);	
		 }
		 system("cls");
		cout<<"\n\n***********************************************************";
      	cout<<"\n\nRequisitos para la contrasenia: ";
      	cout<<"\n1.Debera contener al menos una letra mayuscula,minuscula y un numero";
      	cout<<"\n2.Solamente debe de ser caracteres alfanumericos";
      	cout<<"\n3.Debera tener entre 6 y 32 caracteres";
      	cout<<"\n4.No debe tener 3 caracteres numericos consecutivos";
      	cout<<"\n5.No debe tener 2 caracteres consecutivos de letras alfabeticamente";
      	cout<<"\n\n***********************************************************";
	   	cout<<"\n\nIngrese Contrasenia: ";
 	    _flushall();
 	    gets(veterinario.contrasenia);
 	  	
 	    longi=strlen(veterinario.contrasenia);
  		if(longi >=6 && longi <=32){
 			for(i=0;i<longi;i++){
 				if(veterinario.contrasenia[i] == 'A' || veterinario.contrasenia[i]  == 'B' ||veterinario.contrasenia[i]  == 'C' ||veterinario.contrasenia[i]  == 'D' ||veterinario.contrasenia[i]  == 'E' ||veterinario.contrasenia[i]  == 'F' ||veterinario.contrasenia[i]  == 'G' ||veterinario.contrasenia[i]  == 'H' ||veterinario.contrasenia[i] == 'I' ||veterinario.contrasenia[i] == 'J' ||veterinario.contrasenia[i] == 'K' ||veterinario.contrasenia[i]  == 'L' ||veterinario.contrasenia[i] == 'M' ||veterinario.contrasenia[i] == 'N' ||veterinario.contrasenia[i] == 'O' ||veterinario.contrasenia[i] == 'P' ||veterinario.contrasenia[i]  == 'Q' ||veterinario.contrasenia[i] == 'R' ||veterinario.contrasenia[i]  == 'S' ||veterinario.contrasenia[i] == 'T' ||veterinario.contrasenia[i]  == 'U' ||veterinario.contrasenia[i]  == 'V' ||veterinario.contrasenia[i]  == 'W' ||veterinario.contrasenia[i]  == 'X' ||veterinario.contrasenia[i]  == 'Y' ||veterinario.contrasenia[i]  == 'Z'){
 					mayus = 1;
				 }
 				if(veterinario.contrasenia[i] == 'a' || veterinario.contrasenia[i]  == 'b' ||veterinario.contrasenia[i]  == 'c' ||veterinario.contrasenia[i]  == 'd' ||veterinario.contrasenia[i]  == 'e' ||veterinario.contrasenia[i]  == 'f' ||veterinario.contrasenia[i]  == 'g' ||veterinario.contrasenia[i]  == 'h' ||veterinario.contrasenia[i]  == 'i' ||veterinario.contrasenia[i] == 'j' ||veterinario.contrasenia[i] == 'k' ||veterinario.contrasenia[i] == 'l' ||veterinario.contrasenia[i] == 'm' ||veterinario.contrasenia[i] == 'n' ||veterinario.contrasenia[i] == 'o' ||veterinario.contrasenia[i] == 'p' ||veterinario.contrasenia[i] == 'q' ||veterinario.contrasenia[i]  == 'r' ||veterinario.contrasenia[i] == 's' ||veterinario.contrasenia[i]  == 't' ||veterinario.contrasenia[i]  == 'u' ||veterinario.contrasenia[i] == 'v' ||veterinario.contrasenia[i]  == 'w' ||veterinario.contrasenia[i] == 'x' ||veterinario.contrasenia[i]  == 'y' ||veterinario.contrasenia[i]  == 'z'){
 					minus = 1;
				 }
 				if(veterinario.contrasenia[i] == '1' || veterinario.contrasenia[i] == '2' ||veterinario.contrasenia[i] == '3' ||veterinario.contrasenia[i] == '4' ||veterinario.contrasenia[i]== '5' ||veterinario.contrasenia[i] == '6' ||veterinario.contrasenia[i] == '7' ||veterinario.contrasenia[i] == '8' ||veterinario.contrasenia[i]== '9' ||veterinario.contrasenia[i] == '0'){
 					num = 1;
				 }
			 }
 			if(mayus == 1 && minus == 1 && num == 1){
 				for(i=0;i<longi;i++){
 					if(veterinario.contrasenia[i] != ' ' && veterinario.contrasenia[i] != ';' && veterinario.contrasenia[i] != '.' && veterinario.contrasenia[i] != ','){
					 paso2=1;	 
					 }else{
					 	paso2=0;
					 	i=longi;
					 }
					 
				 }	
			 }
			 if(paso2 == 1){
			 	
			 	for(i=0;i<longi;i++){
			 		if(veterinario.contrasenia[i] == '1' || veterinario.contrasenia[i] == '2' ||veterinario.contrasenia[i] == '3' ||veterinario.contrasenia[i] == '4' ||veterinario.contrasenia[i]== '5' ||veterinario.contrasenia[i] == '6' ||veterinario.contrasenia[i] == '7' ||veterinario.contrasenia[i] == '8' ||veterinario.contrasenia[i]== '9' ||veterinario.contrasenia[i] == '0'){
						 if(veterinario.contrasenia[i-1] == '1' || veterinario.contrasenia[i-1] == '2' ||veterinario.contrasenia[i-1] == '3' ||veterinario.contrasenia[i-1] == '4' ||veterinario.contrasenia[i-1]== '5' ||veterinario.contrasenia[i-1] == '6' ||veterinario.contrasenia[i-1] == '7' ||veterinario.contrasenia[i-1] == '8' ||veterinario.contrasenia[i-1]== '9' ||veterinario.contrasenia[i-1] == '0'){
							 if(veterinario.contrasenia[i-1-1] == '1' || veterinario.contrasenia[i-1-1] == '2' ||veterinario.contrasenia[i-1-1] == '3' ||veterinario.contrasenia[i-1-1] == '4' ||veterinario.contrasenia[i-1-1]== '5' ||veterinario.contrasenia[i-1-1] == '6' ||veterinario.contrasenia[i-1-1] == '7' ||veterinario.contrasenia[i-1-1] == '8' ||veterinario.contrasenia[i-1-1]== '9' ||veterinario.contrasenia[i-1-1] == '0'){
							 }else{
							 	paso3=1;
							 }
						 }else{
						 	paso3=1;
						 }	
					 }else{
					 	paso3=1;
					 }		
				 }
			 }
			 if(paso3 == 1){
				strcpy(aux,veterinario.contrasenia);
				for(i=0;i<longi;i++){
					aux[i] = toupper(aux[i]);
				}
				for(i=0;i<longi;i++){
					if(isalpha(aux[i])){
						if(aux[i]-1==aux[i-1]){
							paso4=0;
							i=longi;
						}else{
							paso4=1;
						}
					}
				}
			 }
			 	
	}	
		if(paso4==1){
			
		fwrite(&veterinario,sizeof(registro2),1,arch2);
	     printf("\n\nDesea registrar otro veterinario? (SI=1,NO=0): ");
	   	 scanf("%d", &opc2);
		getch();system("cls");
		}else{
			
			cout<<"\n\nLa contrasenia... no cumplio con los requisitos..";
			getch();system("cls");
		}

      }
      
        fclose(arch2);
}
     

