
#include<iostream>
using namespace std;

class Queue
{
public:
    int ar[20];
    int front,rear;

    Queue()
    {
        front=-1;
        rear=-1;
    }
    void enque(int , int);
    void deque();
    //int Front();
   // int Rear();
    void display(int );
};

void Queue::enque(int val,int num)
{
if(front==0 && rear==num-1)
    {
    cout<<"Queue Overflow";
    cout<<endl<<"front is"<<front<<endl;
        cout<<"rear is"<<rear<<endl;
    }
else if(front==-1 && rear==-1)
{
    front++;
    rear++;
    ar[rear]=val;
    cout<<endl<<"front is"<<front<<endl;
        cout<<"rear is"<<rear<<endl;
}
else{
    rear++;
    ar[rear]=val;
    cout<<endl<<"front is"<<front<<endl;
        cout<<"rear is"<<rear<<endl;
    }
}
void Queue :: deque()
{
if(front==-1 && rear==-1)
{
	cout<<"queue underflow";
	cout<<endl<<"front is"<<front<<endl;
        cout<<"rear is"<<rear<<endl;
}
else if(front==rear)
{
	cout<<"the dequeue ele is "<<ar[front];
	front=-1;
	rear=-1;
	cout<<endl<<"front is"<<front<<endl;
        cout<<"rear is"<<rear<<endl;
}
else
{
	cout<<"the dequeue ele is "<<ar[front];
	front++;
	cout<<endl<<"front is"<<front<<endl;
        cout<<"rear is"<<rear<<endl;

}

}


void Queue :: display(int n)
{
    int i=0;
    for(i=front;i<=rear;i++)
    {
        cout<<ar[i]<<endl;

    }
}
main()
{
    int b,ch,n,i,count=0;
cout<<"enter the size"<<endl;
cin>>n;
    Queue q;
    cout<<"enter your choice";
    cin>>ch;
while(ch!=0)
{
    switch(ch)
{
case 1:
    while(count!=n)
    {
    cin>>b;
    q.enque(b,n);
    count++;

    }
    break;
case 2:
    q.deque();
    break;
case 3:
	//q.Front();
	q.display(n);
	break;
//case 4:
default:
    cout<<"\n invalid choice";
}
cout<<"enter your choice";
cin>>ch;
}

}
