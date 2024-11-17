/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Victor Machado Martins
 *    Matrícula:202416670
 *    Turma:SI1N
 *    Email:victor.mmartins@uvvnet.com.br
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

// Comece aqui seu programa.
#include <cs50.h>
#include <stdio.h>

int main(){
    int n;
    char resposta;
    do {
        do
        {
            printf("Você quer a tabuada de qual número? ");
            scanf("%d", &n);
            if (n < 1 || n > 99) printf("Número fora do intervalo permitido.\n");
        }
        while (n < 1 || n > 99);
        for (int i = 0; i <= 10; i++)
        {
        printf("%d x %d = %d\n", n, i, n * i);
        }
        printf("Deseja escolher outro número? (S) Sim / (N) Não): ");
        scanf(" %c", &resposta);
    }
    while (resposta == 'S' || resposta == 's');

    return 0;
}
