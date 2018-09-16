#include <cstdlib>
#include <iostream>

#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions {
    int operator()(int* coordinates, int* sizes, int dimensions)
    {
    }
    };

struct Integer {
    typedef int T;
    typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[]) {
    int dimensions = 2;
    int dimensionSizes[dimensions]={3,2};
    int coordinates[dimensions]={0,1};
    Vector<Integer> array(dimensions, dimensionSizes);
    array.set(3, coordinates);
    cout<<array.get(coordinates);
    array.set(7, coordinates);
    cout<<array.get(coordinates);
    return EXIT_SUCCESS;
}