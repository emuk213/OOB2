mkdir build
cd build
cmake ..
cmake --build . --config Release
ctest -C Release --output-on-failure
cd Release
ProjektasTest.exe
pause
