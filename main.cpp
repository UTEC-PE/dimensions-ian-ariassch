#include <cstdlib>
#include <iostream>

#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions {
    int operator()(int* coordinates, int* sizes, int dimensions) {
        int acum=1;
        int sum=coordinates[0];
        for (int i = 1; i < dimensions; i++) {
            acum*=sizes[i-1];
            sum+=acum*coordinates[i];
        }
        return sum;
    }
    };

struct Integer {
    typedef int T;
    typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[]) {
    int dato, coordx, coordy, coordz;
    Dimensions<Integer> dimensions1;
    int dimensions = 3;
    int dimensionSizes[dimensions]={3,3,3};
    int coordinates[dimensions]={};
    Vector<Integer> array(dimensions, dimensionSizes);
    for(int x = 0; x <= 2; x++){
        for(int y = 0; y <= 2; y++){
            for(int z = 0; z <= 2; z++){
                coordinates[0] = x;
                coordinates[1] = y;
                coordinates[2] = z;
                cout<<"Inserte dato para las coordenadas "<<"("<<x<<","<<y<<","<<z<<")"<<":  ";
                cin>>dato;
                array.set(dato,coordinates);}}}
    cout<<"Ingrese coordenada x: ";
    cin>>coordx;
    cout<<"Ingrese coordenada y: ";
    cin>>coordy;
    cout<<"Ingrese coordenada z: ";
    cin>>coordz;
    coordinates[0]=coordx;
    coordinates[1]=coordy;
    coordinates[2]=coordz;
    cout<<"\n"<<"La posicion en el vector es: ";
    cout<<"\n"<<dimensions1.operator()(coordinates, dimensionSizes, dimensions);
    return EXIT_SUCCESS;
}