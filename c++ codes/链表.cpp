#include<string>
#include<iostream>
using namespace std;

struct node{
	int data = 0;
	node* next = NULL;
};

int main(){
	node* head = new node;
	if(head == NULL){
		cout << "head分配内存失败，程序已经退出" << endl;
		return 0;
	}
	head->data = 0;
	head->next = NULL;
	
	node* tail = head;
	
	int n = 10;
	for(int i = 1;i <= n;i++){
		node* temp = new node;
		if(temp == NULL){
			cout << "temp分配内存失败，程序已经退出" << endl;
			return 0;
		}
		int num = 0;
		cout << "请输入数据：" << endl;
		cin >> num;
		temp->data = num;
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
	}
	
	node* curNode = head->next;
	cout << "链表内存储的数据如下：" << endl;
	while(curNode != NULL){
		cout << curNode->data << " ";
		curNode = curNode->next;
	}
	
	node* p = NULL,*q = NULL;
	p = head;
	while(p != NULL){
		q = p->next;
		delete p;
		p = q;
	}
	return 0;
}