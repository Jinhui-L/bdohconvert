= bdoh_convert
:toc:
:toc-placement!:

toc::[]


# Introduction

Shows a example convert of binary 、hex so on  which uses a different folder for source and include
files.

The files in this tutorial include:

```
B-bdoh_convert$ tree
.
├── CMakeLists.txt
├── include
│   └──  BinaryConverter.h
    └── 
		ConverterBase.h
		DecimalConverter.h
		HexadecimalConvert.h
		OctalConverter.h
		NumberBaseConverterFactory.h
└── src
    ├── BinaryConverter.cpp
    └── main.cpp
		ConverterBase.cpp
		DecimalConverter.cpp
		HexadecimalConvert.cpp
		OctalConverter.cpp
		NumberBaseConverterFactory.cpp

```
usage:

mkdir build
cd build
cmake ..
make

liusir@liusir-Inspiron-5548:~/BinDecHexConverter/src/BinDecHexOctConverter/build$ ./bdoh_convert hex 10
Dec	16
Bin	10000
Oct	20
liusir@liusir-Inspiron-5548:~/BinDecHexConverter/src/BinDecHexOctConverter/build$ ./bdoh_convert dec 200
Hex	128
Bin	11001000
Oct	310



  


