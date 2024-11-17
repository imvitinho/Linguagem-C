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

int main()
{
    int n1, n2, n3;

    printf("Você quer a tabuada de qual número? ");
    scanf("%d", &n1);

    printf("Você quer começar a tabuada em qual número? ");
    scanf("%d", &n2);

    printf("Você quer terminar a tabuada em qual número? ");
    scanf("%d", &n3);

    if (n2 > n3)
    {
        printf("Erro na especificação da tabuada.\n");
        return 1;
    }
    for (int i = n2; i <= n3; i++)
    {
        printf("%d x %d = %d\n", n1, i, n1 * i);
    }
    return 0;
}
