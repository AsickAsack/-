#include "../header/StudyArray.h"


void StudyArray::TestCode()
{
	int arr[10] = { 1,2,3,4,5 };
	int len = 5;

	Delete(4, arr, len);
	PrintArr(arr, len);
}

void StudyArray::Change(int idx, int num, int arr[])
{
	arr[idx] = num;
}

void StudyArray::Insert(int idx, int num, int arr[],int& len)
{

	len++;
	int changeValue = num;

	for (int i = idx; i<len;i++)
	{
		int orgValue = arr[i];
		arr[i] = changeValue;

		changeValue = orgValue;
	}

}

void StudyArray::Delete(int idx, int arr[],int &len)
{
	for (int i = idx;i < len - 1;i++)
	{
		arr[i] = arr[i + 1];
	}

	len--;
}

void StudyArray::PrintArr(int arr[], int len)
{
	for (int i = 0; i < len;i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void StudyArray::Init()
{
	int a[21];
	int b[21][21];

	// 1. memset
	// cstring 헤더에 있는 함수
	// 0과 -1이 아니거나 2차원 배열을 넣으면 오류가 생길 수 있음
	memset(a, 0, sizeof a);
	memset(b, 0, sizeof b);

	//2. for
	for (int i = 0;i < 21;i++)
		a[i] = 0;
	for (int i = 0;i < 21;i++)
		for (int j = 0;j < 21;i++)
			b[i][j] = 0;

	//3. fill
	//제일 추천. 알고리즘 헤더에 있음.
	std::fill(a, a + 21, 0);
	for (int i = 0;i < 21;i++)
		std::fill(b[i], b[i] + 21, 0);

}

void StudyArray::PracticeVector()
{
	vector<int> v1(3, 5); // {5,5,5};
	cout << v1.size() << '\n'; //3
	v1.push_back(7); // {5,5,5,7};

	//이런식으로 순회 가능
	for (int i : v1)
		cout << i << '\n';

	for(int i=0;i<v1.size();i++)
		cout << i << '\n';

	vector<int> v2(2); //{0,0};
	v2.insert(v2.begin() + 1, 3); //{0,3,0};

	vector<int> v3 = { 1,2,3,4 };
	v3.erase(v3.begin() + 2); // {1,2,4};

	vector<int> v4; // {}
	v4 = v3; // {1,2,4} //Deep Copy!!
	cout << v4[0] << v4[1] << v4[2] << '\n'; //124
	v4.pop_back(); // {1,2}
	v4.clear(); // {}

	
	//push_back & pop_back 은 O(1)
	//insert & erase 는 O(n)

}

