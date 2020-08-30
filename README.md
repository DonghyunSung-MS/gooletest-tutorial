# gooletest-tutorial
simple but helpful tutorial for further debugging

# How to download

```bash
git clone https://github.com/google/googletest.git
cd googletest
mkdir build && cd build
cmake ..
sudo make install
```

# How to integrate with cmake

```cmake
find_package(GTest REQUIRED)
add_executable(ExampleTests ${Sources})

target_link_libraries(ExampleTests PUBLIC
    Example
    GTest::GTest
    GTest::Main
)
```
