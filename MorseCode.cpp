#include "MorseCode.h"
#include <iostream>
#include <algorithm>

MorseCode::MorseCode(){
    // instantiate hash map with key and value pair
    
    morse_map['A'] = ".- ";
    morse_map['B'] = "-... ";
    morse_map['C'] = "-.-. ";
    morse_map['D'] = "-.. ";
    morse_map['E'] = ". ";
    morse_map['F'] = "..-. ";
    morse_map['G'] = "--. ";
    morse_map['H'] = ".... ";
    morse_map['I'] = ".. ";
    morse_map['J'] = ".--- ";
    morse_map['K'] = "-.- ";
    morse_map['L'] = ".-.. ";
    morse_map['M'] = "-- ";
    morse_map['N'] = "-. ";
    morse_map['O'] = "--- ";
    morse_map['P'] = ".--.";
    morse_map['Q'] = "--.-";
    morse_map['R'] = ".-. ";
    morse_map['S'] = "... ";
    morse_map['T'] = "- ";
    morse_map['U'] = "..- ";
    morse_map['V'] = "...- ";
    morse_map['W'] = ".-- ";
    morse_map['X'] = "-..- ";
    morse_map['Y'] = "-.-- ";
    morse_map['Z'] = "--.. ";
    morse_map['1'] = ".---- ";
    morse_map['2'] = "..--- ";
    morse_map['3'] = "...-- ";
    morse_map['4'] = "....- ";
    morse_map['5'] = "..... ";
    morse_map['6'] = "-.... ";
    morse_map['7'] = "--... ";
    morse_map['8'] = "---.. ";
    morse_map['9'] = "----. ";
    morse_map['0'] = "----- ";
    //space between characters represents a new word -thus each word is seperated by 7 units 
    morse_map[' '] = "       ";
   
   
   
    
}




void MorseCode::converter(std::string word){
   
   
    //convert all characters to uppercase
    transform(word.begin(), word.end(), word.begin(), toupper);
    //loop through each character and find the corresponding morse code
    std::cout<<"Morse Code for: "<<word<<std::endl;
    for ( char _characters : word){
        
        morse_map[_characters];
        //print out the morse code character
        std::cout<<morse_map[_characters];
        
        mCode = mCode + morse_map[_characters];
        
    }
    //std::cout<<morse_code;
   std::cout<<" "<<std::endl;
    
}

std::string MorseCode::getMorseCode(){
    return mCode;
}








