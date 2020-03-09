//#include "HuffmanTree.hpp"
#include "FileCompressHuff.h"

#include "LZ77.h"

#if 0
int main()
{
	//TestHuffManTree();
	FileCompressHuff fc;

	//压缩文本文件
	/*fc.CompressFile("1.txt");
	fc.UNCompressFile("2.txt");*/

	fc.CompressFile("1.png");
	fc.UNCompressFile("2.png");
	return 0;
}

#endif 

#include <windows.h>
#include <iostream>
int main()
{
	LZ77 lz;
	long t1 = GetTickCount();
	lz.CompressFile("10.txt");
	lz.UNCompressFile("11.lzp");
	long t2 = GetTickCount();
	cout << "运行时间" << (t2 - t1) << endl;
	
	return 0;
}