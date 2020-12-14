#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct fecha
{
       int d;
       int m;
       int a;
};      


struct registro3
{
       char ayn [60];
       char domicilio[60];
       int dniD;
       char localidad[60];
       fecha nacimiento;
       float altura;
       float peso;
       char obrasocial[10]; 
       int afiliado[10];
       char usuariocarga[30];
};


void pac(FILE *arch3, registro3 paciente)  
{
     arch3=fopen("pacientes.dat", "a+b"); 
     int opc3=1;
     
	 while(opc3!=0)
	 {
	 	printf("\nDATOS DEL PACIENTE\n");
	    printf("\nApellido y nombre: ");
	    _flushall();
	    gets(paciente.ayn);
	       
		printf("\nDomicilio: ");
	    _flushall();
	    gets(paciente.domicilio);
	       
		printf("\nDNI: ");
	    scanf("%d", &duenio.dni);
	       
		printf("\nLocalidad: ");
	    _flushall();
	    gets(paciente.localidad);
	       
		printf("\nFecha de nacimiento: ");
	    printf("\nDia: ");
	    scanf("%d", &paciente.nacimiento.d);
	    printf("\nMes: ");
	    scanf("%d", &paciente.nacimiento.m);
	    printf("\nA%co: ",-92);
	    scanf("%d", &paciente.nacimiento.a);
	    
		printf("\nAltura: ");
	    scanf("%f", &paciente.altura);
	     
		printf("\nPeso: ");
	    scanf("%f", &paciente.peso);
	     
		printf("\nObra social: ");
	    _flushall();
	    gets(paciente.obrasocial);
	    
		printf("\nNumero de afiliado: ");
	    scanf("%d",&paciente.afiliado);
	       
	  	printf("\nNombre del recepcionista: ");
	  	_flushall();
	  	gets(paciente.usuariocarga);
	       
	       	fwrite(&paciente,sizeof(registro3),1,arch3);
	       
	    printf("Desea seguir ingresando? (SI=1,NO=0): ");
	    scanf("%d", &opc3);
	       
	
	                  
	 }  
      
        fclose(arch3);
}    
      
      
