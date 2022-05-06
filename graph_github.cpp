#include<iostream>
using namespace std;
class graph
{
    int n;
    int **ptr;
public:
    void create(int k)
    {
        n=k;
        ptr= new int *[k];
        for(int i=0; i<k; i++)
        {
            ptr[i]=new int [k];
            for(int j=0; j<k; j++)
            {
                ptr[i][j]=0;
            }
        }
    }
    void display()
    {
        for(int i=0; i<n; i++)
        {
            cout<<"vertex "<<i<<"->";  
            for(int j=0; j<n; j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void add(int s,int d)
    {
      ptr[s][d]=1;
      ptr[d][s]=1;
    }
    ~graph()
    {
        for(int i=0; i<n; i++)
        {
            delete ptr[i];
        }
        delete ptr;
    }



};
int main()
{
    graph g1;
    g1.create(5);
    g1.add(1,2);
    g1.add(1,4);
    g1.add(1,3);
    g1.add(2,4);
    
    g1.display();

    return 0;
}