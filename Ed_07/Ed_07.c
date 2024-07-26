/**
    PUC-Minas - Ci�ncia da Computa��o
    AED1 � Estudo Dirigido 04

    Tema: Introdu��o � programa��o III
    Atividade: Arquivos em C

    Aluno: Vitor Costa Oliveira Rolla
*/

#include<stdio.h>   // Para entrada e saidas
#include<string.h>  //Para trabalhar cadeia de caracteres
#include<ctype.h>   //Para trabalhar aspectos das strings
#include<stdbool.h> //Para trabalhar condicoes
#include "io.h"     //Uso opcional de leitura de dados

#define STR_SIZE 100

//----------------------------------------------//

void WriteInts(char* filename, int x){

    FILE* arquivo = fopen(filename, "wt");

    if(!arquivo){

        printf("\nERROR: Nao foi possivel abrir o arquivo");
        return;
    }

    for(int i = 0; i < x; i++){

        fprintf(arquivo, "\n%d", i);
    }

    fclose(arquivo);
}

void metodo_01(){

    printf("\n");

    WriteInts("DADOS.TXT", 5);

    printf("\n");
}

void ReadInts(char* filename){

    FILE* arquivo = fopen(arquivo, "rt");
    int x = 0;

    if(!arquivo){

       printf("\nERROR: Nao foi possivel abrir o arquivo");
       return;
    }

    fscanf(arquivo, "\n%d", &x);

    while(!feof(arquivo)){

        printf("\n%d", x);

        fscanf(arquivo, "\n%d", &x);
    }

    fclose(arquivo);
}

void metodo_02(){

    printf("\n");

    ReadInts("DADOS.TXT");

    printf("\n");    
}

void WriteDoubles(char* filename, int x){

    FILE* arquivo = fopen(filename, "wt");

    if(!arquivo){

        printf("\nERROR: Nao foi possivel abrir o arquivo");
        return;
    }

    fprintf(arquivo, "%d\n", x);

    for(int i = 0; i < x; i++){

        fprintf(arquivo, "\n%.1lf", (i*0.5));
    }

    fclose(arquivo);
}

void metodo_03(){

    printf("\n");

    WriteDoubles("DADOS2.TXT", 10);

    printf("\n");  
}

void ReadDoubles(char* filename){

    FILE* arquivo = fopen(arquivo, "rt");

    int x = 0;
    int y = 1;
    double z = 0.0;

    if(!arquivo){

       printf("\nERROR: Nao foi possivel abrir o arquivo");
       return;
    }

    fscanf(arquivo, "\n%d", &x);

    while(!feof(arquivo) && y <= x){

        fscanf(arquivo, "\n%.1lf", &z);

        printf("\n%2d: %.1lf", y, z);

        y++;
    }

    fclose(arquivo);
}

void metodo_04(){

    printf("\n");

    ReadDoubles("DADOS2.TXT");

    printf("\n");
}

void WriteText(char* filename){

    FILE* arquivo  = fopen(filename, "wt");
    char* linha    = (char*)malloc(STR_SIZE * sizeof(char));

    if(!linha){

        printf("\nERROR: Nao foi possivel alocar memoria");
        return;
    }

    printf("\nGravar linhas(para terminar, entrar com /PARAR/)");

    do{
       
       strcpy(linha, ReadString(""));
       fprintf(arquivo, "\n%s", linha);

    } while(strcmp(linha, "PARAR"));

    fclose(arquivo);
    free(linha);
}

void metodo_05(){

    printf("\n");

    WriteText("DADOS3.TXT");

    printf("\n");
}

void metodo_06(){

}

void metodo_07(){

}

void metodo_08(){

}

void metodo_09(){

}

void metodo_10(){

}

void metodo_11(){

}

void metodo_12(){

}

void metodo_13(){

}

void metodo_14(){

}

void metodo_15(){

}

void metodo_16(){

}

void metodo_17(){

}

void metodo_18(){

}

void metodo_19(){

}


void metodo_20(){

}

void metodo_21(){

}

void metodo_22(){

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

        case 21:
            metodo_21();
            break;

        case 22:
            metodo_22();
            break;

        default:
            printf("Opcao invalida . . .");
            break;
        }

    } while(opcao != 0);

    return 0;
}
