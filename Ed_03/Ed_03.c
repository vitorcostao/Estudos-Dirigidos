#include<stdio.h>   // Para entrada e saidas
#include<string.h>  //Para trabalhar cadeia de caracteres
#include<ctype.h>   //Para trabalhar aspectos das strings
#include<stdbool.h> //Para trabalhar condicoes
#include "io.h"     //Uso opcional de leitura de dados

#define STR_SIZE 100

/**
    ALUNO: Vitor Costa Oliveira Rolla
    INTRODUÇÃO À PROGRAMAÇÃO: REPETIÇÕES EM C
*/

//----------------------------------------------//

/*
    Repetição com teste no inicio
*/

void metodo_01(){

    //definir dado
    int x = 0;

    printf("\nEntrar com quantia: ");
    scanf("%d", &x);
    getchar();

    while(x > 0){

        printf("\n%d\n", x);

        x--;
    }
}

/*
    Repetição com teste no inicio
*/

void metodo_02(){

    //definir dados
    int x = 0;
    int y = 0;

    x = ReadInt("Entrar com uma quantidade");

    y = x;

    while(y > 0){

        printf("\n%d\n", x);

        y--;
    }
}

/*
    Repetição com teste no inicio
*/

void metodo_03(){

    //definir dados
    int x = 0;
    int y = 0;

    x = ReadInt("Entrar com uma quantidade");

    y = 1;

    while(y <= x){

        printf("\n%d\n", y);
        y++;
    }
}

/*
    Repetição com teste no inicio e variacao
*/

void metodo_04(){

    //definir dados
    int x = 0;
    int y = 0;
    int z = 0;

    x = ReadInt("\nEntrar com uma quantidade");

    y = 1;

    for(y = 1; y <= x; y++){

        z = ReadInt("\nValor");
        printf("\n%d. %d\n", y, z);
    }
}

/*
    Repetição com teste no inicio e variacao
*/

void metodo_05(){

    //definir dados
    int x = 0;
    int y = 0;
    int z = 0;

    x = ReadInt("\nEntrar com uma quantidade");

    y = 1;

    for(y = x; y >= 1; y--){

        z = ReadInt("\nValor");
        printf("\n%d. %d\n", y, z);
    }
}

/*
    Repetição sobre cadeia de caracteres
*/

void metodo_06(){

    //definir dados
    int x = 0;
    int y = 0;
    char* palavra = ReadString("\nDigite uma palavra: ");
    int tamanho = strlen(palavra) - 2;


    for(y = tamanho; y >= 0; y--){

        printf("\n%d: [%c]\n", y, palavra[y]);
    }

    liberarS(palavra);
}

/*
    Repetição sobre cadeia de caracteres
*/

void metodo_07(){

    //definir dados
    int x = 0;
    int y = 0;
    char palavra[STR_SIZE];
    int tamanho = 0;

    printf("\nDigite uma palavra: ");
    fgets(palavra, STR_SIZE, stdin);
    tamanho = strlen(palavra) - 1;

    for(y = 0; y < tamanho; y++){

        printf("\n%d: [%c]", y, palavra[y]);
        printf("\n");
    }
}

/*
    Repetição com intervalos
*/

void metodo_08(){

    //definir dados
    int sup = 0;
    int inf = 0;
    int x   = 0;

    inf = ReadInt("Limite inferior: ");
    sup = ReadInt("Limite superior: ");

    for(x = inf; x <= sup; x++){

        printf("%d\n", x);
    }
}

void metodo_09(){

    char* str = ReadString("Digite uma palavra: ");
    int i = 0;

    while(str[i] != '\0'){

        if(str[i] >= 'A' && str[i] <= 'Z'){

            printf("%c ", str[i]);
        }

        i++;
    }

    free(str);
}

/**
    O ED original, nos metodos 9 e 10, trata a leitura de dados double
*/

void metodo_10(){

    char* str = ReadString("Digite uma palavra: ");
    int cont = 0;
    int tamaho = strlen(str) - 1;

    for(int i = 0; i < tamaho; i++){

        if(str[i] >= 'A' && str[i] <= 'Z'){

            printf("%c ", str[i]);
            cont++;
        }
    }



    printf("\nQuantia de maiusculas: %d", cont);

    free(str);
}

void metodo_11(){

    char* str = ReadString("Digite uma palavra: ");
    int cont = 0;
    int tamanho = strlen(str) - 1;

    for(int i = tamanho; i >= 0; i--){

        if(str[i] >= 'A' && str[i] <= 'Z'){

            printf("%c ", str[i]);
            cont++;
        }
    }

    printf("\nQuantia de maiusculas: %d", cont);

    free(str);
}

void metodo_12(){

    char* str = ReadString("Digite uma palavra: ");
    printf("\n");
    int i = 0;
    int cont = 0;

    while(str[i] != '\0'){

        if(str[i] >= 'A' && str[i] <= 'Z' ||
           str[i] >= 'a' && str[i] <= 'z'){

            printf("%c ", str[i]);
            cont++;
        }

        i++;
    }

    printf("\n\nQuantia de letras: %d", cont);

    free(str);
}

void metodo_13(){

    char* str = ReadString("Digite uma palavra: ");
    getchar();
    printf("\n");
    int cont = 0;

    for(int i = 0; i < strlen(str) - 1; i++){

        if(!isalpha(str[i])){

            printf("%c ", str[i]);
            cont++;
        }
    }

    printf("\n\nQuantia de digitos: %d", cont);

    free(str);
}

void metodo_14(){

    char* str = ReadString("Digite uma palavra: ");
    getchar();
    printf("\n");
    int cont = 0;

    for(int i = 0; i < strlen(str) - 1; i++){

        if(!isalnum(str[i])){

            printf("%c ", str[i]);
            cont++;
        }
    }

    printf("\n\nQuantia de digitos: %d", cont);

    free(str);
}

void metodo_15(){

    int a = ReadInt("\nInicio"), b = ReadInt("\nFim");
    int n = ReadInt("\nQuantia de valores");
    int cont = 0;

    int* valores = (int*)malloc(n * sizeof(int));

    if(valores){

       for(int i = 0; i < n; i++){

            valores[i] = ReadInt("Defina os Valores");

        }

        if(a < b){

            for(int i = 0; i < n; i++){

                if((valores[i] >= a && valores[i] <= b) &&
                   valores[i] % 6 == 0){

                    printf("[%d]: %d", i + 1, valores[i]);
                    cont++;
                }
            }
        }
        free(valores);
    }
    else{

        printf("\nNao foi possivel alocar memoria");
    }

}

void metodo_16(){

    int a = ReadInt("\nInicio"), b = ReadInt("\nFim");
    int n = ReadInt("\nQuantia de valores");
    int cont = 0;

    int* valores = (int*)malloc(n * sizeof(int));

    if(valores){

       for(int i = 0; i < n; i++){

            valores[i] = ReadInt("Defina os Valores");

        }

        if(a < b){

            for(int i = 0; i < n; i++){

                if((valores[i] >= a && valores[i] <= b) &&
                   (valores[i] % 4 == 0) && (valores[i] % 5 != 0)){

                    printf("\n[%d]: %d", i, valores[i]);
                    cont++;
                }
            }
        }
        free(valores);
    }
    else{

        printf("\nNao foi possivel alocar memoria");
    }
}

void metodo_17(){

    double a = ReadDouble("\nInicio"), b = ReadDouble("\nFim");
    int n = ReadInt("\nQuantia de valores");
    int cont = 0;

    double* valores = (double*)malloc(n * sizeof(double));

    if(valores){

       for(int i = 0; i < n; i++){

            valores[i] = ReadDouble("Defina os Valores");

        }

        if(a < b){

            for(int i = 0; i < n; i++){

                if((valores[i] >= a && valores[i] <= b) &&
                   ((int)valores[i] % 2 == 0)){

                    printf("\n[%d]: %d", i + 1, (int)valores[i]);
                    cont++;
                }
            }
        }
        free(valores);
    }
    else{

        printf("\nNao foi possivel alocar memoria");
    }
}

void metodo_18(){

    double a = ReadDouble("\nInicio"), b = ReadDouble("\nFim");
    int n = ReadInt("\nQuantia de valores");
    int cont = 0;
    double frac;

    double* valores = (double*)malloc(n * sizeof(double));

    if(valores){

       for(int i = 0; i < n; i++){

            valores[i] = ReadDouble("Defina os Valores");

        }

        if((a < b) && (a > 0) && (b < 1)){

            for(int i = 0; i < n; i++){

                frac = valores[i] - (int)valores[i];

                if(frac < a || frac > b){
                   printf("\n[%d]: %lf", i + 1, frac);
                   cont++;
                }
            }
        }
        free(valores);
    }
    else{

        printf("\nNao foi possivel alocar memoria");
    }
}

void metodo_19(){

    char str[STR_SIZE];

    fgets(str, STR_SIZE, stdin);

    for(int i = 0; i < strlen(str) - 1; i++){

        if(!isalnum(str[i])){

            printf("%c ", str[i]);
        }
    }
}

bool JustSimbols(char* str){

    bool OK = true;

    for(int i = 0; i < strlen(str) - 1; i++){

        if(!isalpha(str[i])){
           if(str[i] == ' '){

           }
           else{

            OK = false;
            return OK;
           }
        }
    }

    return OK;
}

void metodo_20(){

    char str[STR_SIZE];
    fgets(str, STR_SIZE, stdin);

    bool Teste = JustSimbols(str);

    if(Teste){

        printf("\nA cadeia de caracteres eh composta apenas por letras");
    }
    else{

        printf("\nA cadeia de caracteres eh composta por outros caracteres");
    }
}

int main (){

    int opcao = 1;

    do{

        printf("\nDigite a opcao: ");
        scanf("%d", &opcao);
        getchar();


        switch(opcao){

        case 0:
            printf("\nEncerrar . . . ");
            break;

        case 1:
            metodo_01();
            break;

        case 2:
            metodo_02();
            break;

        case 3:
            metodo_03();
            break;

        case 4:
            metodo_04();
            break;

        case 5:
            metodo_05();
            break;

        case 6:
            metodo_06();
            break;

        case 7:
            metodo_07();
            break;

        case 8:
            metodo_08();
            break;

        case 9:
            metodo_09();
            break;

        case 10:
            metodo_10();
            break;

        case 11:
            metodo_11();
            break;

        case 12:
            metodo_12();
            break;

        case 13:
            metodo_13();
            break;

        case 14:
            metodo_14();
            break;

        case 15:
            metodo_15();
            break;

        case 16:
            metodo_16();
            break;

        case 17:
            metodo_17();
            break;

        case 18:
            metodo_18();
            break;

        case 19:
            metodo_19();
            break;

        case 20:
            metodo_20();
            break;

        default:
            printf("Opcao invalida . . .");
            break;
        }

    } while(opcao != 0);

    return 0;
}
