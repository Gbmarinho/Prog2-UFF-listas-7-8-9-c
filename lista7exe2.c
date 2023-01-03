/* 1). O que será impresso na tela? 
    R: etseT Otimo

2). Andamento da execução:
    R: Primeiro, é declarado a variável contendo a string "Otimo teste" e o ponteiro 
    que direciona para a variável misterio contendo 80 espaços para caractéres.Em seguida,
    dois contadores (i e j) são declarados e iniciados com o valor 0. Após, o ponteiro declarado
    acima com a variável misterio é configurada para apontar para a posição referente ao último 
    caracter da string declarada na variável frase. Desta forma, cada iteração do while será 
    adiciondo a variável misterio o caracter referente ao indice atual, enquanto incrementava
    a variável i e decrementava em posição no ponteiro *p, fazendo com que este se referisse 
    a posição anterior até que chegasse ao primeiro espaço em branco. Na linha subsequente, um
    espaço em branco é adicionada a variável misterio, seguindo, assim, para o próximo while.
    Nesse while, o qual usa a variável j como contador, adicionará em misterio na posição i
    (ou seja, na posição que parou a iteração do while anterior) a primeira palavra da string
    (uma vez que j foi inicializado com o valor 0, o qual se referente ao primeiro indice), 
    fazendo, assim, com que o a palavra Otimo seja adicionado logo após a palavra teste 
    escrita de trás para frente separadas por um espaço em branco. No final da iteração do
    segundo whle, um '\0' é adicionado a misterio para indicação que a string foi finalizada
    para o compilador e misterio é impressa.
 */