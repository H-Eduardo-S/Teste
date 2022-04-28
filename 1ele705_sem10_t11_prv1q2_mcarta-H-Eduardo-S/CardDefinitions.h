#pragma once
#ifndef __cardDef
#define __cardDef

// card structure definition                  
typedef struct {
    const char* face; // define pointer face   
    const char* suit; // define pointer suit
    unsigned int face_number; // Define o n�mero da face da carta
    unsigned int suit_number; // Define o n�mero do naipe
} Card; // end struct card  

#endif