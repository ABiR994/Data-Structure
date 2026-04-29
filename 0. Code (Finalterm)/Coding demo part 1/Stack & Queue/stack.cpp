#include <iostream>
using namespace std;

class stack
{
public:
    int size = 10;
    int top = -1;
    int arr[10];

    void push(int element)
    {
        if(top == size-1)
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
            top++;
            arr[top] = element;
        }
    }

    int pop()
    {
        if(top == -1)
            cout<<"Stack is empty"<<endl;
        else
        {
            return arr[top--];
        }
    }

    void display()
    {
        for(int i=0; i<=top; i++)
            cout<<arr[i]<< " ";
    }

};

int main()
{
    stack s;

    s.push(4);
    s.push(5);
    s.display();

    cout<<"Popped: "<<s.pop()<<endl;

    s.display();

    return 0;
}
