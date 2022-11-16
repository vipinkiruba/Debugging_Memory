#include<iostream>
#include<string.h>
using namespace std;

struct Node {
	int data;
	string name1;
	string name2;
	long long int arr[1000];
	long long int arr1[1000];
	long long int arr2[1000];
	long long int arr3[1000];
	long long int arr4[1000];
	long long int arr5[1000];
	long long int arr6[1000];
	long long int arr7[1000];
	long long int arr8[1000];
	long long int ar9[1000];
	long long int arr10[1000];
	long long int arr11[1000];
	Node* next;
};

Node* new_node(int data) {
	Node* temp = new Node;
	temp->data = data;
	temp->next = NULL;
	return temp;
}

Node* insert(Node* root, int data) {
	if (root == NULL) return new_node(data);
	else root->next = insert(root->next, data);
	return root;
}

void display(Node* root) {
	while (root) {
		cout << root->data;
		root = root->next;
	}cout << endl;
	cout << "end"<<endl;
}





int main() {

	cout <<"size of Node is = " << (sizeof(Node) / 1024) << " .kb" << endl;

	struct Node* root = NULL;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int data = 1;
		root = insert(root, data);
	}

	delete root->next->next;

	delete root->next;

	delete root;

	


}
