#include "Huffman.h"
Huffman::Huffman()
{
    
}
Huffman::~Huffman()
{
}
void Huffman::g_Huffman_NodeCreate(std::string p_string)
{
    // Create every single node
    Node *node;
    int k = 0;
    std::vector<probabilityTable> l_probabilityTable = g_ComputeFrequency_FrequencyProcessing(p_string);
    for (int i = 0; i < l_probabilityTable.size(); i++)
    {
        node = new Node;
        // Convert from raw data to Node
        //
        //
        //
        // Only leaf had character
        node->alphabet = l_probabilityTable[i].character;
        node->frequency = l_probabilityTable[i].probabilityAppearance;
        node->left = nullptr;
        node->right = nullptr;
        //
        //
        //
        // add to array of pointer, managed by Queue class
        g_Queue_Insert(node);
    }
}
void Huffman::g_Huffman_Procedure()
{
    // Huffman processing
    //
    //
    //
    Node *x, *y; // store two smallest element of frequency
    Node *z;     // new node
    //
    //
    //
    while (g_Queue_TopIs() != 1)
    {
        // Process until there is only one element in Queue
        // That is the element with frequency is 1 (100%)
        //
        //
        //
        z = new Node;
        x = g_Queue_Deletion();
        y = g_Queue_Deletion();
        //
        //
        //
        z->alphabet = INVALID_CHARACTER;
        z->left = x;
        z->right = y;
        z->frequency = x->frequency + y->frequency;
        //
        //
        //
        // Insert z node to Queue
        g_Queue_Insert(z);
        //
        //
        //
        // Sort Queue in decreasing order
        g_Queue_Sort();
    }
    //
    //
    //
    // root is at top element in Queue
    root = g_Queue_GetNode(g_Queue_TopIs());
}

void Huffman::g_Huffman_Encoding(std::string p_string)
{
    g_Huffman_NodeCreate(p_string);
    g_Huffman_Procedure();
}
