/*
 * 파일이름: AccountArray.h
 * 작성자: 윤성우
 * 업데이트 정보: [2010, 02, 01] 파일버전 0.1
 */

#ifndef __ACCOUN_ARRAY_H__
#define __ACCOUN_ARRAY_H__

#include "Account.h"

typedef Account * ACCOUNT_PTR;

class BoundCheckAccountPtrArray 
{
private:
	ACCOUNT_PTR * arr;
	int arrlen;

	BoundCheckAccountPtrArray(const BoundCheckAccountPtrArray& arr) { }
	BoundCheckAccountPtrArray& operator=(const BoundCheckAccountPtrArray& arr) { }

public:
	BoundCheckAccountPtrArray(int len=100);
	ACCOUNT_PTR& operator[] (int idx);
	ACCOUNT_PTR operator[] (int idx) const;
	int GetArrLen() const;
	~BoundCheckAccountPtrArray();
};
#endif