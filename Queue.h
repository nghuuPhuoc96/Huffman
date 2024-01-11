#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <vector>
// #include "ComputeFrequency.h"
//  #include "Huffman.h"
#include "Structure.h"

class Queue
{
private:
    //Node *listNode[NUMBER_OF_CHARACTER];
    std::vector<Node*> listNode;
    uint8_t top;

public:
    Queue();
    ~Queue();

    void g_Queue_Insert(Node *p_node);
    Node *g_Queue_Deletion();
    void g_Queue_Sort();
    uint8_t g_Queue_TopIs();
    Node *g_Queue_GetNode(int k);
};

#endif