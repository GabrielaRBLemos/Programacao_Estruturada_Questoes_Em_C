#include <stdio.h>
#include <stdlib.h>

int randInt()
{
    int num;
    num = (rand() % 100) + 1;
    return num;
}

int printVector(int vet[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", vet[i]);
    }
    
}

void fillVector(int vet[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        vet[i] = randInt();
    }   
}

int* searchIndex(int num, int vet[], int size, int* numOfResults)
{
    int i;
    int* searchResult = malloc(size * sizeof(int));
    for (i = 0; i < size; i++)
    {
        searchResult[i] = 0;
    }
    
    for (i = 0; i < size; i++)
    {
        if (vet[i] == num)
        {
            searchResult[i] = 1;
            *numOfResults = *numOfResults + 1;
        }   
    }
    return searchResult;
}

void printResults(int searchResult[], int size, int numOfResults)
{
    int i, resultsPrinted;
    resultsPrinted = 0;
    for (i = 0; i < size; i++)
    {
        if(searchResult[i] == 1)
        {
            if (resultsPrinted == numOfResults - 1)
            {
                printf("%d.\n ", i);
            }
            else
            {
                printf("%d, ", i);
                resultsPrinted = resultsPrinted + 1;
            }
        }
    }
}

int main() 
{
    int size;
    size = 1000;
    int vet[size], userInput, numOfResults;
    int* searchResult;
    numOfResults = 0;
    fillVector(vet, size);
    printf("Digite um número inteiro qualquer entre 1 e 100: ");
    scanf("%d", &userInput);
    if (1 <= userInput && userInput <= 100)
    {
        searchResult = searchIndex(userInput, vet, size, &numOfResults);
        printf("O vetor dos valores gerados:\n");
        printVector(vet, size);
        printf("O vetor dos resultante da busca:\n");
        printVector(searchResult, size);
        if(numOfResults != 0)
        {
            printf("O valor %d foi encontrado em %d posições: ", userInput, numOfResults);
            printResults(searchResult, size, numOfResults);
        }
        else
        {
            printf("%d não está presente no vetor.\n", userInput);
        }
    }
    else
    {
        printf("Apenas números entre 1 e 100 são entradas válidas.\n");
    }
    free(searchResult);
    return 0;
}
