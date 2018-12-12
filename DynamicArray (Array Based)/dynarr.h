#ifndef DYNARR_H
#define DYNARR_H

template <class T>

class dynArr
{
    public:
        dynArr(int);
        ~dynArr();
        void setValue(int, T);
        T getValue(int);

    protected:

    private:
        T *data;
        int size;
};

#endif // DYNARR_H
