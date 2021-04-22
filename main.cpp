#include <iostream>
#include <math.h>

using namespace std;

//Busca binaria
int BinarySearch(int *A, int n, int k){
    //Implements non recursive binary search
    //Input: An array A[0..n−1] sorted in ascending order and a length of array and a search key K
    //Output: An index of the array’s element that is equal to K or −1 if there is no such element
    int ii=0,r=n-1,m;
    while(ii<=r){
        m = floor((ii+r)/2);
        if (k == A[m])
            return m;
        else if (k < A[m])
            r = m-1;
        else
            ii = m+1;
    }
    return -1;

}

int main()
{
    int lista[100] = {1,9,10,15,20,30,35,55,99,101};
    int tamanho_lista = 10;
    int k = 10;
    int retorno;
    retorno = BinarySearch(lista,tamanho_lista,k);
    cout << "Index = "<< retorno << endl;
    return 0;
}

