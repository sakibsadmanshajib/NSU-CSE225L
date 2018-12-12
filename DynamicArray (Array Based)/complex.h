#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    public:
        Complex();
        Complex(double, double);
        Complex operator+(Complex);
        Complex operator*(Complex);
        bool operator!=(Complex);
        void Print();

    protected:

    private:
        double Real, Imaginary;
};

#endif // COMPLEX_H
