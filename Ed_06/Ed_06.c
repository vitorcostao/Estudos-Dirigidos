/**
    PUC-Minas - Ci�ncia da Computa��o
    AED1 � Estudo Dirigido 04

    Tema: Introdu��o � programa��o II
    Atividade: Recursividade

    Aluno: Vitor Costa Oliveira Rolla
*/

#include<stdio.h>   // Para entrada e saidas
#include<string.h>  //Para trabalhar cadeia de caracteres
#include<ctype.h>   //Para trabalhar aspectos das strings
#include<stdbool.h> //Para trabalhar condicoes
#include "io.h"     //Uso opcional de leitura de dados

//----------------------------------------------//

void metodo_01a(int x){

    if(x > 0){
        printf("%s%d\n", "Valor = ", x);
        metodo_01a(x - 1);
    }

    //imprime numero em ordem decrescente ate que a condicao seja falsa
}

void metodo_01(){

    metodo_01a(5);
}

void metodo_02a(int x){

    if(x > 0){

        metodo_02a(x - 1);
        printf("%s%d\n", "Valor = ", x);
    }
}

void metodo_02(){

    metodo_02a(5);
}

void metodo_03a(int x){

    if(x > 1){

        metodo_03a(x - 1);
        printf("%s%d\n", "Valor = ", x);

    } else {

        printf("%s\n", "Valor = 1");
    }
}

void metodo_03(){

    metodo_03a(5);
}

void metodo_04a(int x){

    if(x > 1){

        metodo_04a(x - 1);
        printf("%s%d\n", "Valor = ", 2 * (x - 1));

    } else {

        printf("%s\n", "Valor = 1");
    }
}

void metodo_04(){

    metodo_04a(5);
}

void metodo_05a(int x){

    if(x > 1){

        metodo_05a(x - 1);
        printf("%d: %d / %d\n", x, (2 * (x - 1)), (2 * (x - 1) + 1));

    } else {

        printf("%d: %d\n", x, 1);
    }
}

void metodo_05(){

    printf("\n");
    metodo_05a(5);
}

double SomarFracoes(int x){

    double soma = 0.0;

    if(x > 1){

        soma = (2.0 * (x - 1) / (2 * (x - 1) + 1)) + SomarFracoes(x - 1);

    }

    return soma;
}

void metodo_06(){

    double soma = 0.0;

    soma = SomarFracoes(5);

    printf("\nsoma = %.2lf\n", soma);

}

double SomarFracoes2b(int x, double soma, double num, double den){

    if(x > 0){

        printf("%d: %.1lf / %.1lf\n", x, num, den);

        soma = SomarFracoes2b(x - 1, soma + (num / den), num + 2.0, den + 2.0);
    }

    return soma;
}

double SomarFracoes2a(int x){

    double soma = 0.0;

    if(x > 0){

        printf("%d: %.1lf\n", x, 1.0);

        soma = SomarFracoes2b(x - 1, 1.0, 2.0, 3.0);
    }

    return soma;
}

void metodo_07(){

    printf("\n");
    
    double soma = 0.0;

    soma = SomarFracoes2a(5);

    printf("\nsoma = %.2lf\n", soma);
}

int contarDigitos(int x){

    int resposta = 1;

    if(x >= 10){

        resposta = 1 + contarDigitos(x / 10);

    } else {

        if(x < 0){

            resposta = contarDigitos(-x);
        }
    }

    return resposta;
}

void metodo_08(){

    printf("\n");
    printf("Digitos(%3d) = %d\n", 123, contarDigitos(123));
    printf("Digitos(%3d) = %d\n", 1, contarDigitos(1));
    printf("Digitos(%3d) = %d\n", -10, contarDigitos(-10));
}

int fibonacci(int x){

    int resposta = 0;

    if(x == 1 || x == 2){

        resposta = 1;

    } else {

        if(x > 1){

            resposta = fibonacci(x - 1) + fibonacci(x - 2);
        }
    }

    return resposta;
}

void metodo_09(){

    printf ( "fibonacci (%d) = %d\n", 1, fibonacci ( 1 ) );
    printf ( "fibonacci (%d) = %d\n", 2, fibonacci ( 2 ) );
    printf ( "fibonacci (%d) = %d\n", 3, fibonacci ( 3 ) );
    printf ( "fibonacci (%d) = %d\n", 4, fibonacci ( 4 ) );
    printf ( "fibonacci (%d) = %d\n", 5, fibonacci ( 5 ) );
}

int contarMinusculas(char* cadeia, int x){
    
    int resposta = 0;
    
    if(0 <= x && x < strlen(cadeia)){
        
        if(cadeia[x] >= 'a' &&
           cadeia[x] <= 'z'){
            
            resposta = 1;
        }
        
        resposta = resposta + contarMinusculas(cadeia, x + 1)
    }
    
    return resposta;
}

void metodo_10(){
    
    printf ( "Minusculas (\"abc\",0) = %d\n", contarMinusculas ( "abc", 0 ) );
    printf ( "Minusculas (\"aBc\",0) = %d\n", contarMinusculas ( "aBc", 0 ) );
    printf ( "Minusculas (\"AbC\",0) = %d\n", contarMinusculas ( "AbC", 0 ) );

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
