#include <iostream>

using namespace std;

class Process
{
    int id,arr_t,burst_t,wait_t,tat,comp_t;
    public:
    void input(Process *, int);
    void sort(Process *, int);
    void calc(Process *, int);
    void show(Process *, int);
};

void Process::input(Process* p, int n)
{
    for(int i=0;i<n;i++){
        cout<<"enter arrival time of p"<<i+1<<":";
        cin>>p[i].arr_t;
        cout<<"enter burst time of p"<<i+1<<":";
        cin>>p[i].burst_t;
        p[i].id=i+1;
    }
}

void Process::sort(Process* p, int n)
{
    
}

void Process::show(Process* p, int n)
{
    cout<<"id\tarrival\tburst\twait\ttat\tcompletion\n";
    for(int i=0;i<n;i++){
        cout<<p[i].id<<"\t"<<p[i].arr_t<<"\t"<<p[i].burst_t<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter no of processes :";
    cin>>n;
    Process* p=new Process[n];
    Process f;
    f.input(p, n);
    f.show(p, n);

    return 0;
}