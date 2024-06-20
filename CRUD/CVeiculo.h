#include<stdio.h>
struct veiculos{
int id_veiculo;
char placa_veiculo[50];
char marca_veiculo[50];
char modelo_veiculo[50];
char tipo_veiculo[50];
char proprietario_veiculo[50];
int ativo;
}cadastroVeiculo[5];


int criarVeiculo(){
    int i=0;
    char respcont;
    do{
        printf("Insira a casa que deseja criar\n1 a 5\n");
        scanf("%i",&i);
        i=i-1;
        printf("%i-Veiculo\n",i+1);
        printf("Insira o ID do Veiculo\n");
        scanf("%i", &cadastroVeiculo[i].id_veiculo);
        printf("Insira a Placa do Veiculo\n");
        fflush(stdin);
        gets(cadastroVeiculo[i].placa_veiculo);
        printf("Insira a Marca do Veiculo\n");
        fflush(stdin);
        gets(cadastroVeiculo[i].marca_veiculo);
        printf("Insira o modelo do Veiculo\n");
        fflush(stdin);
        gets(cadastroVeiculo[i].modelo_veiculo);
        printf("Insira o Tipo do Veiculo\n");
        fflush(stdin);
        gets(cadastroVeiculo[i].tipo_veiculo);
        printf("Qual o Nome do Proprietario do Veiculo\n");
        fflush(stdin);
        gets(cadastroVeiculo[i].proprietario_veiculo);
        printf("Deseja fazer mais um Registro?\nS/N\n");
        scanf("%c",&respcont);
    }while(respcont=='s'||respcont=='S');
    for(i=0;i<2;i++){
        printf("%i\n",cadastroVeiculo[i].id_veiculo);
        printf("%s\n",cadastroVeiculo[i].placa_veiculo);
        printf("%s\n",cadastroVeiculo[i].marca_veiculo);
        printf("%s\n",cadastroVeiculo[i].modelo_veiculo);
        printf("%s\n",cadastroVeiculo[i].tipo_veiculo);
        printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
    }
}
