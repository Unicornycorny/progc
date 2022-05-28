#ifndef LAB5_MASSIV_H
#define LAB5_MASSIV_H
#include "Exception.h"

    template <int N, typename T>
    class massiv {
    public:
        massiv();
        ~massiv();
        void set(int n, const T& value);
        T getI(const int& i);
    private:
        int top;
        T* array;
    };

template <int N, typename T>
massiv<N, T>::massiv() {
    array = new T[N];
    top = N;
}
template <int N, typename T>
massiv<N, T>::~massiv() {
    delete[] array;
}
template <int N, typename T>
void massiv<N, T>::set(int n, const T& value) {
    if (top == N) {
        throw Exception("ERROR. Out of range", 1);
    }
    else {
        array[n] = value;
    }
}

template <int N, typename T>
T massiv<N, T>::getI(const int& i) {
    if (i < 0 || i >= top)
        throw Exception("ERROR. Out of range", 1);
    else
        return array[i];
}

#endif //LAB5_MASSIV_H
