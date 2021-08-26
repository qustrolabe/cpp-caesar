# cpp-caesar
C++ implementation of Caesar cipher

# Build
```
mkdir build && cd build
```
```
cmake .. 
```
```
make
```

# Usage example
#### Input from console
Simply run program and enter text you want to encode line by line
```
./cpp-caesar
>>Hello World
Khoor Zruog
```
#### Input using pipe
```
echo "Hello World" | ./cpp-caesar 
```
```
cat input.txt | ./cpp-caesar > output.txt
```
