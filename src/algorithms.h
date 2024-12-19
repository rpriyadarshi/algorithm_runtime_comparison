
#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <iostream>
#include <chrono>

namespace HelloWorldAlgorithms {

    void loopHelloWorld();
    void recursiveHelloWorld(int depth);
    void stlHelloWorld();

    template <typename Func>
    long long measureTime(Func func) {
        auto start = std::chrono::high_resolution_clock::now();
        func();
        auto end = std::chrono::high_resolution_clock::now();
        return std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    }

}

#endif
