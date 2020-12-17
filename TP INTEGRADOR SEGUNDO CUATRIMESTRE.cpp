#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <usuario.h>
#include <veterinario.h>
#include <paciente.h>
#include <obrasocial.h>
#include <turnos.h>
#include <iostream>
using namespace std;

main()
{
      registro1 usuario;
      registro2 veterinario;
      registro3 paciente;
      registro4 ObraSoc;
      registro5 turnos;
      
	  FILE *arch1,*arch2,*arch3, *arch4, *arch5;
	  
	  int opcion,b1,b2,b3;
	  
	  int opc,C4,matriculaVet=0,band=0,band2=0;
	  float  totalsueldo=0.0;       
	  
	  char usua[100];
	  char contra[100];
 	  int opc6,C1,C2,C10;
	
      int opc7;
      char usua1[20];
	  char contra1[20];
	  char hclinica[381];
      int C5,C6,C7;		
	  
	  
	  int CONTADOR;
	  int k;
	  int vector[40];
	  int m=0;
	  int aux=0;
	  char VETERINARIOMAY[30];
	  
	  FILE *auxiliar;
	  int BANDERA=0;
	  int documento;
	  
	  do
	  {
	  		printf("\n\n\tSISTEMA DE GESTION\n\n");
	  		cout<<"\n\t-----------------------------------";
		  	printf("\n\t1)MODULO ADMINISTRACION");
			printf("\n\t2)MODULO RECEPCION");
			printf("\n\t3)MODULO CONSULTORIO");
			printf("\n\t4)SALIR");
	  		printf("\n\n\tIngrese una opcion: ");scanf("%d",&opcion);
	  		switch(opcion)
	  		{
	  			case 1:
	  					system("cls");
	  					do{
	  							printf("\n\n\tMODULO ADMINISTRACION\n\n");
	  							cout<<"\n\t-----------------------------------";
								printf("\n\n\t1)Registrar veterinario");
							    printf("\n\t2)Registrar usuario recepcion");
							    printf("\n\t3)Registrar obra sociales y montos");
							    printf("\n\t4)Liquidacion de veterinario");
							    printf("\n\t5)Empleados con mayor registros");
							    printf("\n\t6)Cerrar la aplicacion");
								printf("\n\n\tIngrese una opcion: ");scanf("%d",&opc);     
		
								switch(opc)
							    {
							    	case 1:
							    			system("cls");
											system("pause");
											med(arch2,veterinario);
											getch();system("cls");
											break;
									case 2:
											system("cls");
											usu(arch1,usuario);
											getch();system("cls");
											break;
									case 3:  
											system("cls");         
									        os(arch4,ObraSoc);
									        getch();system("cls");
							          		break;
							        case 4:   	
							        		system("cls"); 
							          		 printf("\n\nIngrese la matricula del veterinario del cual desea saber su liquidacion: ");
									   	 	 scanf("%d",&matriculaVet);
											 arch5=fopen("Turnos.dat","r+b");
											 fread(&turnos,sizeof(registro5),1,arch5);
											if(arch5 != NULL){
												
					 						 totalsueldo=0.0;
					 						 
											 while(!feof(arch5))
											 {
											 	if(matriculaVet==turnos.matriculaMedico)
												{
													arch4=fopen("obrasoc.dat", "r+b");
											    	fread(&ObraSoc,sizeof(registro4),1,arch4);
									
									 				while(!feof(arch4))
													{
														C4=strcmp(turnos.obrasocialP,ObraSoc.nombre);
														if(C4==0)
														{
															totalsueldo=totalsueldo+ObraSoc.importeAtencion;
													   	}
									  					fread(&ObraSoc,sizeof(registro4),1,arch4);
							           				}
													fclose(arch4);
												}
												fread(&turnos,sizeof(registro5),1,arch5);
											 }
								 			 fclose(arch5);
											 
											 printf("\nLa liquidacion del veterinario es: %.2f", totalsueldo);
										}else{
											cout<<"\n\nAun no cargo turnos...";
										}
											 getch();system("cls");
										 	 break; 
							        case 5:
							        		system("cls");
							        		arch2=fopen("Veterinario.dat","r+b");
							        		arch5=fopen("Turnos.dat","r+b");
											fread(&veterinario,sizeof(registro2),1,arch2);
							        		if(arch2!=NULL && arch5!=NULL){
											
							        		while(!feof(arch2)&&b3!=1)
							        		{
												fread(&turnos,sizeof(registro5),1,arch5);
								        		CONTADOR=0;											
								      			while(!feof(arch5))
							        			{
							        				if(veterinario.matricula==turnos.matriculaMedico)
							        				{
							        					CONTADOR++;
							        					strcpy(VETERINARIOMAY,veterinario.ayn);
													}	
							        			
							        				fread(&turnos,sizeof(registro5),1,arch5);
												}

												vector[k]=CONTADOR;
												k++;
								        		fread(&veterinario,sizeof(registro2),1,arch2);
							        		
							        		}
							        		m=k;
							        		for(int k=0;k<m-1;k++)
								        	{
								        		if(vector[k]<vector[k+1])
								        		{
								        			aux=vector[k];
								        			vector[k]=vector[k+1];
								        			vector[k+1]=aux;
												}
											}
											
											fclose(arch2);
											fclose(arch5);											

											printf("\nEl veterinario que tuvo mas pacientes fue %s y fueron %d",VETERINARIOMAY,vector[0]);
										
										
							        	}else{
							        		cout<<"\n\nAun debe cargar datos..";
							        		getch();system("cls");
										}
							        		getch();system("cls");	
											 break; 
											          		
							    	case 6:
							    			system("cls");
							    			printf("\n\tSe cerro la aplicacion con exito.\n\n");
							    			getch();system("cls");
										 	break;  
											          
								}
											        
						  }while(opc!=6);   
						   
						  system("PAUSE");
	  					  system("cls");     
						  system("PAUSE");
						  break;			
				case 2:
						
	  					system("cls");
						do{
								printf("\n\nMODULO RECEPCION: \n\n");
								cout<<"\n\t-----------------------------------";
						        printf("\n\n\t1)Iniciar sesion: ");
						        printf("\n\t2)Registrar mascotas");
						        printf("\n\t3)Registrar Turnos");
						        printf("\n\t4)Visualizacion de turnos registrados.");
						        printf("\n\t5)Cerrar la aplicacion");
						        printf("\n\n\tIngrese una opcion: ");
						        scanf("%d",&opc6);
	          					switch(opc6)
	          					{
	          						case 1:
	          							system("cls");
	          								printf ("\n\nIngrese el nombre de usuario: ");
		          							_flushall();
		          		 					gets(usua);
							          		printf ("\nIngrese la contraseña: ");
							          		_flushall();
							          		gets(contra);
							          		 
											arch1=fopen("Usuarios.dat","r+b");
					     		          	fread(&usuario,sizeof(registro1),1,arch1);
							          		if(arch1 != NULL){
											  
							          	
											while(!feof(arch1))
							          		{
							          			C1=strcmp(usua,usuario.us);
							          			C2=strcmp(contra,usuario.contrasenia);
												  
												if ( C1==0 && C2==0 )
												{
													printf("\n\tSe ha iniciado la sesion\n\n");
													band=1; 
							  						fseek(arch1,sizeof(registro1),SEEK_END);
												}
												fread(&usuario,sizeof(registro1),1,arch1);
		          			
						  					}
											if ( C1!=0 && C2!=0 )
											{
												printf("\n\tError en el inicio de sesion.\n\nPresion una tecla y luego la opcion 1 e intentelo de nuevo.\n\n");	
						  					}
						  				}else{
						  					cout<<"\n\nAun no se registraron usuarios..";
										  }
											fclose(arch1);
		          	  						system("pause");
		          							system("cls");
									    	break;
		          
		          					case 2:
		          						
		          						system("cls");
		          						if(band==1){
										  
									  		pac(arch3,paciente);
											  	
									  		getch();system("cls");
									  	}else{
									  		cout<<"\n\nDebe iniciar Seccion...";
									  		getch();system("cls");
										  }
											break;
		          
		         					case 3:
		         						system("cls");
		         						if(band==1){
									  		tur(arch5,turnos);
									  		getch();system("cls");
									  	}else{
									  		cout<<"\n\nDebe iniciar seccion...";
									  		getch();system("cls");
										  }
											break;
		          
			         			    case 4:
			         			    	system("cls");
			         			    	if(band==1){
										 
			         			    		arch5=fopen("Turnos.dat","r+b");
			         			    		arch2=fopen("Veterinario.dat","r+b");

										if(arch5 == NULL){
    										cout<<"\n\nAun no cargo turnos..";
									      }else{
									      	
						      				fread(&veterinario,sizeof(registro2),1,arch2);
						      				fread(&turnos, sizeof(registro5),1,arch5);
											while(!feof(arch5))
											{
											while(!feof(arch2)){
																							
										    if(veterinario.matricula==turnos.matriculaMedico){
											
		                    				printf("\n\nLISTADO DE ATENCIONES POR OBRA SOCIAL Y VETERINARIO.\n\n");
		                    				
											printf("\nAPELLIDO Y NOMBRE DEL VETERINARIO: %s",veterinario.ayn);
											_flushall();
											printf("\nAPELLIDO Y NOMBRE DEL PACIENTE: %s",turnos.nombreP);
											
											printf("\nDNI DEL DUEÑO: %d",turnos.dniD);
											
											printf("\nOBRA SOCIAL DEL PACIENTE: %s",turnos.obrasocialP);
											
											printf("\n\nUSUARIO: %s",turnos.usuariocarga2);
													
										}

											fread(&veterinario,sizeof(registro2),1,arch2);
										}
											fread(&turnos, sizeof(registro5),1,arch5);
									      	}									      	
										  }
										    fclose(arch2);
											fclose(arch5);
											getch();system("cls");	
										}else{
											cout<<"\n\nDebe iniciar seccion...";
											getch();system("cls");
										}
											break; 	  
							  		case 5: 
							  		system("cls");
							  				printf("\n\tSe cerro la aplicacion con exito.\n\n");
										 	break; 
							     }     
		 				  }while(opc6!=5);    
		 		 		  
		 		 		  system("PAUSE");
						  system("cls");     
						  system("PAUSE");
						  break;	
			 	case 3:
	  					system("cls");
						do{
								printf("\n\n\tMODULO CONSULTORIO\n");
								cout<<"\n\t-----------------------------------";
						        printf("\n\n\t1)Iniciar sesion: ");
						        printf("\n\t2)Visualizar lista de espera de turnos");
						        printf("\n\t3)Registrar evolucion de pacientes");
						        printf("\n\t4)Visualizar lista de espera de turnos actualizada.");
						        printf("\n\t5)Cerrar la aplicacion");
						        printf("\n\n\tIngrese una opcion: ");
						        scanf("%d",&opc7);
						        switch(opc7)
						        {
						        	case 1:
											printf ("\n\nIngrese el apellido y nombre del veterinario: ");
											_flushall();
											gets(usua1);
		          		 					printf ("\nIngrese la contraseña: ");
		          							_flushall();
											gets(contra1);
		          		 
											arch2=fopen("Veterinario.dat","r+b");
					     		          	fread(&veterinario,sizeof(registro2),1,arch2);
							          		if(arch2 != NULL){
											  
											while(!feof(arch2))
							          		{
							          			C5=strcmp(usua1,veterinario.ayn);
							          			C6=strcmp(contra1,veterinario.contrasenia);
												if ( C5==0 && C6==0 )
												{
													band2=1;
												  	printf("\n\tSe ha iniciado la sesion\n\n"); 
												  	fseek(arch2,sizeof(registro2),SEEK_END);
												}
												fread(&veterinario,sizeof(registro2),1,arch2);
							          		}
											if ( C5!=0 && C6!=0 )
						  					{
						  						printf("\n\tError en el inicio de sesion.\n\nPresion una tecla y luego la opcion 1 e intentelo de nuevo.\n\n");	
						  					}
						  				}else{
						  					cout<<"\n\nNo cargo aun datos...";
										  }
						 					fclose(arch2);
		          							system("pause");
		          							system("cls");
							           	    break;
								    
									case 2:
											if(band2==1){
											
											arch2=fopen("Veterinario.dat","r+b");
		       							    fread(&veterinario,sizeof(registro2),1,arch2);
							                printf("LISTA DE ESPERA DE TURNOS\n");
											while(!feof(arch2)&&b2!=1)
                  							{
											  	C7=strcmp(usua1,veterinario.ayn);
							                  	if(C7==0)
									            {
									            	arch5=fopen("Turnos.dat", "r+b"); 
									            	fread(&turnos,sizeof(registro5),1,arch5);
									            	if(arch5 != NULL){
														
									            	while( !feof(arch5))	
													{
														if(veterinario.matricula==turnos.matriculaMedico)
									                  	{
									                  		printf("\nNOMBRE: %s", turnos.nombreP);
									                  	}
													    fread(&turnos,sizeof(registro5),1,arch5); 
													}	 
													fclose(arch5);
												}else{
													cout<<"\n\nNo cargo turnos todavia..";
												}
												}else{
													b2=1;
													cout<<"\n\nDebe iniciar seccion...";
													getch();system("cls");
												}
												fread(&veterinario,sizeof(registro2),1,arch2);
              			   					 }
											fclose(arch2);
										}else{
											cout<<"\n\nDebe iniciar seccion...";
											getch();system("cls");
										}
										
											break;
           
          							case 3:
          								if(band2==1){
										  
									  		arch2=fopen("Veterinario.dat","r+b");
                   							fread(&veterinario,sizeof(registro2),1,arch2);
                   							
                   							while(!feof(arch2))
											{
												C7=strcmp(usua1,veterinario.ayn);
     		      								if(C7==0)
										        {
										        	arch5=fopen("Turnos.dat", "r+b"); 
									            	fread(&turnos,sizeof(registro5),1,arch5);
									            	if(arch5!=NULL){
									            	while(!feof(arch5) )	
													{
														if(turnos.matriculaMedico==veterinario.matricula)
									                	{
									                		printf("\nVETERINARIO: %s ", veterinario.ayn);
															printf("\nDIA DE ATENCION: %s",turnos.diaturno);
														   	printf("\nIngrese la historia clinica del paciente %s : ",turnos.nombreP );
															scanf("%s",&hclinica);
									                   	}
												      	fread(&turnos,sizeof(registro5),1,arch5); 
													}	
													fclose(arch5);
												}else{
							     		        	cout<<"\n\nNo cargo turnos...";
												 }
							     		        fread(&veterinario,sizeof(registro2),1,arch2);
							     		    }
							            }
											fclose(arch2);
										}else{
											cout<<"\n\nDebe Iniciar Seccion...";
											getch();system("cls");
										}
											break;
									
									case 4: 
											if(band2==1){
												
											
											auxiliar=fopen("Auxiliar.dat","wb");
          									arch5=fopen("Turnos.dat", "r+b"); 
									        if(arch5!=NULL){
											
											printf("\nIngrese el dni del dueño de la mascota que fue atendida: ");
											scanf("%d",&documento);
											
											fread(&turnos,sizeof(registro5),1,arch5);
									      	BANDERA=0;
											while(!feof(arch5))				
											{
												if(documento!=turnos.dniD)
													fwrite(&turnos,sizeof(registro5),1,auxiliar);
												else
												    BANDERA=1;
												    fread(&turnos,sizeof(registro5),1,arch5);	      	
											}	
													
											if(BANDERA==1)
											{
												printf("\nEl paciente fue dado de baja del sistema.");
												getch();system("cls");
											}
													
											fclose(arch5);
											fclose(auxiliar);
											remove("Turnos.dat");
											rename("Auxiliar.dat","Turnos.dat");
										}else{
											cout<<"\n\nNo registro turnos...";
										}
										getch();system("cls");
									}else{
										cout<<"\n\nDebe Iniciar seccion...";
										getch();system("cls");
									}
											break;	
																						
									case 5:
											printf("\n\tSe cerro la aplicacion con exito.\n\n");
          									break; 
           						}
	 					  }while(opc7!=5);   
						  
						  system("PAUSE");
						  system("cls");     
						  system("PAUSE");
						  break;	 
				case 4:
					
	  					system("cls");
						printf("\n\tSe cerro la aplicacion con exito.\n\n");
						break; 										
					
					
		      }
	
	
					
	  }while(opcion!=4);
	  
	  system("PAUSE");

}	

 





