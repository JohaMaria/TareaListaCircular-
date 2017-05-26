/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaC.cpp
 * Author: johana
 * 
 * Created on 16 de mayo de 2017, 10:24 AM
 */

#include "ListaC.h"
#include <iostream>
#include <malloc.h>
#include <stdlib.h>

ListaC::ListaC() {
}

ListaC::ListaC(const ListaC& orig) {
}

ListaC::~ListaC() {
}
void ListaC::insertIntoListC(char value) {

    //variables
    NODEPTR newPtr, tempPtr, previousPtr;

    newPtr = (NODEPTR) malloc(sizeof (NODE)); //asignacion de memoria m=memory alloc = allocation
    newPtr-> data = value;
   
    tempPtr = headNode;


    if (tempPtr == NULL) {
        headNode = newPtr;
        tailNode=newPtr;
        tailNode->nextPtr = headNode;
    } else{
        tailNode->nextPtr = newPtr;
        newPtr->nextPtr = headNode;
        headNode = newPtr;
//        newPtr->nextPtr = headNode;
//        headNode = newPtr;
//        tailNode->nextPtr=  newPtr;
    
    }
    
    

}
void ListaC::deletedIntoList(char value){
     NODEPTR newPtr, tempPtr, previousPtr;

    newPtr = (NODEPTR) malloc(sizeof (NODE)); //asignacion de memoria m=memory alloc = allocation
    newPtr-> data = value;
   
    tempPtr = headNode;
 
    if(tempPtr !=NULL){
        while(tempPtr->data == value){
            previousPtr = tempPtr;
        }
        if(previousPtr == NULL){
            this->headNode = tempPtr->nextPtr;
        }else{
            if(tempPtr == tailNode){
                tailNode = previousPtr;
                previousPtr->nextPtr = headNode;
            }else{
                previousPtr->nextPtr = tempPtr->nextPtr;
            }
        }
    
    }
}

void ListaC::printListC() {
    //nodo temporal
    NODEPTR tempNode = headNode;
    bool f = true;
    if (tempNode != NULL) {
        while (tempNode->nextPtr != headNode || f) {
            printf("%c--> ", tempNode->data);
            tempNode = tempNode->nextPtr;
            f = false;
        }//while
        printf("NULL  ");
    } else {
        printf("The list is empty.  ");
    }

}




