#include<stdio.h>
#include<string.h>
struct Vagas{
    int id_vaga;
    char nome_vaga[20];
    char tipo_vaga;
    char dono_vaga[20];
    int ativo;
}cadastroVaga[5];



int FA1=0,FA2=0,FA3=0,FA4=0,FA5=0,FB6=0,FB7=0,FB8=0,FB9=0,FB0=0;
int criarVaga(){
    int i,numero_vaga;
    char respVagas;
    do{
        printf("Insira a casa que deseja alterar\n1 a 5\n");
        scanf("%i",&i);
        i=i-1;
        printf("%i-Vagas\n",i+1);
        printf("Escolha a Vaga do cliente\nVagas de 0-9\n");
        if(FA1==0){
            printf("|1-A1|");
        }
        if(FA2==0){
            printf("|2-A2|");
        }
        if(FA3==0){
            printf("|3-A3|");
        }
        if(FA4==0){
            printf("|4-A4|");
        }
        if(FA5==0){
            printf("|5-A5|");
        }
        printf("\n");
        if(FB6==0){
            printf("|6-B6|");
        }
        if(FB7==0){
            printf("|7-B7|");
        }
        if(FB8==0){
            printf("|8-B8|");
        }
        if(FB9==0){
            printf("|9-B9|");
        }
        if(FB0==0){
            printf("|0-B0|");
        }
        printf("\n");
        scanf("%i",&numero_vaga);
        switch (numero_vaga)
        {
        case 1:
            FA1=1;
            printf("Insira o ID da criacao da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a A1, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 2:
            FA2=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a A2, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 3:
            FA3=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a A3, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 4:
            FA4=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a A4, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 5:
            FA5=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a A5, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 6:
            FB6=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a B6, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 7:
            FB7=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a B7, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 8:
            FB8=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a B8, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 9:
            FB9=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a B9, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 0:
            FB0=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a B0, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        default:
            printf("Algo deu ERRADO!\n");
        break;
        }
        i++;
        printf("Deseja adcionar outra Vagas\n");
        scanf("%c",&respVagas);
    }while(respVagas=='s'||respVagas=='S');
}
