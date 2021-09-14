//Struct - Linguagem C - Eduardo Casavella - https://www.youtube.com/watch?v=Lktyz-vojCQ


#include <stdio.h>
#include <stdlib.h>


struct ficha_aluno { //tipo de dado
    char nome [40];
    int numero;
    float nota;
}; //definição da struct


struct ficha_aluno aluno; //declaração da variável aluno que é do tipo struct ficha_aluno

int main(){

    printf("\n ---------- Cadastro de aluno ----- \n");

    printf("Nome do aluno: ");
    fgets(aluno.nome, 40, stdin);

    printf("Digite o numero do aluno: ");
    scanf("%d", &aluno.numero);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("\n ------ Lendo os dados da Struct ------- \n");

    printf("Nome:............. %s", aluno.nome);
    printf("Numero:........... %d\n", aluno.numero);
    printf("NOta:............. %2.f\n", aluno.nota);

    return 0;
}

