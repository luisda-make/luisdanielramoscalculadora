#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
main()
{
	char resp;
	do
	{

	int x,y,suma,resta,mul,div,opc;
	printf("[1] SUMA");
	printf("\n[2] RESTA");
	printf("\n[3] MULTIPLICACION");
	printf("\n[4] DIVISION");
	printf("\Elija una opcion:");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1:
			printf("Dame n1:");
			scanf("%d",&x);
			printf("Dame n2:");
			scanf("%d",&y);
			suma=x+y;
			printf("La suma es:%d",suma);
			break;
			case 2:
			printf("Dame n1:");
			scanf("%d",&x);
			printf("Dame n2:");
			scanf("%d",&y);
			resta=x-y;
			printf("La resta es:%d",resta);
			break;
			case 3:
            printf("Dame n1:");
			scanf("%d",&x);
			printf("Dame n2:");
			scanf("%d",&y);
			mul=x*y;
			printf("La multiplicacion es:%d",mul);
			break;
			case 4:
             printf("Dame n1:");
			scanf("%d",&x);
			printf("Dame n2:");
			scanf("%d",&y);
			div=x/y;
			printf("La division es:%d",div);
	}
	do{
		printf("desea continuar S/N");
		scanf("%s",resp);
		resp=toupper(resp);
	}while(resp!=¨S¨&& resp!=¨N¨);
}while();
