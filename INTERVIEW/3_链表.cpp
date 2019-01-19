///*
//实现链表的逆序
//*/
//
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node *next;
//};
//
//Node * CreatList(int arr[], int n)
//{
//	Node *pHead = new Node;
//	pHead->next = NULL;
//	Node *p = pHead;
//	for (int i = 0; i < n; i++)
//	{
//		Node *pNode = new Node;
//		pNode->data = arr[i];
//		pNode->next = NULL;
//		p->next = pNode;
//		p = pNode;
//	}
//	cout << "over!" << endl;
//	return pHead;
//}
//void show(Node *pHead)
//{
//	Node *pNode = pHead->next;
//	while (pNode != NULL)
//	{
//		cout << pNode->data << endl;
//		pNode = pNode->next;
//	}
//}
//
//
////链表逆序
//Node * ReverseList(Node *pHead)
//{
//	Node *pre = NULL;
//	Node *p = pHead->next;
//	while (p != NULL)
//	{
//		Node *temp = p->next;
//		p->next = pre;
//		pre = p;
//		p = temp;
//	}
//	Node *pH = new Node;
//	pH->next = pre;
//	return pH;
//}
//
//int main()
//{
//	int data[5] = { 1,2,3,4,5 };
//	int n = 5;
//	Node *head = CreatList(data, n);
//	show(head);
//	Node * pre=ReverseList(head);
//	show(pre);
//
//	system("pause");
//	return 0;
//}