#include <iostream>
#include <unordered_map>

std::unordered_map<int, long long> fibocache;

long long fibo(int n)
{
    if (n == 0)
        return 0;
    if (fibocache.find(n) != fibocache.end())
    {
        return fibocache[n];
    }
    else
    {
        fibocache[n] = fibo(n - 1) + fibo(n - 2);
        return fibocache[n];
    }
}

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i <= n; i++)
    {
        std::cout << fibo(i) << " ";
    }

    return 0;
}
