#include <iostream>
using namespace std;

template<typename T>
class Node {
public:
	T data;
	Node<T>* next;
};
template<typename T>
class Stack {
public:
	Node<T>* top = nullptr;
	T size = 0;

	void push(int x) {
		Node<T>* n = new Node<T>;
		n->data = x;
		n->next = nullptr;

		if (top == nullptr) {
			top = n;
			size++;
		}
		else {
			n->next = top;
			top = n;
			size++;
		}
	}

	bool isEmpty() {
		return top == nullptr;
	}
	int getSize() {
		return size;
	}
	int Top() {
		return top->data;
	}

	void Pop() {
		if (top == nullptr) {
			cout << "Stack is empty" << endl;
		}
		else {
			Node<T>* p = top;
			top = top->next;
			delete p;
			size--;
		}
	}
};
int main()
{
	Stack<int> stk;
	
	stk.push(5);
	stk.push(10);
	stk.push(15);
	stk.push(20);
	while (!stk.isEmpty()) {
		cout << stk.Top() << " ";
		stk.Pop();
	}
}
