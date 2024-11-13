#include<iostream>
using namespace std;
int stack[6],y=6,top=-1;
void push(int y){
    if(top==y-1)
    {
        cout<<"Overflow"<<endl;

    }else{
        top++;
        stack[top]=y;
    }
}
    void pop(){
        if(top==-1)
        {
            cout<<"Stact is empty"<<endl;
        }else{
            cout<<"The pop element is:"<<stack[top]<<endl;
            top--;
        }
    }
    void display()
    {
        if(top>=0)
        {
            cout<<"stack element are"<<endl;
            for(int i=top; i>=0; i--)
            {
                cout<<stack[i]<<"  "<<endl;
            }

           }else{
                 cout<<"stack is overflow"<<endl;
            }
        }

        int peek()
        {
            return stack[top];
        }
        int main()
        {
             int ch;
             while (1)
             {
                  cout<<"Choice number: ";
                  cin>>ch;
                  switch(ch)
                  {
                    case 1:
                    int a;
                    cout<<"push element: ";
                    cin>>a;
                    push(a);
                    break;

                    case 2: pop();
                        break;

                    case 3:
                    display();
                    break;

                    default:
                    cout<<"Exit "<<endl;

                  }
                  int z=peek();
                  cout<<"The top element is:"<<z<<endl;

             }
             
             
        }
    



