    //
    // Created by elson.sousa on 14/01/2025.
    //

    #ifndef FILAESTATICA_H
    #define FILAESTATICA_H

    #define MAX 2 //define tamanho da fila estatica

    struct aluno { //definindo a estrutura aluno
        int matricula;
        char nome[20];
        float n1, n2, n3;
    };

    typedef struct fila Fila;

    Fila *cria_fila();
    void libera_fila(Fila *fi);
    int consulta_fila(Fila *fi, struct aluno *al);
    int fila_vazia(Fila *fi);
    int insere_fila(Fila *fi, struct aluno al);







    #endif //FILAESTATICA_H
