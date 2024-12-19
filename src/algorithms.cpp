
#include "algorithms.h"
#include <algorithm>
#include <vector>

namespace HelloWorldAlgorithms {

void loopHelloWorld() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Hello, World! (Loop)" << std::endl;
    }
}

void recursiveHelloWorld(int depth) {
    if (depth <= 0) return;
    std::cout << "Hello, World! (Recursive)" << std::endl;
    recursiveHelloWorld(depth - 1);
}

void stlHelloWorld() {
    std::vector<int> vec(5);
    std::for_each(vec.begin(), vec.end(), [](int) {
        std::cout << "Hello, World! (STL)" << std::endl;
    });
}

}
