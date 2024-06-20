#include<stdio.h>
struct SaidaEntrada{
    int id_transacao;
    int hora_total;
    int ativo;
}cadastroEntradaSaida[5];

int criarEntradaSaida(){
    int i=0;
    char respEntSai;
    do{
        printf("Insira a casa que deseja criar\n1 a 5\n");
        scanf("%i",&i);
        i=i-1;
        printf("Insira o ID");
        scanf("%i",&cadastroEntradaSaida[i].id_transacao);
        printf("Insira a quantidade de Horas que permanecera ao local\n");
        scanf("%i",&cadastroEntradaSaida[i].hora_total);
        printf("Deseja Inserir Novamente\nS/N\n");
        scanf("%c",&respEntSai);
    }while(respEntSai=='s'||respEntSai=='S');
}

