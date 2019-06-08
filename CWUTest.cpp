#include "pch.h"
#include "CWUTest.hpp"
#include <iostream>

CWUTest::CWUTest() :
	m_passTest(0),
	m_failTest(0)
{
}


CWUTest::~CWUTest()
{
}

void CWUTest::init(const std::string& t_testTopic) {
	m_testTopic = t_testTopic;
}

void CWUTest::test(const std::string& t_testSubject, const bool& t_testResult) {
	//m_testResults.push_back(t_testResult);
	/*if (t_testResult) {
			m_passTest++;
	}
	else {
		m_failTest++;
	}*/
	t_testResult ? m_passTest++ : m_failTest++;
	std::cout << t_testSubject << (t_testResult ? " Pass" : " Fail") << std::endl;
}

void CWUTest::report() const {
	std::cout << "---" << m_testTopic << "---" << std::endl;
	/*unsigned int passTest = 0, failTest = 0;
	for (size_t it = 0; it < m_testResults.size(); it++) {
		if (m_testResults.at(it)) {
			passTest++;
		}
		else {
			failTest++;
		}
		m_testResults.at(it) ? passTest++ : failTest++;
	}
	std::cout << passTest << " pass(es)" << std::endl;
	std::cout << failTest << " fail(s)" << std::endl;*/
	std::cout << m_passTest << " pass(es)" << std::endl;
	std::cout << m_failTest << " fail(s)" << std::endl;
}
