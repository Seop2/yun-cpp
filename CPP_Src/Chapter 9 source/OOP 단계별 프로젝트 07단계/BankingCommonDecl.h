/*
 * �����̸�: BankingCommonDecl.h
 * �ۼ���: ������
 * ������Ʈ ����: [2010, 01, 01] ���Ϲ��� 0.7 
 */

#ifndef __BANKING_COMMON_H__
#define __BANKING_COMMON_H__

#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN=20;

// ���α׷� ������� ���� �޴�
enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

// �ſ���
enum {LEVEL_A=7, LEVEL_B=4, LEVEL_C=2};

// ������ ����
enum {NORMAL=1, CREDIT=2};

#endif;