#pragma once

#include <string>
#include <vector>
class CWUTest
{
public:
	CWUTest();
	~CWUTest();

	void init(const std::string& t_testTopic);

	void test(const std::string& t_testSubject, const bool& t_testResult);

	void report() const;

private :
	std::string m_testTopic;
	//std::vector<bool> m_testResults;
	unsigned int m_passTest;
	unsigned int m_failTest;
};

