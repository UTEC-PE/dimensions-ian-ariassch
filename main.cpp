#include <cstdlib>
#include <iostream>

#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions {
    int operator()(int* coordinates, int* sizes, int dimensions)
    {
        // TODO
    }
};

struct Integer {
       typedef int T;
       typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[])
{

    int dimensionSizes[2]={3,2};
    int dimensions = 2;
    int coordinates[2]={0,1};
    Vector<Integer> array(dimensions, dimensionSizes);
    array.set(3, coordinates);
    return 0;
}
