#include <iostream>

using namespace std;

//CAPACITY e capacitatea sirului, nr. maxim de elemente pe care il poate avea //
const int CAPACITY = 1000;

int main()
{   // am creat o adresa in memorie care nu da point la nimic //
    int *dArray;
    // am creat un sir cu capacitatea de 1000//
    dArray = new int[CAPACITY];

    dArray[0] = 3;
    dArray[1] = 7;
    dArray[2] = 2;
    dArray[3] = 9;

    cout << "Array: ";

    // afisam valorile de mai sus //

    for (int i = 0; i < 4; i++)
    {
        cout << dArray[i] << " ";
    }
    // folosim functia delete pentru a sterge din memoria heap numerele de mai sus //
    delete [] dArray;

    // cout << dArray[0] << endl; //

    // am sters numerele din memopria heap dar pointerul de mai sus tot o sa dea point la ceva un nr, asa ca folosim NULL pentru nu a mai afisa nimic //
    dArray = NULL;

    //cout << dArray[0] << endl; //

    return 0;
}
