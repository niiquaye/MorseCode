#pragma once

#include <cstring>
#include <unordered_map>

//Purpose: A library to convert words to morse code


class MorseCode {


    private:
        

        //create hash map to link characters to morse code
       std::unordered_map<char, std::string> morse_map;
        
        std::string mCode;
        
        
    public:
        //constructor
        MorseCode();
        

        //function to convert  Text to Morse Code
        void converter (std::string word);
        
        std::string getMorseCode();

};
