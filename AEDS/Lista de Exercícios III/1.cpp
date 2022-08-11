#include <iostream>
#include <windows.h>
#include <stack>
#include <queue>
using namespace std;

void invertefila(queue<int>& Queue)
{
	stack<int> Stack;
	while (!Queue.empty()) {
		Stack.push(Queue.front());
		Queue.pop();
	}
	while (!Stack.empty()) {
		Queue.push(Stack.top());
		Stack.pop();
	}
}

void fila(queue<int>& Queue)
{
	while (!Queue.empty()) {
		cout << Queue.front() << " ";
		Queue.pop();
	}
}


int main()
{
	queue<int> Queue;
	Queue.push(1);
	Queue.push(2);
	Queue.push(3);
	Queue.push(4);
    Queue.push(5);

	invertefila(Queue);
	fila(Queue);
}