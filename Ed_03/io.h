#ifndef _IO_H_
#define _IO_H_

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//Leitura de dados

int ReadInt(const char* sentenca){

    int x;

    printf("%s: ", sentenca);
    scanf("%d", &x);
    getchar();

    return x;
}

double ReadDouble(const char* sentenca){

    double x;

    printf("%s: ", sentenca);
    scanf("%lf", &x);
    getchar();

    return x;
}

char ReadChar(const char* sentenca){

    char c;

    printf("%s: ", sentenca);
    scanf("%c", &c);
    getchar();

    return c;

}

char* ReadString(const char* sentenca){

    char* str = (char*)malloc(100 * sizeof(char));

    if(!str){

        printf("\nERROR: Nao foi possivel ler palavra\n");
        return NULL;
    }

    printf("%s\n", sentenca);
    fgets(str, 100, stdin);

    return str;
}


void liberarS(char* str){

    if(str){

        free(str);
    }
}

#endif
