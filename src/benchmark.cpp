#include "benchmark.h"
#include <iostream>
#include <chrono>
#include <functional>

void benchmark(std::function<void()> func, int iterations)
{
    double total_duration = 0.0;

    for (int i = 0; i < iterations; i++)
    {
        auto start = std::chrono::high_resolution_clock::now();
        func();
        auto stop = std::chrono::high_resolution_clock::now();

        total_duration += std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
    }

    double average_duration = total_duration / iterations;
    std::cout << "Average time taken: " << average_duration << " microseconds" << std::endl;
}
