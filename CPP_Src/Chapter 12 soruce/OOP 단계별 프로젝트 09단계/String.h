/*
 * 파일이름: String.h
 * 작성자: 윤성우
 * 업데이트 정보: [2010, 03, 01] 파일버전 0.1
 */

#ifndef __STRING_H__
#define __STRING_H__

#include "BankingCommonDecl.h"

class String
{
private:
	int len;
	char * str;
public:
	String();
	String(const char * s);
	String(const String& s);
	~String();
	String& operator= (const String& s);
	String& operator+= (const String& s);
	bool operator== (const String& s);
	String operator+ (const String& s);

	friend ostream& operator<< (ostream& os, const String& s);
	friend istream& operator>> (istream& is, String& s);
};
#endif