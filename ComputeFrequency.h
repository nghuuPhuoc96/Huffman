#ifndef COMPUTEFREQUENCY_H
#define COMPUTEFREQUENCY_H

#include <stdio.h>
#include <cstring>
#include <iostream>
#include <vector>
#include "Structure.h"
#include "Huffman.h"

class ComputeFrequency //: public Huffman
{
private:
    std::vector<probabilityTable> listTable;
    encoding p_data_encoding[NUMBER_OF_CHARACTER];
    decoding p_data_decoding[NUMBER_OF_CHARACTER];

public:
    ComputeFrequency();
    ~ComputeFrequency();

    std::vector<probabilityTable> g_ComputeFrequency_FrequencyProcessing(std::string p_string);

    //probabilityTable *g_ComputeFrequency_get_probabilityTable()
    //{
    //    
    //}

    void g_ComputeFrequency_Encoding_File() {}
    void g_ComputeFrequency_Decoding_File() {}
    void g_ComputeFrequency_Read_File() {}
    void g_ComputeFrequency_Write_File() {}
};

#endif