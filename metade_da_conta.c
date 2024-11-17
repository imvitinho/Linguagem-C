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

int main() {
    int vetor[6] = {1, 0, 5, -2, -5, 7};
    int soma_impares = 0;

    printf("Vetor inicial: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
        if (vetor[i] % 2 != 0) {
            soma_impares += vetor[i];
        }
    }
    printf("\n");

    printf("Soma dos elementos ímpares: %d\n", soma_impares);

    vetor[3] = 100;
    printf("Vetor modificado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
