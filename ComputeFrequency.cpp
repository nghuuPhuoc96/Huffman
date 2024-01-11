#include "ComputeFrequency.h"
ComputeFrequency::ComputeFrequency()
{
    for (int i = 0; i < NUMBER_OF_CHARACTER; i++)
    {
        listTable.push_back(probabilityTable());
        listTable[i].character = INVALID_CHARACTER;
        listTable[i].probabilityAppearance = 0;
    }
}
ComputeFrequency::~ComputeFrequency()
{
}

std::vector<probabilityTable> ComputeFrequency::g_ComputeFrequency_FrequencyProcessing(std::string p_string)
{
    std::vector<probabilityTable> retProbability;
    int numberOfCharInString = 0;
    int i, j, k = 0;;
    int indexAtMax = 0;
    
    // Counting method
    for (i = 0; i < p_string.length(); i++)
    {
        listTable[p_string[i]].character = p_string[i];
        listTable[p_string[i]].probabilityAppearance += (float)(1.0/(float)(p_string.length()));
    }

    for (i = 0; i < listTable.size(); i++)
    {
        if (listTable[i].character != INVALID_CHARACTER)
        {
            retProbability.push_back(probabilityTable());
            retProbability[k].character = listTable[i].character;
            retProbability[k].probabilityAppearance = listTable[i].probabilityAppearance;
            k += 1;
        }
    }


    // Insert sort
    //
    // Soft: maximum -> minimum
    for (i = 1; i < retProbability.size(); i++)
    {
        float key = retProbability[i].probabilityAppearance;
        char bkChar = retProbability[i].character;

        // Insert A[i] into the sorted subarray
        j = i - 1;
        while (j >= 0 && retProbability[j].probabilityAppearance < key)
        {
            retProbability[j+1].probabilityAppearance = retProbability[j].probabilityAppearance;
            retProbability[j+1].character = retProbability[j].character;
            j = j - 1;
        }
        retProbability[j+1].probabilityAppearance = key;
        retProbability[j+1].character = bkChar;
    }

    return retProbability;
}