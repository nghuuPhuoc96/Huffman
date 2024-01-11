#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <cstdlib>
#include "ComputeFrequency.h"
#include "Huffman.h"

int main()
{
    std::string tmp = "abcdasdfjdiukaskdjac";
    // Option 2: use const char*
    char *char_ptr = new char(tmp.length() + 1);
    strcpy(char_ptr, tmp.c_str());

    //ComputeFrequency testTmp;
    //testTmp.g_ComputeFrequency_FrequencyProcessing("ABCDABABAADBC");

    Huffman testTmp;
    testTmp.g_Huffman_Encoding("ABCDABABAADBC");

    
    // Huffman algothrism

    // std::cout << "String after one finding: " << tmp << std::endl;
    std::cout << "Done" << std::endl;
}