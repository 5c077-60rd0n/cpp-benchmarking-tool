#pragma once
#include <functional>

void benchmark(std::function<void()> func, int iterations = 1000);