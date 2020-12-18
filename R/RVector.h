#pragma once
#include "platform.h"
template <typename T>
class RVector {
private:
    T* data;
    size_t nowSize;
    size_t nowIndex;
    void expand ();
public:
    /*
     * Init a vector with a initial size
     * @param size initial size of the vector
     */
    RVector (size_t size);
    /*
     * Init a vector with a initial size and value
     * @param num initial size of the vector
     * @param value initial value of each element
     */
    RVector (size_t num,T value);
    /*
     * Init a vector with a determined array
     * @param array source array
     */
    template<size_t N>
    RVector (T array[N]);
    /*
     * Push a element to the end of the vector
     * @param element Value to push
     */
    void push_back (T value);
};
template <typename T>
RVector<T>::RVector (size_t size):nowSize(size),nowIndex(size - 1) {
    this->data = RMalloc (size * sizeof (T));
}

template<typename T>
RVector<T>::RVector(size_t num, T value):nowSize(num),nowIndex(num-1) {
    this->data = RMalloc (size * sizeof (T));
    for (size_t i = 0;i < num;++ i) {
        this->data = value;
    }
}
template<typename T>
template<size_t N>
RVector<T>::RVector (T array[N]):nowSize(N),nowIndex(N-1) {
    this->data = RMalloc (N * sizeof (T));
    for (size_t i = 0;i < N;++ i) {
        this->data [i] = array [i];
    }
}
template<typename T>
void RVector<T>::push_back (T value) {
    if (this->nowIndex <= this->nowSize) {  //There is no enough place for others

    }
}
template<typename T>
void RVector<T>::expand () {
    size_t newSize = this->nowSize + this->nowSize / 2; //扩增因子为1.5
    T* tmpPtr = RMalloc (newSize * sizeof (T));
    // 开始拷贝
    RMemcpy (tmpPtr,this->data,sizeof(T) * this->nowSize);
    RFree (this->data);
    this->data = tmpPtr;
    this->nowSize = newSize;
}