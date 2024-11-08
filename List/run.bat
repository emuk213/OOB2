cd List
mkdir build
cd build
cmake ..
cmake --build . --config Release
cd ..
copy src\*.txt build\Release
cd build\Release
List.exe
pause
