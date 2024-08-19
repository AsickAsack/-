#pragma once
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;



/*
	배열

	- 메모리 상에 원소를 연속하게 배치한 자료구조
	- O(1)에 k번째 원소를 확인/변경 가능
	- 추가적으로 소모되는 메모리의 양(=overhead가 거의 없음)
	- Cache hit rate가 높음
	- 메모리 상에 연속한 구간을 잡아야해서 할당에 제약이 걸림
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

