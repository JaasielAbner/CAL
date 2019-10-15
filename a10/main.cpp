#include <bits/stdc++.h>
#define MAX_N 500 // um milhão

using namespace std;

void sieve(bool (&prime)[MAX_N + 1])
{
  for (int i = 2; i <= (int)sqrt(MAX_N); i++)
    if (prime[i] == false)
      for (int j = i * i; j <= MAX_N; j += i)
        prime[j] = true;
}

int main()
{

  // GERANDO CRIVO
  bool prime[MAX_N + 1];
  vector<int> primes;

  prime[0] = true;
  prime[1] = true;

  sieve(prime);

  for (int i = 0; i <= MAX_N; i++)
  {
    if (!prime[i])
    {
      primes.push_back(i);
      printf("%d ", i);
    }
  }

  printf("\n");

  // GERANDO N
  srand(time(NULL));

  int p = primes[rand() % primes.size()];
  int q;

  do
  {
    q = primes[rand() % primes.size()];
  } while (q == p);

  long long int n = p * q;

  printf("%d %d %lld\n", p, q, n);

  // DESCOBRINDO N

  long long int max_tries = sqrt(n); // ta erado isso aki
  int i, j;
  bool achou;

  printf("%d\n", primes[max_tries + 1]);

  for (i = 0; i < max_tries; i++)
  {
    for (j = 0; j < max_tries; j++)
    {
      if (n == (long long int)primes[i] * primes[j])
      {
        achou = true;
        break;
      }
    }
    if (achou)
      break;
  }

  if (achou)
  {
    printf("p encontrado: %d\n", primes[i]);
    printf("q encontrado: %d\n", primes[j]);
  }
  else
  {
    printf("p e q não encontrados.\n");
  }
}