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

        int dimensions;
        int* dimensionSizes;

    public:
        Vector() : data(NULL) {};

        Vector(int dimensions, int* dimensionSizes) : dimensions(dimensions), dimensionSizes(dimensionSizes) {
          dataSize=1;
            for(int i = 0; i < dimensions; i++)
            {
              dataSize*=*dimensionSizes;
              dimensionSizes++;
              std::cout<<"Data Size: "<<i<<" "<<dataSize<<std::endl;
            }
        }

        void set(T datum, int* coordinates)
        {
          for(int i = 0; i < dimensions; i++)
          {
          std::cout<<coordinates[i]<<std::endl;
          }
        };

        T get(int* coordinates); // TODO
};

#endif
