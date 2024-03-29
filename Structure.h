#ifndef STRUCTURE_H
#define STRUCTURE_H

#include <stdint.h>

#define NUMBER_OF_CHARACTER 127
#define INVALID_FREQUENCY 2
#define INVALID_CHARACTER 127

struct Node
{
    char alphabet;
    float frequency;
    Node *left;
    Node *right;
};

struct probabilityTable
{
    char character;
    float probabilityAppearance;
};

struct encoding
{
    char character;
    uint8_t encodingHuffman;
};

struct decoding
{
    char character;
    uint8_t decodingHuffman;
};
#endif