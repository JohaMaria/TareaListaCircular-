/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johana
 *
 * Created on 16 de mayo de 2017, 10:23 AM
 */

#include <cstdlib>

#include "ListaC.h"

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
   ListaC *myList = new ListaC();
    
    
    myList->insertIntoListC('a');
    myList->insertIntoListC('b');
    myList->insertIntoListC('c');
    myList->printListC();
    
     char a,b,c,d,e;
     
//    cout <<"Ingrese el valor que desea insertar"<<endl;
//    cin>>a;
//    myList->insertIntoListC(a);
//    myList->printListC();
    
    return 0;
}

