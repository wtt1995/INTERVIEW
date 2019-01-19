///*
//本程序主要实现了几个排序算法：
//1.冒泡排序
//2.选择排序
//3.快速排序
//4.归并排序
//5.插入排序
//*/
//#include<iostream>
//#include<cstring>
//using namespace std;
//
////1.冒泡排序
//void BubSort(int data[], int n)
//{
//	for(int i=0;i<n-1;i++)
//		for (int j = i + 1; j < n; j++)
//		{
//			if (data[i] > data[j])
//			{
//				int temp = data[i];
//				data[i] = data[j];
//				data[j] = temp;
//			}
//		}
//}
//
////2.选择排序
//void SelectSort(int data[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		int min = i;
//		for(int j=i+1;j<n;j++)
//			if (data[min] > data[j])
//			{
//				min = j;
//			}
//		int temp = data[i];
//		data[i] = data[min];
//		data[min] = temp;
//	}
//}
//
////3.快速排序
//void QuickSort(int data[], int left, int right)
//{
//	int i = left;
//	int j = right;
//	int temp = data[left];
//	if (left >= right) //递归边界
//		return;
//	while (i != j)
//	{
//		while (i < j && data[j] >= temp)
//			j--;
//		if (j > i)
//			data[i] = data[j];
//		while (i < j && data[i] < temp)
//			i++;
//		if (i < j)
//			data[j] = data[i];
//	}
//	data[i] = temp;
//	QuickSort(data, left, i - 1);
//	QuickSort(data, i + 1, right);
//}
//
//const int Maxn=20;
////4.归并排序
////合并两个有序数组
//void Merge(int data[],int left, int mid, int right)
//{
//	int temp[Maxn] = { 0 };
//	int i = left;//第一个数组索引
//	int j=mid+1;//第二个数组索引
//	int k;//临时数组索引
//	for (k = 0; k <= right - left; k++)
//	{
//		//若 i 到达第一个数组的尾部，将第二个数组余下元素复制到 
//		//临时数组中
//		if (i == mid + 1)
//		{
//			temp[k] = data[j++];
//			continue;
//		}
//		//若 j 到达第二个数组的尾部，将第一个数组余下元素复制到 
//		//临时数组中
//		if (j == right + 1)
//		{
//			temp[k] = data[i++];
//			continue;
//		}
//		if (data[i] < data[j])
//			temp[k] = data[i++];
//		else
//			temp[k] = data[j++];
//	}
//	//在把临时数组中的值赋值给data
//	for (i = left, j = 0; i <= right; i++, j++)
//	{
//		data[i] = temp[j];
//	}
//}
////分+合
//void MergeSort(int data[], int left, int right)
//{
//	if (left < right)
//	{
//		int mid = (left + right) / 2;
//		MergeSort(data, left, mid);
//		MergeSort(data, mid + 1, right);
//		Merge(data, left, mid, right);
//	}
//	else
//		return;
//}
//
////5.插入排序
//void InsertSort(int data[],int n)
//{
//	for (int i = 1; i < n; i++)
//	{
//		int temp = data[i];
//		int j = i;
//		while (j > 0 && temp < data[j - 1])
//		{
//			data[j] = data[j - 1];
//			j--;
//		}
//		data[j] = temp;
//	}
//}
//
//
//int main()
//{
//	int array1[9] = { 9,5,6,8,2,1,7,3,0 };
//	int n = 9;
//	cout << "1.-------" << endl;
//	BubSort(array1, n);
//	for (int i = 0; i < n; i++)
//		cout << array1[i] << " ";
//	cout << endl;
//	int array2[9] = { 9,5,6,8,2,1,7,3,0 };
//	cout << "2.-------" << endl;
//	SelectSort(array2, n);
//	for (int i = 0; i < n; i++)
//		cout << array2[i] << " ";
//	cout << endl;
//
//	int array3[9] = { 9,5,6,8,2,1,7,3,0 };
//	cout << "3.-------" << endl;
//	QuickSort(array3, 0,8);
//	for (int i = 0; i < n; i++)
//		cout << array3[i] << " ";
//	cout << endl;
//
//	int array4[9] = { 9,5,6,8,2,1,7,3,0 };
//	cout << "4.-------" << endl;
//	MergeSort(array4, 0, 8);
//	for (int i = 0; i < n; i++)
//		cout << array4[i] << " ";
//	cout << endl;
//
//	int array5[9] = { 9,5,6,8,2,1,7,3,0 };
//	cout << "5.-------" << endl;
//	InsertSort(array5, n);
//	for (int i = 0; i < n; i++)
//		cout << array5[i] << " ";
//	cout << endl;
//
//	system("pause");
//	return 0;
//}