// Stack - Object oriented implementation using arrays
#include <iostream>
#include <conio.h>
using namespace std;
#define MAX_SIZE 101 

class Stack
{
private:
  int A[MAX_SIZE];  // array to store the stack
	int top;   // variable to mark the top index of stack. 
public:
	// constructor
	Stack()
	{
		top = -1; // for empty array, set top = -1
	}

	// Push operation to insert an element on top of stack. 
	void Push(int x) 
	{
	  if(top == MAX_SIZE -1) { // overflow case. 
			cout<<"Error: stack overflow\n";
			return;
		}
		A[++top] = x;
	}
 
	// Pop operation to remove an element from top of stack.
	void Pop() 
	{
		if(top == -1) { // If stack is empty, pop should throw error. 
			cout<<"Error: No element to pop\n";
			return;
		}
		top--;
	}
 
	// Top operation to return element at top of stack. 
	int Top() 
	{
		return A[top];
	}
 
	// This function will return 1 (true) if stack is empty, 0 (false)
	int IsEmpty()
	{
		if(top == -1) return 1;
		return 0;
	}

	void Print() {
		int i;
		cout<<"Stack: ";
		for(i = 0;i<=top;i++)
			cout<<A[i];
		cout<<"\n";
	}
};
int  main()
{
	Stack S;
	int x,c=0,n=1;
	while(n==1)
		{
			cout<<"Enter the number to push ";
			cin>>x;
			S.Push(x);
			S.Print();
			cout<<"Do u want to delete/pop an element (y==1/n==0) ";
			cin>>c;
			if(c==1)
			{
			S.Pop();
			S.Print();
			}
			cout<<"do u want to push more elements? (y==1/n==0) ";
			cin>>n;
		}
	getch();
	
}