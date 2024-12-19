
#include "algorithms.h"
#include <cassert>

void testLoopHelloWorld() {
    HelloWorldAlgorithms::loopHelloWorld();
}

void testRecursiveHelloWorld() {
    HelloWorldAlgorithms::recursiveHelloWorld(5);
}

void testStlHelloWorld() {
    HelloWorldAlgorithms::stlHelloWorld();
}

int main() {
    testLoopHelloWorld();
    testRecursiveHelloWorld();
    testStlHelloWorld();
    return 0;
}
