/* Alunos: Lucas Meneghelli e Vinicius Gasparini | Tarefa 2.a */

#include <bits/stdc++.h>

using namespace std;

long long exp(long a, long b)
{
    long long ans = 1;
    int count = 0;

    for(ans; count < b; ans*=a, count++);

    return ans;
}

long long multiplica_matriz(int matriz_a[], int matriz_b[], int n)
{

    int matriz_ans[n][n];

    for( int i = 0;  )

}

int main(int argc, char const *argv[])
{
    long a, b;

    cout << "Algoritmo a:" << endl;

    cout << "Informe a:";
    cin >> a;

    cout << "Informe b:";
    cin >> b;
    
    cout << exp(a,b) << endl;
    
    return 0;
}
