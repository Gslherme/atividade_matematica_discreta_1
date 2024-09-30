#include <stdio.h>

void torf(int resposta) { //Função que imprime "Verdadeiro" ou "Falso" com base no valor passado
    if (resposta == 0) { //Se o valor for 0, imprime "Falso"
        printf("Falso");

    }

    else if (resposta == 1) { //Se o valor for 1, imrpime "Verdadeiro"
        printf("Verdadeiro");

    }

}

int main(void) {
    int p, q, resp;

    printf("Digite o valor logico de \"p\" (1 para verdadeiro e 0 para falso): " ); //Solicita o valor para váriavel p
    scanf(" %i", &p);

    printf("\nDigite o valor logico de \"q\" (1 para verdadeiro e 0 para falso): " ); //Solicita o valor para váriavel q
    scanf(" %i", &q);

    printf("\np = "); //Exibe como "Verdadeiro" ou "Falso" os valores de p e q
    torf(p);
    printf("\nq = ");
    torf(q);

    printf("\n");

    resp = p || q; //Disjunção (p ou q)
    printf("\np v q = ");
    torf(resp);

    resp = p && q; //Conjunção (p e q)
    printf("\np ^ q = ");
    torf(resp);

    resp = !((!p) || q) && ((!q) || p); //Disjunção exclusiva (ou p, ou q)
    printf("\np _v_ q = ");
    torf(resp);

    resp = (!p) || q; //Condicional (se p, então q)
    printf("\np -> q = ");
    torf(resp);

    resp = ((!p) || q) && ((!q) || p); //Bicondicional (p se e somente se q)
    printf("\np <-> q = ");
    torf(resp);

    printf("\n"); //Caso a execução do programa seja realizada via prompt do Windows, é necessário adicionar biblioteca "stdlib.h" para inserir o comando "system("pause") logo após este printf, se não não será possível visualizar o resultado das operações

    return 0;

}
