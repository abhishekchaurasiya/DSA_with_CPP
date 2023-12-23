

// Using here Sieve of Eratosthenes approach for getting a prime number 
int main()
{
    int n[20] = {};
    if (n == 0)
        return 0;

    vector<bool> primeNumber(n, true);       // all primes are market already
    primeNumber[0] = primeNumber[1] = false; // because zero and 1 are not prime numbers

    int answer = 0; // store the number of primes

    for (int i = 2; i < n; i++)
    {
        if (primeNumber[i])
        {
            answer++;

            int j = 2 * i; // table of all numbers
            while (j < n)
            {
                primeNumber[j] = false; // Not a prime number
                j = j + i;
            }
        }
    }
    return answer;
}