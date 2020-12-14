#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct registro4
{
       char nombre[60];
       float importeAtencion;
};

void os(FILE *arch4, registro4 ObraSoc)  
{
	  int opc4=1;
      arch4=fopen("obrasoc.dat", "a+b");
     
	   while(opc4!=0)
	   {
	       printf("\nIngrese el nombre de la obra social: ");
	       _flushall();
	       gets(ObraSoc.nombre);
	       
		   printf("\nIngrese el importe de atencion: ");
	       scanf("%f", &ObraSoc.importeAtencion);
	       
	        fwrite(&ObraSoc,sizeof(registro4),1,arch4);
	       
	       
		   printf("\nDesea seguir ingresando? (SI=1,NO=0): ");
	       scanf("%d", &opc4);
	       
	      
	                  
	   }
	     
	   
	     fclose(arch4);   
}    
      
           
