#ifndef QUICKSORT_H
#define QUICKSORT_H


class QuickSort
{
    public:
        QuickSort();
        void quickSort(int *ar,int p,int q);
        int partition(int *ar,int p,int q);
        void print();
    protected:
    private:
};

#endif // QUICKSORT_H
