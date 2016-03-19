#ifndef MERGESORT_H
#define MERGESORT_H


class MergeSort
{
    public:
        MergeSort();
      int mergeSort(int* ar,int ar_size);
        void merge(int* left,int *right,int* ar,int left_size,int right_size,int ar_size);
    protected:
    private:
};

#endif // MERGESORT_H
