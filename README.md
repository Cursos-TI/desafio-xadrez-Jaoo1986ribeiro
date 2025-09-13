Desafio de Xadrez - Nível Mestre
Descrição
Este projeto implementa as movimentações de peças de xadrez (Bispo, Torre, Rainha e Cavalo) utilizando funções recursivas e loops complexos, conforme os requisitos do nível Mestre do desafio da MateCheck.

Funcionalidades
Movimentação do Bispo: 5 casas na diagonal direita para cima, implementada com recursão

Movimentação da Torre: 5 casas para a direita, implementada com recursão

Movimentação da Rainha: 8 casas para a esquerda, implementada com recursão

Movimentação do Cavalo: 1 movimento em L para cima e direita (2 casas para cima e 1 para a direita), implementada com loops aninhados e uso de break e continue

Como Compilar e Executar
Compilação
Compile o código usando o compilador GCC:

text
gcc xadrez_mestre.c -o xadrez_mestre
Execução
Execute o programa compilado:

text
./xadrez_mestre
Estrutura do Código
O código está organizado da seguinte forma:

Constantes para direções (Cima, Baixo, Esquerda, Direita)

Prototipação das funções

Função principal (main) que chama as funções de movimentação

Funções de movimentação para cada peça:

movimentarBispoMestre (recursiva)

movimentarTorreMestre (recursiva)

movimentarRainhaMestre (recursiva)

movimentarCavaloMestre (com loops aninhados)

Notas
O programa não possui interação do usuário durante a execução

As movimentações são fixas e demonstradas automaticamente

Ao final da execução, o programa aguarda que o usuário pressione Enter para encerrar

Requisitos Atendidos
Utilização de funções recursivas para Bispo, Torre e Rainha

Utilização de loops aninhados e comandos break e continue para o Cavalo

Saída clara e organizada das direções de movimentação