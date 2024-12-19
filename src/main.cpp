
#include "algorithms.h"
#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    using namespace HelloWorldAlgorithms;

    // Ensure the directory exists
    fs::create_directories("../performance_logs");

    // Check if results.csv exists
    bool fileExists = fs::exists("../performance_logs/results.csv");

    // Open results.csv in append mode
    std::ofstream logFile("../performance_logs/results.csv", std::ios::app);
    if (!logFile.is_open()) {
        std::cerr << "Failed to open results.csv for writing." << std::endl;
        return 1;
    }

    // Write the header only if the file is new
    if (!fileExists) {
        logFile << "Algorithm,Runtime (us)" << std::endl;
    }

    auto loopTime = measureTime(loopHelloWorld);
    logFile << "Loop-Based," << loopTime << std::endl;

    auto recursiveTime = measureTime([] { recursiveHelloWorld(5); });
    logFile << "Recursive," << recursiveTime << std::endl;

    auto stlTime = measureTime(stlHelloWorld);
    logFile << "STL-Based," << stlTime << std::endl;

    logFile.close();
    return 0;
}
