#include <iostream>
#include<locale.h>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<functional>
using namespace std;
void autor(void) {
    cout << endl;
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "Autor programu: Simon Dudek\n\n";
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "\n\n";
}
void wyswietl(int i) {
    cout << i << endl;
}
int main() {
    int poj;
    setlocale(LC_ALL, "");
    autor();
    vector<int> A;
    srand(time(NULL));
    for (int i = 0;i < 1000;i++) {
        A.push_back(rand() % (10000 - 0 + 1) + 0);
        poj=A.capacity();
        cout << "Pojemność obiektu A: " << poj << endl;
    }
    for (int i = 0;i < 100;i++) {
        A.pop_back();
    }
    poj = A.capacity();
    cout << "Pojemność obiektu A po usunięciu 100 elementów z końca: " << poj << endl;
    A.erase(A.begin(), A.begin() + 100);
    poj = A.capacity();
    cout << "Pojemność obiektu A po usunięciu 100 elementów z przodu: " <<poj<< endl;
    cout <<"Wartość na pozycji 400: "<<A[400]<<endl;
    cout <<"Wartość na pozycji 500: "<< A[500]<<endl;
    A.erase(A.begin() + 500);
    A.insert(A.begin()+500, A[400]);
    cout <<"Wartość na pozycji 500 po przestawieniu: "<< A[500]<<endl;
    sort(A.begin(), A.end());
    cout << "Zawartość kontenera A po sortowaniu: " << endl;
    for_each(A.begin(), A.end(), wyswietl);
    random_shuffle(A.begin(), A.end());
    cout << "Zawartość kontenera A po wymieszaniu elementów: " << endl;
    for_each(A.begin(), A.end(), wyswietl);
    system("pause");
    return 0;
}