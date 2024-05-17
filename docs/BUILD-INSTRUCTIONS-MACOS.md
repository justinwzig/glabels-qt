gLabels MacOS Build Instructions
================================
## Prerequisites

### Intel Macs
```
brew install cmake
brew install qt@5

cd <i>glabels_source_directory</i>
mkdir build
cd build

cmake -D CMAKE_PREFIX_PATH=/usr/local/opt/qt  .. 
make
sudo make install
```

### Apple Silicon Macs
```
brew install gcc@14
brew install cmake
brew install qt@5

cd <i>glabels_source_directory</i>
mkdir build
cd build

cmake -D CMAKE_PREFIX_PATH="/usr/local/opt/qt5" -DCMAKE_C_COMPILER=/opt/homebrew/Cellar/gcc/14.1.0/bin/gcc-14 -DCMAKE_CXX_COMPILER=/opt/homebrew/Cellar/gcc/14.1.0/bin/g++-14  ..
make
sudo make install
```

Files will be output in /usr/local/bin.

