#include<iostream>
#include<limits.h>
#include<chrono>
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();



    const long long MODULO= 10000000000;
    long long summie = 0;
    for (int i = 1; i<1001; i++)
    {
        long long temp = 1;
        for (int j = 0; j < i; j++)
        {
            temp *= i;
            if (temp> LLONG_MAX/1000) temp %= MODULO;
        //    temp %= MODULO;
        }
        summie += temp;
        summie %= MODULO;
    }
    //std::cout<< summie<< std::endl;

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start);
    std::cout << duration.count() << std::endl;

    return 0;
}


