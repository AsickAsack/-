#pragma once
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;



/*
	�迭

	- �޸� �� ���Ҹ� �����ϰ� ��ġ�� �ڷᱸ��
	- O(1)�� k��° ���Ҹ� Ȯ��/���� ����
	- �߰������� �Ҹ�Ǵ� �޸��� ��(=overhead�� ���� ����)
	- Cache hit rate�� ����
	- �޸� �� ������ ������ ��ƾ��ؼ� �Ҵ翡 ������ �ɸ�
*/

class StudyArray
{
public:
	
	void TestCode();

	void Change(int idx, int num,int arr[]);
	void Insert(int idx,int num,int arr[],int& len);
	void Delete(int idx,int arr[],int& len);
	void PrintArr(int arr[],int len);

	void Init();
	void PracticeVector();

private:


};

