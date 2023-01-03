#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa
{
    int codigo;
    char nome[80];
    struct Pessoa *esquerda;
    struct Pessoa *direita;

} Pessoa;

void inserirCadastro(Pessoa **vet, int codigo);
Pessoa *busca(Pessoa **vet, int codigo);

int main()
{
    int escolha, valor;
    char nome[80];
    Pessoa *root = NULL;
    printf("\n:: Cadastro de pessoas ::\n");
    while (1)
    {
        printf("\nEscolha a opcao desejada\n");
        printf("1. Inserir dados\n2. Busca no vetor\n3. Saida\n");
        printf("\nDigite sua escolha: ");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            printf("Digite o codigo desejado a ser inserido: ");
            scanf("%d", &valor);
            printf("Digite o nome desejado para ser inserido: ");
            scanf("%s", &nome);
            inserirCadastro(&root, valor);
            break;
        case 2:
            printf("Digite o codigo desejado para busca no vetor: ");
            scanf("%d", &valor);
            Pessoa *node = busca(&root, valor);
            if (node != NULL)
            {
                printf("\nElemento encontrado => %s\n", nome);
            }
            else
            {
                printf("\nCodigo não localizado.\n");
            }
            break;
        case 3:
            exit(0);
        default:
            printf("\nCodigo invalido. Tente novamente!!!\n");
        }
    }
}

void inserirCadastro(Pessoa **vet, int codigo)
{
    Pessoa *temp, *anterior, *atual;

    if (*vet == NULL)
    {
        temp = (Pessoa *)malloc(sizeof(Pessoa));
        temp->codigo = codigo;
        temp->esquerda = temp->direita = NULL;
        *vet = temp;
        return;
    }

    if (codigo < (*vet)->codigo)
    {
        inserirCadastro(&(*vet)->esquerda, codigo);
    }
    else if (codigo > (*vet)->codigo)
    {
        inserirCadastro(&(*vet)->direita, codigo);
    }
}

Pessoa *busca(Pessoa **vet, int codigo)
{
    if (*vet == NULL)
    {
        return NULL;
    }

    if (codigo < (*vet)->codigo)
    {
        busca(&((*vet)->esquerda), codigo);
    }
    else if (codigo > (*vet)->codigo)
    {
        busca(&((*vet)->direita), codigo);
    }
    else if (codigo == (*vet)->codigo)
    {
        return *vet;
    }
}
#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa
{
    int codigo;
    char nome[80];
    struct Pessoa *esquerda;
    struct Pessoa *direita;

} Pessoa;

void inserirCadastro(Pessoa **vet, int codigo);
Pessoa *busca(Pessoa **vet, int codigo);

int main()
{
    int escolha, valor;
    char nome[80];
    Pessoa *root = NULL;
    printf("\n:: Cadastro de pessoas ::\n");
    while (1)
    {
        printf("\nEscolha a opcao desejada\n");
        printf("1. Inserir dados\n2. Busca no vetor\n3. Saida\n");
        printf("\nDigite sua escolha: ");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            printf("Digite o codigo desejado a ser inserido: ");
            scanf("%d", &valor);
            printf("Digite o nome desejado para ser inserido: ");
            scanf("%s", &nome);
            inserirCadastro(&root, valor);
            break;
        case 2:
            printf("Digite o codigo desejado para busca no vetor: ");
            scanf("%d", &valor);
            Pessoa *node = busca(&root, valor);
            if (node != NULL)
            {
                printf("\nElemento encontrado => %s\n", nome);
            }
            else
            {
                printf("\nCodigo não localizado.\n");
            }
            break;
        case 3:
            exit(0);
        default:
            printf("\nCodigo invalido. Tente novamente!!!\n");
        }
    }
}

void inserirCadastro(Pessoa **vet, int codigo)
{
    Pessoa *temp, *anterior, *atual;

    if (*vet == NULL)
    {
        temp = (Pessoa *)malloc(sizeof(Pessoa));
        temp->codigo = codigo;
        temp->esquerda = temp->direita = NULL;
        *vet = temp;
        return;
    }

    if (codigo < (*vet)->codigo)
    {
        inserirCadastro(&(*vet)->esquerda, codigo);
    }
    else if (codigo > (*vet)->codigo)
    {
        inserirCadastro(&(*vet)->direita, codigo);
    }
}

Pessoa *busca(Pessoa **vet, int codigo)
{
    if (*vet == NULL)
    {
        return NULL;
    }

    if (codigo < (*vet)->codigo)
    {
        busca(&((*vet)->esquerda), codigo);
    }
    else if (codigo > (*vet)->codigo)
    {
        busca(&((*vet)->direita), codigo);
    }
    else if (codigo == (*vet)->codigo)
    {
        return *vet;
    }
}
