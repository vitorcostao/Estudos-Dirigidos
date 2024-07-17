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


void metodo_01a(int x){

    int y = 1;

    while(y <= x){

        printf("%s%d\n", "Valor = ", y);
        y++;
    }
}

void metodo_01(){

    metodo_01a(5);
}


void metodo_02a(int x){

    int y = 1;
    int z = 2;

    while(y <= x){

        printf("%d: %d\n", y, z);
        z = z + 2;
        y++;
    }
}

void metodo_02(){

    metodo_02a(5);
}

void metodo_03a(int x){

    int y = 1;
    int z = 0;

    while(y <= x){

        z = 2*y;
        printf("%d: %d\n", y, z);
        y++;
    }
}

void metodo_03(){

    metodo_03a(5);
}

void metodo_04a(int x){

    int y = x;
    int z = 0;

    while(y > 0){

        z = 2*y;
        printf("%d: %d\n", y, z);
        y--;
    }
}

void metodo_04(){

    metodo_04a(5);
}

void metodo_05a(int x){

    for(int i = x; i > 0; i--){

        printf("%d: %d\n", i, (2*i));
    }
}

void metodo_05(){

    metodo_05a(5);
}

int SomarValores(int x){

    int soma = 1;

    for(int i = 0; i < (x - 1); i++){

        printf("%d: %d\n", i, (2*i));
        soma = soma + (2 * i);
    }

    return soma;
}

void metodo_06(){

    int soma = SomarValores(5);
}

double somarFracao(int x){

    double soma = 1.0;
    double num  = 0.0;
    double dem  = 0.0;

    for(int i = 0; i <= (x - 1); i++){

        num = 1.0;
        dem = (2.0 * i + 1);

        printf ( "%d: %7.4lf/%7.4lf = %lf\n", i, num, dem, (num/dem) );

        soma = soma + (1.0)/(2.0 * i);
    }

    return soma;
}

void metodo_07(){

    somarFracao(5);
}

double somarFracao2(int x){

    double soma = 1.0;
    double numerador  = 0.0;
    double denominador  = 0.0;

    printf ( "%d: %7.4lf/%7.4lf = %lf\n", 0, 1.0, 1.0, soma);

    for(int i = 1; i <= (x - 1); i++){

        numerador = 2.0 * (i - 1);
        denominador = 2.0 * i;

        printf ( "%d: %7.4lf/%7.4lf = %lf\n", i, numerador, denominador, (numerador/denominador) );

        soma = soma + numerador / denominador;
    }

    return soma;
}

void metodo_08(){

    somarFracao2(5);
}

double somarFracao3(int x){

    double soma = 1.0;

    printf ( "%d: %7.4lf/%7.4lf = %lf\n", 1, 1.0, 1.0, soma);

    for(int i = 0; i < x; i++){

        printf ( "%d: %7.4lf/%7.4lf = %lf\n", i + 1, (2.0 * i), (2.0 * i + 1), (2.0 * i )/(2.0 * i + 1));

        soma = soma + (2 * i) / (2 * (i + 1));
    }

    return soma;
}

void metodo_09(){

    somarFracao3(5);
}

int multiplicar(int x){

    int produto = 1;

    for(int i = 1; i <= x; i++){

        printf("%d: %d\n", i, (2 *i - 1));

        produto = produto * (2 * i - 1);
    }

    return produto;
}

void metodo_10(){

    printf("%s%d\n", "Produto = ", multiplicar(5));
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
