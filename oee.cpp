#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){	
		setlocale(LC_ALL,"portuguese");

int rtd,opcao, qturnos, tturnos, pcorretiva, hproducao, ptotal, pdefeito;
float im,imp,a,b,c,d,e,f,g,h,j,i,l,m;
system("color 1F");
//

printf("Loading… [][][][][][][][][][] 0%  \n");
for (i=1 ; i<1000 ; i++);{
system("cls");}

printf("Loading… %%[][][][][][][][][] 10% \n");
for (i=1 ; i<1000 ; i++);{
system("cls");}

printf("Loading… %%%%[][][][][][][][] 20% \n");
for (i=1 ; i<1000 ; i++);{
system("cls");}

printf("Loading… %%%%%%[][][][][][][] 30% \n");
for (i=1 ; i<1000 ; i++);{
system("cls");}

printf("Loading… %%%%%%%%[][][][][][] 40% \n");
for (i=1 ; i<1000 ; i++);{
system("cls");}

printf("Loading… %%%%%%%%%%[][][][][] 50% \n");
for (i=1 ; i<1000 ; i++);{
system("cls");}

printf("Loading… %%%%%%%%%%%%[][][][] 60% \n");
for (i=1 ; i<1000 ; i++);{
system("cls");}

printf("Loading… %%%%%%%%%%%%%%[][][] 70% \n");
for (i=1 ; i<1000 ; i++);{
system("cls");}

printf("Loading… %%%%%%%%%%%%%%%%[][] 80% \n");
for (i=1 ; i<1000 ; i++);{
system("cls");}

printf("Loading… %%%%%%%%%%%%%%%%%%[] 90% \n");
for (i=1 ; i<1000 ; i++);{
system("cls");}

printf("Loading… %%%%%%%%%%%%%%%%%%%% 100%\n");
for (i=1 ; i<1000 ; i++);{
system("cls");}
                                                                        
                                                                             
                                                                           
                                                                           
                                                                           
printf("                                                         ivjNk             \n");       
printf("                                                    oFIXSkVFNi             \n");       
printf("                                                    ijIJJLjUk              \n");     
printf("                                                      uUujYki              \n");  
printf("                                                    rFPYvSXN               \n");
printf("                                                  iSEqi   Vr               \n");
printf("                                    i            uZqL                      \n");
printf("                                   JFIi        vPEu                        \n");
printf("                                 rVuvjSJ     ikNFi                         \n");
printf("                     vYi       iuFL   vkFv  jNFi                           \n");
printf("                   iLvvYLi    YoUi     iukIVPL                             \n");
printf("                 ivYr  iLur ioUr         iSoi  rGENENENOq                  \n");
printf("                rLvi     ruJUv                 BBMBBBMBBBi                 \n");
printf("              iLvi         Li                  GOGEZEZNOBi                 \n");
printf("            irvi               YYvLLLvjL       NONNPNPNZB                  \n");
printf("           rvr                kBBBBBBBBBu      ZGEqqPNPGM                  \n");
printf("         rvri                 uMONZEZNOBL      NMNNqNqEGB                  \n");
printf("         ii   rYvvvvvLL       LMENqNNEZBv      EGNXPkPXZM                  \n");
printf("             iBBBBBMBBBB      YMZqNqNPNOv      FSuuJuYjUN                  \n");
printf("             iMMNZEGEGMZ      LMqkIVuUUqi      qqkVFFkFqO                  \n");
printf("             iBZNqNqNNMN      LEkIVISFPGv      PZkkSkSXNM                  \n");
printf("             iMZXqPNXNEF      vOPkFXFXPOv      NEqkXkXkNO                  \n");
printf("             iMNqkXFFIPo      YGNkXkPkNOv      qGPPXPXPNM                  \n");
printf("             iONSkFkFPEq      LMNPkPkqNMv      NGNXqXPPZM                  \n");
printf("             iMNPkPkXPGX      JMEqqXqPGMv      NONNPNqNZB                  \n");
printf("             iBONZNENGMZ      jBGZEZNZGBL      GMGEZEZEMBi                 \n");
printf("             iBBBBBBBBBB      SBBMBBBBBBV      BBBBBBBBBBi                 \n");
printf("              rLrvrvrvv        vvvrvrvvv        vvrvrvrLr                  \n");
printf("                                                                           \n");
printf("                                                                           \n");
printf("                                                                           \n");
printf("                                                                           \n");
printf("                                                                           \n");
printf("                       YBBBBBBr   BBBBBBi uBBBBBB                          \n");
printf("                      BMB   iBBj  BB      BB                               \n");
printf("                     iBB     iBB  BBrvLi  BBrvLi                           \n");
printf("                     rBB      BB  BBGGBS  BBGGBS                           \n");
printf("                      BB     GBM  BB      BB                               \n");
printf("                      LBBBNZBBB   BBGNOMi BBGNOMi                          \n");
                        
printf("\n OEE - Eficiência Global dos Equipamentos (Overall Equipment Effectiveness)\n\n");                                                                  
                       
getchar();
system("cls"); 

//
do{

	printf("\n OEE - Eficiência Global dos Equipamentos (Overall Equipment Effectiveness)\n\n");
	printf(" Digite a opção desejada\n\n");
	printf("  1: Disponibilidade\n  2: Desempenho\n  3: Qualidade\n  4: OEE\n\n");
	printf("\n  ");
	scanf("%d",&opcao);
	
system("cls");

switch(opcao){
case 1:
	
printf("\n Disponibilidade diária\n\n");	
		printf(" Digite a quantidade de turnos\n");
	printf(" ");
			scanf("%d",&qturnos);
	system("cls");		
			
printf("\n Disponibilidade diária\n\n");			
		printf("\n Digite o tempo disponivel para troca de turno em minutos\n");
	printf(" ");		
			scanf("%d",&tturnos);
	system("cls");	
		
printf("\n Disponibilidade diária\n\n");
		printf("\n Digite o tempo da parada corretiva em horas\n");
	printf(" ");
			scanf("%d",&pcorretiva);
			
system("cls");

				a=(1440-(tturnos*qturnos));
				b=a-(pcorretiva*60);
				c=b/a;
				d=c*100;
		printf("\n\a O resultado é %.2f%%.\n\n",d); //certo
		
		break;
		
case 2:
	
printf("\n Desempenho diária\n\n");
		printf("\n Digite a quantidade de turnos\n");
	printf(" ");
			scanf("%d",&qturnos);
	system("cls");
			
printf("\n Desempenho diária\n\n");
		printf("\n Digite o tempo disponivel para troca de turno em minutos\n");
	printf(" ");
			scanf("%d",&tturnos);
	system("cls");
			
printf("\n Desempenho diária\n\n");
		printf("\n Digite o tempo da parada corretiva em horas\n");
	printf(" ");
			scanf("%d",&pcorretiva);
	system("cls");
			
printf("\n Desempenho diária\n\n");
		printf("\n Qual a produção por hora?\n");
	printf(" ");
			scanf("%d",&hproducao);
	system("cls");
			
printf("\n Desempenho diária\n\n");
		printf("\n Qual sua produção em dias normais?\n");
	printf(" ");
			scanf("%d",&ptotal);
						
system("cls");
				
				a=(1440-(tturnos*qturnos));
				b=a-(pcorretiva*60);
				e=((hproducao*b)/60);
				f=(ptotal/e);
				g=f*100;
		printf("\n\a O resultado é %.2f%%.\n\n",g); //certo
				
		
		break;
		
case 3:
	
printf("\n Qualidade diária\n\n");
		printf("\n Qual sua produção em dias normais?\n");
	printf(" ");	
			scanf("%d",&ptotal);
		system("cls");

printf("\n Qualidade diária\n\n");
		printf("\n Produção defeituosa\n");
	printf(" ");	
			scanf("%d",&pdefeito);
						
system("cls");
			
				h=ptotal-pdefeito;
				i=h/ptotal;
				j=i*100;
		printf("\n\a O resultado é %.2f%%.\n\n",j); //certo
		break;
		
case 4:
	
	printf("\n OEE\n\n");
	printf(" 1: Resultado rapido.\n");
	printf(" 2: Resultado detalhado.\n");
	printf("\n ");
	scanf("%d",&rtd);
	

system("cls");

switch(rtd){
	case 1:
	
printf("\n OEE - Overall Equipment Effectiveness\n\n");
		
		printf("\n Digite a quantidade de turnos\n");
	printf(" ");	
			scanf("%d",&qturnos);
		system("cls");
		
printf("\n OEE - Overall Equipment Effectiveness\n\n");	
		printf("\n Digite o tempo disponivel para troca de turno em minutos\n");
	printf(" ");	
			scanf("%d",&tturnos);
		system("cls");

printf("\n OEE - Overall Equipment Effectiveness\n\n");	
		printf("\n Digite o tempo da parada corretiva em horas\n");
	printf(" ");	
			scanf("%d",&pcorretiva);
		system("cls");
		
printf("\n OEE - Overall Equipment Effectiveness\n\n");
		printf("\n Qual a produção por hora?\n");
	printf(" ");	
			scanf("%d",&hproducao);
		system("cls");

printf("\n OEE - Overall Equipment Effectiveness\n\n");
		printf("\n Qual sua produção em dias normais?\n");
	printf(" ");	
			scanf("%d",&ptotal);
		system("cls");

printf("\n OEE - Overall Equipment Effectiveness\n\n");		
		printf("\n Produção defeituosa\n");
	printf(" ");
			scanf("%d",&pdefeito);
		system("cls");
		
printf("\n OEE - Overall Equipment Effectiveness\n\n");
		printf("\n Qual o índice de aprovação minimo da sua empresa?\n");
	printf(" ");
			scanf("%f",&im);
			
system("cls");

				a=(1440-(tturnos*qturnos));
				b=a-(pcorretiva*60);
				c=b/a;
				d=c*100;
//		printf(" O resultado é %.2f ou %.2f\n",d/100,d); //certo
				
				e=((hproducao*b)/60);
				f=(ptotal/e);
				g=f*100;
//		printf(" O resultado é %.2f ou %.2f\n",g/100,g); //certo
				
				h=ptotal-pdefeito;
				i=h/ptotal;
				j=i*100;
//		printf(" O resultado é %.2f ou %.2f\n",j/100,j); //certo
				
				l=c*f*i;
				m=l*100;
		printf("\n\a O resultado é %.2f%%, ",m); //certo
		
				imp=m>=im?printf("e foi aprovado.\n\n"):printf("e foi reprovado.\n\n");
			 if(imp=m>=im){
					system("color 2F");
				}else{
					system("color 4F");
				}
		break;
		
	case 2:
printf("\n OEE - Overall Equipment Effectiveness\n\n");
		
		printf("\n Digite a quantidade de turnos\n");
	printf(" ");	
			scanf("%d",&qturnos);
		system("cls");
		
printf("\n OEE - Overall Equipment Effectiveness\n\n");	
		printf("\n Digite o tempo disponivel para troca de turno em minutos\n");
	printf(" ");	
			scanf("%d",&tturnos);
		system("cls");

printf("\n OEE - Overall Equipment Effectiveness\n\n");	
		printf("\n Digite o tempo da parada corretiva em horas\n");
	printf(" ");	
			scanf("%d",&pcorretiva);
		system("cls");
		
printf("\n OEE - Overall Equipment Effectiveness\n\n");
		printf("\n Qual a produção por hora?\n");
	printf(" ");	
			scanf("%d",&hproducao);
		system("cls");

printf("\n OEE - Overall Equipment Effectiveness\n\n");
		printf("\n Qual sua produção em dias normais?\n");
	printf(" ");	
			scanf("%d",&ptotal);
		system("cls");

printf("\n OEE - Overall Equipment Effectiveness\n\n");		
		printf("\n Produção defeituosa\n");
	printf(" ");
			scanf("%d",&pdefeito);
		system("cls");
		
printf("\n OEE - Overall Equipment Effectiveness\n\n");
		printf("\n Qual o índice de aprovação minimo da sua empresa?\n");
	printf(" ");
			scanf("%f",&im);
			
system("cls");

				a=(1440-(tturnos*qturnos));
				b=a-(pcorretiva*60);
				c=b/a;
				d=c*100;
		printf("\n | Disponibilidade: %.2f aproximadamente %.2f%%.\n",d/100,d); //certo
				
				e=((hproducao*b)/60);
				f=(ptotal/e);
				g=f*100;
		printf(" | Desempenho: %.2f aproximadamente %.2f%%.\n",g/100,g); //certo
				
				h=ptotal-pdefeito;
				i=h/ptotal;
				j=i*100;
		printf(" | Qualidade: %.2f aproximadamente %.2f%%.\n -\n",j/100,j); //certo
				
				l=c*f*i;
				m=l*100;
		printf(" | OEE %.2f aproximadamente %.2f%%, ",m/100,m); //certo
		
				imp=m>=im?printf("\ae foi aprovado.\n\n"):printf("\ae foi reprovado.\n\n");
			 if(imp=m>=im){
					system("color 2F");
				}else{
					system("color 4F");
				}
		break;
		}
	} 
system("pause");
getchar();
system("cls");
system("color 1F");

}while (opcao!=100);
	system("pause");
return(0);
}
