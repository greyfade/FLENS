#include <complex>
#include <iostream>
#include <flens/flens.cxx>

using namespace flens;
using namespace std;

int
main()
{
    typedef GeMatrix<FullStorage<double> >             RealGeMatrix;
    typedef GeMatrix<FullStorage<complex<double> > >   ComplexGeMatrix;

    RealGeMatrix   A(3,3), B(3,3), C(3,3);
    A = 1, 2, 3,
        4, 5, 6,
        7, 8, 9;

    B = 9, 1, 8,
        2, 7, 3,
        6, 4, 5;

    RealGeMatrix::IndexVariable i, j;
    C(i,j) = A(i,j) * B(j,i);

    cout << "C = " << C << endl;


    ComplexGeMatrix  V(3,3), W(3,3), Z(3,3);
    V(i,j) = Complex(A(i,j), B(i,j));
    W(i,j) = Complex(B(i,j), A(i,j));

    Z(i,j) = V(i,j) + W(i,j);

    cout << "V = " << V << endl;
    cout << "W = " << W << endl;
    cout << "Z = " << Z << endl;

    RealGeMatrix X(3,3);
    X(i,j) = Real(Z(i,j));

    RealGeMatrix Y(3,3);
    Y(i,j) = Imag(Z(i,j));

    cout << "X = " << X << endl;
    cout << "Y = " << Y << endl;

    //Imag(Z(i,j)) = Y(i,j);
    cout << "Z = " << Z << endl;
}