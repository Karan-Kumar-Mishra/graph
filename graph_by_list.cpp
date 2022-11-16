#include<iostream>
#include<stdio.h>
#include<list>
using namespace std;
class graph
{
  int v;
  list<int> *l;
 public:
  void create(int x)
  {
   v=x;
   l=new list<int> [v];
  }
  void addedge(int x,int y)
  {
   l[x].push_back(y);
   l[y].push_back(x);
  }
  void display()
 {  
  for(int i=0;i<v;i++)
  {
   cout<<"vertex "<<i<<"->";
   for(int nbr:l[i])
   {
    cout<<nbr<<",";
   }
   cout<<endl;
  }
 }
};
int main()
{
  graph g1;
  g1.create(4);
  g1.addedge(0,1);
  g1.addedge(0,2);
  g1.addedge(2,3);
  g1.addedge(1,2);
  g1.display();
  return 0;
}