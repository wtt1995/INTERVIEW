//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node *left, *right;
//};
//
//int preorder[7] = {10,6,4,8,14,12,16};
//int inorder[7] = {4,6,8,10,12,14,16};
//int post[7] = {4,8,6,12,16,14,10};
//Node * Construct(int preLeft, int preRight, int inLeft, int inRight)
//{
//	Node *root = new Node;
//	root->data = preorder[preLeft];
//	root->left = root->right = NULL;
//	if (preLeft >= preRight)
//		return root;
//	int n = inLeft;
//	while (n<=inRight && inorder[n] != preorder[preLeft])
//	{
//		n++;
//	}
//	int lenLeft = n - inLeft;
//
//	if (n == inRight)
//		return 0;
//
//	root->left = Construct(preLeft + 1, preLeft+lenLeft, inLeft, inLeft + lenLeft - 1);
//
//	root->right = Construct(preLeft + lenLeft + 1, preRight, inLeft + lenLeft+1, inRight);
//
//	return root;
//}
//
//
//
//
//void order(Node *root)
//{
//	if (root == NULL)
//		return;
//	cout << root->data << endl;
//	order(root->left);
//	order(root->right);
//	
//}
//void order2(Node *root)
//{
//	if (root == NULL)
//		return;
//	
//	order2(root->left);
//	cout << root->data << endl;
//	order2(root->right);
//}
////ºóÐò±éÀúÊä³ö
//void postorder(Node *root)
//{
//	if (root == NULL)
//		return;
//	postorder(root->left);
//	postorder(root->right);
//	cout << root->data << endl;
//}
//
//int main()
//{
//	Node *root;
//	root = Construct(0, 6, 0, 6);
//	cout << "----" << endl;
//	order(root);
//	cout << "----" << endl;
//	order2(root);
//	cout << "----" << endl;
//	postorder(root);
//	system("pause");
//	return 0;
//}