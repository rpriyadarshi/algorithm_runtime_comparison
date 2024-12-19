
# Algorithm Runtime Comparison Project

This project demonstrates how to measure and compare the runtime performance of different algorithms in C++, with results visualized in a web-based Quality of Results (QoR) viewer.

## Features

1. **Algorithm Runtime Measurement**: Compare three approaches to generating "Hello, World!".
2. **Dynamic Results Logging**: Prevent duplicate headers and store results in `results.csv`.
3. **QoR Visualization**: A Flask-based Python web app visualizes the performance metrics.
4. **CI/CD Integration**: GitHub Actions automatically builds, tests, and validates code.
5. **Clean Codebase**: Organized with CMake, modularized files, and unit tests.

## Directory Structure

```
algorithm_runtime_comparison/
├── README.md
├── performance_logs/
│   ├── results.csv
│   └── runtime_comparison.png
├── src/
│   ├── algorithms.h
│   ├── algorithms.cpp
│   └── main.cpp
├── tests/
│   ├── CMakeLists.txt
│   └── test_algorithms.cpp
├── .github/workflows/
│   └── ci.yml
└── web_qor/
    └── qor_visualizer.py
```

## Build Instructions

1. **Clone the Repository**:
   ```bash
   git clone <repository-url>
   cd algorithm_runtime_comparison
   ```

2. **Build the Project**:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

3. **Run the Program**:
   ```bash
   ./hello_world
   ```

4. **Run Unit Tests**:
   ```bash
   ctest
   ```

5. **Start the QoR Viewer**:
   ```bash
   cd ../web_qor
   python qor_visualizer.py
   ```

6. Open `http://127.0.0.1:5000/` to view the runtime comparison.

## Algorithms Included

- **Loop-Based**: Prints "Hello, World!" in a loop.
- **Recursive**: Prints "Hello, World!" recursively.
- **STL-Based**: Uses the STL to iterate and print.

## License

This project is licensed under the MIT License.
