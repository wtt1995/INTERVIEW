///*
//一个有序数组，查找某个数，存在则返回下标，否返回-1.
//递增
//*/
//#include<iostream>
//using namespace std;
//int Search(int data[], int n, int value)
//{
//	if (data == NULL || n <= 0)
//		return -1;
//	int left = 0;
//	int right = n - 1;
//	int mid=(left + right) / 2;
//	while (left <= right)
//	{
//		if (value == data[mid])
//			return mid;
//		else if (value < data[mid])
//		{
//			right = mid;
//			mid= (left + right) / 2;
//		}
//		else
//		{
//			left = mid;
//			mid = (left + right) / 2;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int data[5] = { 1,2,3,4,5 };
//	int n = 5;
//	int m;
//	m = Search(data,5, 3);
//	cout << m << endl;
//	system("pause");
//	return 0;
//}