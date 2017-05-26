/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaC.h
 * Author: johana
 *
 * Created on 16 de mayo de 2017, 10:24 AM
 */

#ifndef LISTAC_H
#define LISTAC_H

class ListaC {
public:
    ListaC();
    ListaC(const ListaC& orig);
    virtual ~ListaC();
    
    void insertIntoListC(char value);
    void printListC();
    void deletedIntoList(char value);
private:
    
    struct node{ //Struct objeto que se define en una clase y carece de metodos
        char data;
        struct node *nextPtr;//indicamos que * es un puntero
    };
    
     //variables
    typedef struct node NODE;//para cuando definamos los tipos nodos sean en mayuscula
    typedef NODE *NODEPTR;
    
    NODEPTR headNode;//head o start inicio del node
    NODEPTR tailNode;
};

#endif /* LISTAC_H */

