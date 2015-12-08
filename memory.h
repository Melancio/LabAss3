/*
 * File:   memory.h
 * Author: Melance Gaudreault 4403946
 */
#ifndef	memory
#define memory

#include <stdio.h> 	
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>


using namespace std;
using std::string;


class memory
{
    private:
    int *mem =  new int [100];

    public:

    void store (int address, int value){
        mem[address] = value;
    }

    int retrieve (int address){
        return mem[address];
    }

    void copy (int start, int size, int dest){
        for (int i = 0; i < size; i++){
        if ((dest+i) == 100) break;
        mem[dest+i] = mem[start+i];
        }

    }

    void dump (int start, int last){
        int tmp = 1;
        while (start <= last){
            cout << mem[start] << "	";
            start++;
            if (tmp == 10){
                cout << endl;
                tmp = 0;
            }
            tmp++;
        }
    }

    void dump (){
    int tmp = 1;
        for (int i = 0; i < 100; i++){
            cout << mem[i] << "	";
            if (tmp == 10){
                cout << endl;
                tmp = 0;
            }
            tmp++;
        }
    }


} mem;



#endif
