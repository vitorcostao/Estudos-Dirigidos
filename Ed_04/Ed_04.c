/**
    PUC-Minas - Ci�ncia da Computa��o
    AED1 � Estudo Dirigido 04

    Tema: Introdu��o � programa��o II
    Atividade: Fun��es e procedimentos em C

    Aluno: Vitor Costa Oliveira Rolla
*/

#include<stdio.h>   // Para entrada e saidas
#include<string.h>  //Para trabalhar cadeia de caracteres
#include<ctype.h>   //Para trabalhar aspectos das strings
#include<stdbool.h> //Para trabalhar condicoes
#include "io.h"     //Uso opcional de leitura de dados

//----------------------------------------------//


void metodo_01(){

    //definir dados
    int quantia  = 0;
    int valor    = 0;
    int controle = 0;

    quantia  = ReadInt("Defina a quantia");

    controle = 1;

    while(controle <= quantia){

        valor = ReadInt("\nValor");

        controle++;
    }
}

bool positive(int x){

    bool result = false;

    if(x > 0){

        result = true;
    }

    return result;
}

void metodo_02(){

    int q     = ReadInt("Defina a quantia de dados");
    int valor = 0;
    int i     = 0;
    int c     = 0;

    if(positive(q)){

        while(i < q){

            valor = ReadInt("\nValor");

            if(positive(valor)){

                c++;
            }

            i++;
        }

         printf("\nExistem %d valores positivos\n", c);
    }
    else{

        printf("\nQuantia invalida invalido\n");
    }
}

bool Belongs_To(int x, int inicio, int fim){

    bool OK = false;

    if(inicio < 0 && fim < 0){
       if(inicio > fim){

          int tmp = inicio;
          inicio  = fim;
          fim     = tmp;

          if(x > inicio && x < fim){

             OK = true;
             return OK;
          }
       }
       else{

          if(x > inicio && x < fim){

             OK = true;
             return OK;
          }
       }
    }
    else if(inicio >= 0 && fim >=0){

        if(x > inicio && x < fim){

            OK = true;
            return OK;
        }
    }

    return OK;
}

void metodo_03(){

    int q     = ReadInt("Defina a quantia de dados");
    int valor = 0;
    int i     = 0;
    int c     = 0;

    if(positive(q)){

        while(i < q){

            valor = ReadInt("\nValor");

            if(Belongs_To(valor, 0, 100)){

                c++;
            }

            i++;
        }

         printf("\nExistem %d valores no intervalo dado\n", c);
    }
    else{

        printf("\nQuantia invalida invalido\n");
    }
}

bool even(int x){

    bool result = false;

    if(x % 2 == 0){

       result = true;
       return result;
    }

    return result;
}

void metodo_04(){

    int q     = ReadInt("Defina a quantia de dados");
    int valor = 0;
    int i     = 0;
    int c     = 0;

    if(positive(q)){

        while(i < q){

            valor = ReadInt("\nValor");

            if(Belongs_To(valor, 0, 100) && even(valor)){

                c++;
            }

            i++;
        }

         printf("\nExistem %d valores no intervalo dado\n", c);
    }
    else{

        printf("\nQuantia invalida invalido\n");
    }
}

void metodo_05(){

    int q     = ReadInt("Defina a quantia de dados");
    int valor = 0;
    int i     = 0;
    int c     = 0;
    bool ok = false;

    if(positive(q)){

        while(i < q){

            valor = ReadInt("\nValor");

            ok = Belongs_To(valor, 0, 100);
            ok = ok && even(valor);

            if(ok){

                c++;
            }

            i++;
        }

         printf("\nExistem %d valores no intervalo dado\n", c);
    }
    else{

        printf("\nQuantia invalida invalido\n");
    }
}

bool isLowerCase(char c){

    bool result = false;

    if(c >= 'a' && c <= 'z'){

        result = true;
        return result;
    }

    return result;
}

void metodo_06(){

    char* str = (char*)malloc(40 * sizeof(char));
    fgets(str, 40, stdin);

    int  cont = 0;

    if(!str){

        printf("\nERROR: Nao foi possivel alocar memoria");
        return;
    }

    for(int i = 0; i < strlen(str); i++){

        if(isLowerCase(str[i])){
            cont++;
        }
    }

    printf("\nA quantia de letras minusculas e %d\n", cont);

    liberarS(str);
}

void metodo_07(){

    char* str = (char*)malloc(40 * sizeof(char));
    fgets(str, 40, stdin);

    int  cont = 0;

    if(!str){

        printf("\nERROR: Nao foi possivel alocar memoria");
        return;
    }

    for(int i = 0; i < strlen(str); i++){

        if(isLowerCase(str[i])){
            cont++;
            printf("%c ", str[i]);
        }
    }

    printf("\nA quantia de letras minusculas e %d\n", cont);

    liberarS(str);
}

void metodo_08(){

    int tamanho = 0;
    int contador = 0;
    char* palavra = (char*)malloc(100 * sizeof(char));
    char* minusculas = (char*)malloc(100 * sizeof(char));

    if(!palavra){

        return;
    }

    if(!minusculas){

        free(palavra);
        return;
    }

    fgets(palavra, 100, stdin);
    tamanho = strlen(palavra);

    for(int i = 0; i < 100; i++){

        minusculas[i] = ' ';
    }

    for(int i = 0; i < tamanho; i++){

        //testa letras minusculas
        if(isLowerCase(palavra[i])){

            minusculas[i] = palavra[i];
            contador++;
        }
    }


    printf("\nA quantia de letras minusculas e/sao %d\n", contador);
    printf("\nAs Letras minusculas sao %s\n", minusculas);

    liberarS(palavra);
    liberarS(minusculas);
}

bool isAdigit(char c){

    bool result = false;

    if('0' <= c && c <= '9'){

        result = true;
    }

    return result;

}

void metodo_09(){

    int tamanho = 0;
    int contador = 0;
    char* palavra = (char*)malloc(100 * sizeof(char));
    char* digit = (char*)malloc(100 * sizeof(char));

    if(!palavra){

        return;
    }

    if(!digit){

        free(palavra);
        return;
    }

    fgets(palavra, 100, stdin);
    tamanho = strlen(palavra);

    for(int i = 0; i < 100; i++){

        digit[i] = ' ';
    }

    for(int i = 0; i < tamanho; i++){

        //testa letras minusculas
        if(isAdigit(palavra[i])){

            digit[i] = palavra[i];
            contador++;
        }
    }


    printf("\nA quantia de letras minusculas e/sao %d\n", contador);
    printf("\nOs caracteres que sao digitos sao ");

    int a = 0;

    while(digit[a] != '\0'){

         if(isAdigit(palavra[a])){

            printf("%c" ,digit[a]);
        }
        a++;
    }

    liberarS(palavra);
    liberarS(digit);
}

void metodo_10(){

    int inicio  = ReadInt("Defina o inicio");
    int fim     = ReadInt("Defina o fim");
    int n       = ReadInt("Defina a quantia de numeros");
    int contIn  = 0;
    int contOu  = 0;
    double* array = (double*)malloc(n * sizeof(double));

    if(!array){

        printf("\nERROR: Memoria nao alocada");
        return;
    }

    for(int i = 0; i < n; i++){

        array[i] = ReadDouble("Valor");
        if(array[i] >= inicio && array[i] <= fim){

            printf("\nDentro: %.3lf ", array[i]);
            contIn++;
        } else if(array[i] < inicio || array[i] > fim){
            printf("\nFora: %.3lf", array[i]);
            contOu++;
        }
    }
}


void metodo_11(){

    char str[50];
    int cont = 0;

    fgets(str, 50, stdin);

    for(int i = 0; i < strlen(str); i++){

        if(str[i] >= 'A' && str[i] <= 'Z'){

            if(str[i] > 'L' && str[i] <= 'Z'){

                cont++;
            }
        }
    }

    printf("Existem %d letras maiores que L maiusculo\n", cont);
}


int ContarLetrasMl(char* str){

    int cont = 0;

    for(int i = 0; i < strlen(str); i++){

        if(str[i] >= 'A' && str[i] <= 'Z'){

            if(str[i] > 'L' && str[i] <= 'Z'){

                cont++;
            }
        }
    }
    return cont;
}


void metodo_12(){

    char str[50];

    fgets(str, 50, stdin);
    int cont = ContarLetrasMl(str);
    printf("Existem %d letras que satifazem a condicao", cont);
}

void MostrarMaiorL(char* str){

    int tamanho = strlen(str);

    for(int i = 0; i < tamanho; i++){

        if(str[i] >= 'A' && str[i] <= 'Z'){

            if(str[i] > 'L' && str[i] <= 'Z'){

                printf("%c ", str[i]);
            }
        }
    }
    printf("\n");
}

void metodo_13(){

    char str[50];

    fgets(str, 50, stdin);

    MostrarMaiorL(str);
}

void MostrarMmMaiorL(char* str){
    
    int tamanho = strlen(str);
    int cont = 0;

    for(int i = 0; i < tamanho; i++){

        if((str[i] >= 'A' && str[i] <= 'Z') ||
            str[i] >= 'a' && str[i] <= 'z'){

            if(str[i] > 'L' && str[i] <= 'Z'){

                cont++;

            } else if(str[i] > 'l' && str[i] <= 'z'){

                cont++;
            }
        }
    }

    printf("Existem %d letras que satifazem a condicao", cont);
}

void metodo_14(){

    char str[50];

    fgets(str, 50, stdin);

    MostrarMmMaiorL(str);
}

void MostrarMmMaiorLl(char* str){

    int tamanho = strlen(str);

    for(int i = 0; i < tamanho; i++){

        if((str[i] >= 'A' && str[i] <= 'Z') ||
            str[i] >= 'a' && str[i] <= 'z'){

            if(str[i] >= 'A' && str[i] < 'L'){

                printf("%c ", str[i]);

            } else if(str[i] >= 'a' && str[i] < 'l'){

                printf("%c ", str[i]);
            }
        }
    }
}

void metodo_15(){

    char str[50];

    fgets(str, 50, stdin);

    MostrarMmMaiorLl(str);

}

void DigitosPares(char* str){

    int cont = 0;

    for(int i = 0; i < strlen(str) - 1; i++){

        if(str[i] >= '0' && str[i] <= '9'){

            if((int)str[i] % 2 == 0){

                cont++;
            }
        }
    }

    printf("\nExistem %d digitos pares\n", cont);
}

void metodo_16(){

    char str[50];

    fgets(str, 50, stdin);

    DigitosPares(str);
}

void NaoAlfa(char* str){

    for(int i = 0; i < strlen(str) - 1; i++){

        if(!isalnum(str[i])){

            printf("%c ", str[i]);
        }
    }
}

void metodo_17(){

    char str[50];

    fgets(str, 50, stdin);

    NaoAlfa(str);
}

void Alfa(char* str){

    for(int i = 0; i < strlen(str) - 1; i++){

        if(isalnum(str[i])){

            printf("%c ", str[i]);
        }
    }

    printf("\n");
}

void metodo_18(){

    char str[50];

    fgets(str, 50, stdin);

    Alfa(str);
}

void AlfaEmCadaPalavra(char* str){

    int cont = 0;

    for(int i = 0; i < strlen(str); i++){

        if(isalnum(str[i])){

            cont++;
            printf("%c ", str[i]);
        }
    }

    printf("\nExistem %d caracteres que satifazem a condicao", cont);
    printf("\n");
}

void metodo_19(){

    int n = ReadInt("Leia um valor inteiro para ser a quantia de palavras");

    for(int i = 0; i < n; i++){

        char str[50];

        fgets(str, 50, stdin);

        AlfaEmCadaPalavra(str);
    }
}


void metodo_20(){

}


int main (){

    int opcao = 1;

    do{

        printf("\nDigite a opcao: ");
        scanf("%d", &opcao);
        getchar();
        printf("\n");


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

