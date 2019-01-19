///*
//��������Ҫʵ���˼��������㷨��
//1.ð������
//2.ѡ������
//3.��������
//4.�鲢����
//5.��������
//*/
//#include<iostream>
//#include<cstring>
//using namespace std;
//
////1.ð������
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
////2.ѡ������
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
////3.��������
//void QuickSort(int data[], int left, int right)
//{
//	int i = left;
//	int j = right;
//	int temp = data[left];
//	if (left >= right) //�ݹ�߽�
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
////4.�鲢����
////�ϲ�������������
//void Merge(int data[],int left, int mid, int right)
//{
//	int temp[Maxn] = { 0 };
//	int i = left;//��һ����������
//	int j=mid+1;//�ڶ�����������
//	int k;//��ʱ��������
//	for (k = 0; k <= right - left; k++)
//	{
//		//�� i �����һ�������β�������ڶ�����������Ԫ�ظ��Ƶ� 
//		//��ʱ������
//		if (i == mid + 1)
//		{
//			temp[k] = data[j++];
//			continue;
//		}
//		//�� j ����ڶ��������β��������һ����������Ԫ�ظ��Ƶ� 
//		//��ʱ������
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
//	//�ڰ���ʱ�����е�ֵ��ֵ��data
//	for (i = left, j = 0; i <= right; i++, j++)
//	{
//		data[i] = temp[j];
//	}
//}
////��+��
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
////5.��������
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