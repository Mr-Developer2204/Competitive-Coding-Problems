#include <iostream>
using namespace std;
int top =-1;

void pop(int A[])
{
    if (top < 0)
    {
        cout << "Stack underflow"<<endl;
    }
    else
    {
        int x = A[top--];
        cout << x << " is being poped out of stack"<<endl;
    }
}

void push(int A[], int n, int element)
{
    if (top >= (n - 1))
    {
        cout << "Stack Overflow"<<endl;
    }
    else
    {
        A[++top] = element;
    }
}

bool isempty(int A[],int n){

    if(top<0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

void print(int A[],int n)
{
    cout<<"\n";
    for (int i = top; i>=0; i--)
    {
        cout<<A[i] <<" ";
    }
    cout<<"\n";
}


int main()
{
    top=-1;
    int n;
    cout << "Enter size of stack : ";
    cin >> n;
    int x=0;
    
        int A[n];
        
        
    do
    {    
        int choice;
        cout << "Enter 1 to push and 2 to pop: \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int element;
            cout << "Enter element to push :";
            cin >> element;
            push(A, n, element);
            cout<<"\nAfter pushing: "<<endl;
            cout<<"\nTOP = "<<top;
            print(A,n);
            cout<<"\nChoose 1 to continue: ";
            cin>>x;
            break;
        }

        case 2:
        {
            
            cout<<"\nTOP = "<<top<<endl;
            if(isempty(A,n))
                cout<<"\nNothing to pop Please push first\n"; 
            else
            {
                pop(A);
                cout<<"After poping: "<<endl;
                print(A,n);
            }           
            cout<<"Choose 1 to continue: ";
            cin>>x;
            break;
        }

        default:
        {
            cout<<"Choose 1 to continue: ";
            cin>>x;
            break;
        }

        }
    } while (x == 1);
    

    return 0;
}
