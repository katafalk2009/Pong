# Pong
C++ SDL2 Game
```
mkdir build 
cd build
conan profile new default --detect
conan profile update settings.compiler.libcxx=libstdc++11 default
conan install ../ --build
cmake ../
make
```