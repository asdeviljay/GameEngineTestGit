#pragma once
class MyMemoryPool
{
private :
	unsigned char* m_pChunkHead;

public:
	MyMemoryPool();
	~MyMemoryPool();

	void init(unsigned int block_size, unsigned int block_number);
	void* alloc();
	void release(void* p);
};

