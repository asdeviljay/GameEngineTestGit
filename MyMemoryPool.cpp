#include "pch.h"
#include "MyMemoryPool.hpp"

#include <stdlib.h>
#include <iostream>


MyMemoryPool::MyMemoryPool()
{

}


MyMemoryPool::~MyMemoryPool()
{
}

void MyMemoryPool::init(unsigned int block_size, unsigned int block_number) {
	const unsigned int headerSize = sizeof(m_pChunkHead);
	unsigned int realBlockSize = block_size + headerSize;
	std::cout << block_size << " + " << headerSize  << " = "<< realBlockSize << std::endl;
	m_pChunkHead = reinterpret_cast<unsigned char*>(malloc(realBlockSize * block_number));
	if (m_pChunkHead != nullptr) {
		//Todo : Manage memory
		*m_pChunkHead = 10;
		std::cout << static_cast<int>(*m_pChunkHead) << std::endl;
		
	}
	delete m_pChunkHead;
}

void* MyMemoryPool::alloc() {
	return m_pChunkHead;
}

void MyMemoryPool::release(void* p) {

}
