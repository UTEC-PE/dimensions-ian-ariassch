#ifndef VECTOR_H
#define VECTOR_H

template <typename Tr>
class Vector {
public:
    typedef typename Tr::T T;
    typedef typename Tr::Operation Operation;

private:
    T* data;
    int dataSize;
    Operation convertir;
    int dimensions;
    int* dimensionSizes;

public:

    Vector() : data(NULL) {};

        Vector(int dimensions, int* dimensionSizes) : dimensions(dimensions), dimensionSizes(dimensionSizes){
        dataSize=1;
        for(int i = 0; i < dimensions; i++)
        {
            dataSize*=*dimensionSizes;
            dimensionSizes++;
        }
            data = new T [dataSize];
        }

        void set(T datum, int* coordinates)
        {
            int pos = convertir(coordinates,dimensionSizes,dimensions);
            data[pos] = datum;
        };

        T get(int* coordinates)
        {
            int pos = convertir(coordinates,dimensionSizes,dimensions);
            return data[pos];
        };

        ~Vector(){
            delete(data);
        }
    };

#endif