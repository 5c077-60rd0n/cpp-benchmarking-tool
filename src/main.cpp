#include "benchmark.h"
#include "tasks.h"
#include <iostream>

int main()
{
    benchmark(sampleTask, 1000);

    std::cout << "Matrix multiplication (size 100): " << std::endl;
    benchmark([&]()
              { matrixMultiplicationTask(100); },
              10);

    std::cout << "Matrix multiplication (size 200): " << std::endl;
    benchmark([&]()
              { matrixMultiplicationTask(200); },
              10);

    return 0;
}