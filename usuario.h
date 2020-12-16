#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <iostream>
using namespace std;


struct registro1
{
       char us[10];
       char contrasenia[10];
       char ayn[60];
   
};
 
void usu(FILE *arch1, registro1 usuario )  
{
	 arch1=fopen("Usuarios.dat","a+b");
    	char aux[50];
	 int opc1=1;
     int longi, b=0,pase=0, i,longiUsu,contadorMayus=0,contDigi=0;
     int mayus=0,minus=0,num=0,paso2=0,paso3=0,paso4=0;
     
     	while(opc1!=0){
   	   printf("\n\nDATOS DEL USUARIO.\n\n");
   	   cout<<"\n\n*************************************************";
   	   cout<<"\n\nRequisitos para la creacion del usuario: ";
   	   cout<<"\n1.No repetir usuarios";
   	   cout<<"\n2.Comenzar con una letra minuscula";
   	   cout<<"\n3.Tener al menos 2 letras mayusculas";
   	   cout<<"\n4.Tener como maximo 3 digitos";
   	   cout<<"\n\n*************************************************";
   	   
       printf("\n\nIngrese el nombre de usuario: ");
       _flushall();
       gets(usuario.us);
       
       longiUsu = strlen(usuario.us);
       if(longiUsu >= 6 && longiUsu <=10){
       	mayus=0,minus=0,num=0,paso2=0,paso3=0,paso4=0;
       	for(i=0;i<longiUsu;i++){
       		if(usuario.us[0] == 'a' || usuario.us[0] == 'b' ||usuario.us[0] == 'c' ||usuario.us[0] == 'd' ||usuario.us[0] == 'e' ||usuario.us[0] == 'f' ||usuario.us[0] == 'g' ||usuario.us[0] == 'h' ||usuario.us[0] == 'i' ||usuario.us[0] == 'j' ||usuario.us[0] == 'k' ||usuario.us[0] == 'l' ||usuario.us[0] == 'm' ||usuario.us[0] == 'n' ||usuario.us[0] == 'o' ||usuario.us[0] == 'p' ||usuario.us[0] == 'q' ||usuario.us[0] == 'r' ||usuario.us[0] == 's' ||usuario.us[0] == 't' ||usuario.us[0] == 'u' ||usuario.us[0] == 'v' ||usuario.us[0] == 'w' ||usuario.us[0] == 'x' ||usuario.us[0] == 'y' ||usuario.us[0] == 'z'){
       			b=1;
			   }else{
			   	b=0;
			   	i=longiUsu;	
			   }
		   }
		   if(b==1){		   
		   for(i=0;i<longiUsu;i++){
		   	if(usuario.us[i] == 'A' || usuario.us[i] == 'B' ||usuario.us[i] == 'C' ||usuario.us[i] == 'D' ||usuario.us[i] == 'E' ||usuario.us[i] == 'F' ||usuario.us[i] == 'G' ||usuario.us[i] == 'H' ||usuario.us[i] == 'I' ||usuario.us[i] == 'J' ||usuario.us[i] == 'K' ||usuario.us[i] == 'L' ||usuario.us[i] == 'M' ||usuario.us[i] == 'N' ||usuario.us[i] == 'O' ||usuario.us[i] == 'P' ||usuario.us[i] == 'Q' ||usuario.us[i] == 'R' ||usuario.us[i] == 'S' ||usuario.us[i] == 'T' ||usuario.us[i] == 'U' ||usuario.us[i] == 'V' ||usuario.us[i] == 'W' ||usuario.us[i] == 'X' ||usuario.us[i] == 'Y' ||usuario.us[i] == 'Z'){
		   		contadorMayus++;
			   }
		   	if(contadorMayus == 2){
		   		pase=1;
		   		i=longiUsu;
			   }
		   }	   
		   for(i=0;i<longiUsu;i++){
		   	if(usuario.us[i] == '1' || usuario.us[i] == '2' ||usuario.us[i] == '3' ||usuario.us[i] == '4' ||usuario.us[i] == '5' ||usuario.us[i] == '6' ||usuario.us[i] == '7' ||usuario.us[i] == '8' ||usuario.us[i] == '9' ||usuario.us[i] == '0'){
		   		contDigi++;
			   }
		   }
		   	if(contDigi > 3){
		   		pase = 0;
			   }
		}

      if(pase==1){
      	cout<<"\n\n\nPresione cualquier tecla para continuar...........";
	   	getch();system("cls");
	   	
	   	b=0,pase=0,contadorMayus=0,contDigi=0;
     	
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
       gets(usuario.contrasenia);
   	   
	   longi=strlen(usuario.contrasenia);
 		if(longi >=6 && longi <=32){
 			for(i=0;i<longi;i++){
 				if(usuario.contrasenia[i] == 'A' || usuario.contrasenia[i]  == 'B' ||usuario.contrasenia[i]  == 'C' ||usuario.contrasenia[i]  == 'D' ||usuario.contrasenia[i]  == 'E' ||usuario.contrasenia[i]  == 'F' ||usuario.contrasenia[i]  == 'G' ||usuario.contrasenia[i]  == 'H' ||usuario.contrasenia[i]  == 'I' ||usuario.contrasenia[i]  == 'J' ||usuario.contrasenia[i]  == 'K' ||usuario.contrasenia[i]  == 'L' ||usuario.contrasenia[i]  == 'M' ||usuario.contrasenia[i]  == 'N' ||usuario.contrasenia[i]  == 'O' ||usuario.contrasenia[i]  == 'P' ||usuario.contrasenia[i]  == 'Q' ||usuario.contrasenia[i]  == 'R' ||usuario.contrasenia[i]  == 'S' ||usuario.contrasenia[i]  == 'T' ||usuario.contrasenia[i]  == 'U' ||usuario.contrasenia[i]  == 'V' ||usuario.contrasenia[i]  == 'W' ||usuario.contrasenia[i]  == 'X' ||usuario.contrasenia[i]  == 'Y' ||usuario.contrasenia[i]  == 'Z'){
 					mayus = 1;
				 }
 				if(usuario.contrasenia[i] == 'a' || usuario.contrasenia[i]  == 'b' ||usuario.contrasenia[i]  == 'c' ||usuario.contrasenia[i]  == 'd' ||usuario.contrasenia[i]  == 'e' ||usuario.contrasenia[i]  == 'f' ||usuario.contrasenia[i]  == 'g' ||usuario.contrasenia[i]  == 'h' ||usuario.contrasenia[i]  == 'i' ||usuario.contrasenia[i]  == 'j' ||usuario.contrasenia[i]  == 'k' ||usuario.contrasenia[i]  == 'l' ||usuario.contrasenia[i]  == 'm' ||usuario.contrasenia[i]  == 'n' ||usuario.contrasenia[i]  == 'o' ||usuario.contrasenia[i]  == 'p' ||usuario.contrasenia[i]  == 'q' ||usuario.contrasenia[i]  == 'r' ||usuario.contrasenia[i]  == 's' ||usuario.contrasenia[i]  == 't' ||usuario.contrasenia[i]  == 'u' ||usuario.contrasenia[i]  == 'v' ||usuario.contrasenia[i]  == 'w' ||usuario.contrasenia[i]  == 'x' ||usuario.contrasenia[i]  == 'y' ||usuario.contrasenia[i]  == 'z'){
 					minus = 1;
				 }
 				if(usuario.contrasenia[i] == '1' || usuario.contrasenia[i] == '2' ||usuario.contrasenia[i] == '3' ||usuario.contrasenia[i] == '4' ||usuario.contrasenia[i]== '5' ||usuario.contrasenia[i] == '6' ||usuario.contrasenia[i] == '7' ||usuario.contrasenia[i] == '8' ||usuario.contrasenia[i]== '9' ||usuario.contrasenia[i] == '0'){
 					num = 1;
				 }
			 }
 			if(mayus == 1 && minus == 1 && num == 1){
 				for(i=0;i<longi;i++){
 					if(usuario.contrasenia[i] != ' ' && usuario.contrasenia[i] != ';' && usuario.contrasenia[i] != '.' && usuario.contrasenia[i] != ','){
					 paso2=1;	 
					 }else{
					 	paso2=0;
					 	i=longi;
					 }
					 
				 }	
			 }
			 if(paso2 == 1){
			 	
			 	for(i=0;i<longi;i++){
			 		if(usuario.contrasenia[i] == '1' || usuario.contrasenia[i] == '2' ||usuario.contrasenia[i] == '3' ||usuario.contrasenia[i] == '4' ||usuario.contrasenia[i]== '5' ||usuario.contrasenia[i] == '6' ||usuario.contrasenia[i] == '7' ||usuario.contrasenia[i] == '8' ||usuario.contrasenia[i]== '9' ||usuario.contrasenia[i] == '0'){
						 if(usuario.contrasenia[i-1] == '1' || usuario.contrasenia[i-1] == '2' ||usuario.contrasenia[i-1] == '3' ||usuario.contrasenia[i-1] == '4' ||usuario.contrasenia[i-1]== '5' ||usuario.contrasenia[i-1] == '6' ||usuario.contrasenia[i-1] == '7' ||usuario.contrasenia[i-1] == '8' ||usuario.contrasenia[i-1]== '9' ||usuario.contrasenia[i-1] == '0'){
							 if(usuario.contrasenia[i-1-1] == '1' || usuario.contrasenia[i-1-1] == '2' ||usuario.contrasenia[i-1-1] == '3' ||usuario.contrasenia[i-1-1] == '4' ||usuario.contrasenia[i-1-1]== '5' ||usuario.contrasenia[i-1-1] == '6' ||usuario.contrasenia[i-1-1] == '7' ||usuario.contrasenia[i-1-1] == '8' ||usuario.contrasenia[i-1-1]== '9' ||usuario.contrasenia[i-1-1] == '0'){
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
				strcpy(aux,usuario.contrasenia);
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
}			  
      if(paso4 == 1){
	  
	   printf("\nIngrese el apellido y nombre: ");
       _flushall();
       gets(usuario.ayn);

       fwrite(&usuario,sizeof(registro1),1,arch1);
     
       printf("\nDesea seguir ingresando? (SI=1,NO=0): ");
       scanf("%d", &opc1);
       getch();system("cls");
   }else{
   	cout<<"\n\nNo cumplio las condiciones necesarias...";
   	getch();system("cls");
   }			
	   }else{
	   		cout<<"\n\nNo cumplio las condiciones...";
	   		getch();system("cls");
	   }

}
        fclose(arch1);
        
}    
      
      
