#include "Test.h"
#include <iostream>
using namespace std;

bool numberExists(vector<int> ordered_numbers,int x,int inicio, int fin)
{
    if(inicio>fin)
    {
        return false;
    }

    int medio = (inicio + fin)/2;
    if(ordered_numbers[medio]<x)
    {
        return numberExists(ordered_numbers,x,medio+1,fin);
    }
    else if(ordered_numbers[medio]>x)
    {
        return numberExists(ordered_numbers,x,inicio,medio-1);
    }
    else
    {
        return true;
    }
}

bool numberExists(vector<int> ordered_numbers, int x)
{
    return numberExists(ordered_numbers,x,0,ordered_numbers.size()-1);
}

int main ()
{
    test();
    return 0;
}
