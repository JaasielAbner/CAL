#include <bits/stdc++.h>

using namespace std;

void rulerRecursive( float first, float last, int height ){

    float mid;

    if( height > 0 ){

        mid = first + ( last - first ) / 2;
        cout << endl << "Posição " << mid << " \tAltura " << height << endl;
        rulerRecursive( first, mid, height - 1 );
        rulerRecursive( mid, last, height - 1 );
    
    }

}

int main(int argc, char const *argv[]) {

    setbuf( stdout, NULL );

    int height;
    float first, last;

    cout << "Informe a altura: ";
    cin >> height;

    cout << "Informe a primeira posição: ";
    cin >> first;

    cout << "Informe a última posição: ";
    cin >> last;

    rulerRecursive( first, last, height );

    return 0;
}
