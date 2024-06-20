#include<stdio.h>
#include<stdlib.h>

int deleteh(){
int des, i, opc;
des = 0;


while (des != 5){
    printf("=============================");
    printf("           REMOVER");
    printf("=============================");
    printf("    O que deseja remover\n");
    printf("[1] Veículo");
    printf("[2] Vaga");
    printf("[3] Entrada/Saída");
    printf("[4] Usuário");
    printf("[5] Sair");
    scanf("%i", &des);
    printf("=============================");
        switch (des)
                {
                case 1:
                    printf("Selecione o numero do veiculo que deseja excluir \n");
                    for(i=0;i<5;i++){
                    printf(" Veiculo n%i \n", i);
                    printf("ID: ");
                    printf("%i\n",cadastroVeiculo[i].id_veiculo);
                    printf("Modelo: ");
                    printf("%s\n",cadastroVeiculo[i].modelo_veiculo);
                    printf("---------");
                    }
                    scanf("%i", &opc);
                    switch (opc){
                    case 1:
                        cadastroVeiculo[opc].ativo = 0;
                        break;
                    case 2:
                        cadastroVeiculo[opc].ativo = 0;
                        break;
                    case 3:
                        cadastroVeiculo[opc].ativo = 0;
                        break;
                    case 4:
                        cadastroVeiculo[opc].ativo = 0;
                        break;
                    case 5:
                        cadastroVeiculo[opc].ativo = 0;
                        break;
                    }

                break;
                case 2:
                    printf("Selecione o numero da vaga que deseja excluir \n");
                    for(i=0;i<5;i++){
                    printf("vaga n%i \n", i);
                    printf("ID: ");
                    printf("%i\n",cadastroVaga[i].id_vaga);
                    printf("Nome: ");
                    printf("%s\n",cadastroVaga[i].nome_vaga);
                    printf("---------");
                    }
                    scanf("%i", &opc);
                    switch (opc){
                    case 1:
                        cadastroVaga[opc].ativo = 0;
                        break;
                    case 2:
                        cadastroVaga[opc].ativo = 0;
                        break;
                    case 3:
                        cadastroVaga[opc].ativo = 0;
                        break;
                    case 4:
                        cadastroVaga[opc].ativo = 0;
                        break;
                    case 5:
                        cadastroVaga[opc].ativo = 0;
                        break;
                    }
                break;
                case 3:
                    printf("Selecione o numero das Entradas e Saidas que deseja excluir \n");
                    for(i=0;i<5;i++){
                    printf("Entr/Said n%i \n", i);
                    printf("ID: ");
                    printf("%i\n",cadastroEntradaSaida[i].id_transacao);
                    printf("NHora Total: ");
                    printf("%s\n",cadastroEntradaSaida[i].hora_total);
                    printf("---------");
                    }
                    scanf("%i", &opc);
                    switch (opc){
                    case 1:
                        cadastroEntradaSaida[opc].ativo = 0;
                        break;
                    case 2:
                        cadastroEntradaSaida[opc].ativo = 0;
                        break;
                    case 3:
                        cadastroEntradaSaida[opc].ativo = 0;
                        break;
                    case 4:
                        cadastroEntradaSaida[opc].ativo = 0;
                        break;
                    case 5:
                        cadastroEntradaSaida[opc].ativo = 0;
                        break;
                    }

                break;
                case 4:
                            printf("AGUARDANDO RAFAEL");
                break;
                default:
                    printf("Algo deu ERRADO!\n");
                    system("Pause");
                break;
                }
}
    return 0;
}
