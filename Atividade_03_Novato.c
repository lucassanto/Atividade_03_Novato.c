#include <stdio.h> // Biblioteca de entrada e saída: printf e scanf.

int main()
{
    // Variáveis para definir o número de casas a serem movidas por cada peça.
    int mov_Torre_Branca = 5; // Torre Branca: 5 casas para a direita.
    int mov_Bispo_Branco = 5; // Bispo Branco: 5 casas na diagonal: cima-direita.
    int mov_Dama_Branca = 8;  // Dama Branca: 8 casas para a esquerda.

    // Declarando i para controlar os movimentos.
    int i;

    // Movimento da Torre (usando FOR).
    printf("Movimento da Torre (5 casas para a direita): \n");
    for (i = 1; i <= mov_Torre_Branca; i++)
    {
        printf("Direita \n"); // Torre, move-se horizontalmente para a direita.
    }

    printf("\n"); // Linha em branco para separar as peças.

    // Movimento do Bispo (usando WHILE).
    printf("Movimento do Bispo (5 casas na diagonal cima-direita): \n");
    i = 0; // Reinicia o contador.
    while (i < mov_Bispo_Branco)
    {
        printf("Cima, Direita \n"); // Bispo move-se na diagonal (combinação de direções).
        i++;
    }

    printf("\n"); // Linha em branco para separar as peças.

    // Movimento da Dama (usando DO-WHILE).
    printf("Movimento da Dama (8 casas para a esquerda): \n");
    i = 0; // Reinicia o contador.
    do
    {
        printf("Esquerda \n"); // Dama move-se horizontalmente para a esquerda.
        i++;
    } while (i < mov_Dama_Branca);

    return 0; // Finaliza o programa.
}
