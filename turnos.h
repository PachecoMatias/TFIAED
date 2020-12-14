#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
 

struct fecha1
{
       int d;
       int m;
       int a;
};    

struct registro5
{
       int matriculaMedico;
       fecha1 fec;
       char diaturno[20];
       char nombreP[30];
       int dniD;
       char obrasocialP[20];  
	   char usuariocarga2[30];
	   
};

 
void tur(FILE *arch5, registro5 turnos)
{  
	 arch5=fopen("Turnos.dat", "a+b");
     int opc5=1;
     
     while(opc5!=0)
     {
     	
	       printf("\nIngrese la matricula del medico: ");
	       scanf("%d", &turnos.matriculaMedico);
	     
		   printf("\nIngrese la fecha de nacimiento: ");
	       printf("\nDia: ");
	       scanf("%d", &turnos.fec.d);
	       printf("\nMes: ");
	       scanf("%d", &turnos.fec.m);
	       printf("\nA%co: ",-92);
	       scanf("%d", &turnos.fec.a);
	       
	       printf("\nIngrese el nombre del paciente: ");
	       _flushall();
	       gets(turnos.nombreP);
	       
		   printf("\nIngrese el dni del paciente: ");
	       scanf("%d", &turnos.dniD);
	       
	       printf("\nIngrese la obra social del paciente: ");
	       _flushall();
	       gets(turnos.obrasocialP);
	       
	       printf("\nIngrese el dia de atencion: ");
	       _flushall();
	       gets(turnos.diaturno);
	       
	       
	  	printf("\nNombre del recepcionista: ");
	  	_flushall();
	  	gets(turnos.usuariocarga2);
	    
	    
	    
	    
 
	    fwrite(&turnos,sizeof(registro5),1,arch5);
	        
	        
	       printf("\nDesea seguir ingresando? (SI=1,NO=0): ");
	       scanf("%d", &opc5);
	    	  
	                  
    }  
  fclose(arch5);
 
}


