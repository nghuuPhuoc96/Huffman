#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <iostream>
#include <stdint.h>
#include <vector>
#include "ComputeFrequency.h"
#include "Structure.h"
#include "Queue.h"

class Huffman : public Queue, public ComputeFrequency{
private:
    Node *root;
    encoding var_Queue_encoding[NUMBER_OF_CHARACTER];

public:
    Huffman();
    ~Huffman();
    void g_Huffman_NodeCreate(std::string p_string);
    void g_Huffman_Procedure();
    void g_Huffman_Encoding(std::string p_string);
    void g_Huffman_Decoding();
};

#endif