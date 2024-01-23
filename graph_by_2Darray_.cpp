#include "karan.h"
class Graph
{
   int m, n, sour, des;
   int **arr;

public:
   Graph()
   {
      cout << "Enter the number of row =>" << endl;
      cin >> m;
      cout << "Enter the number of colum =>" << endl;
      cin >> n;
      arr = new int *[m];
      for (int i = 0; i < m; i++)
      {
         arr[i] = new int[n];
         for (int j = 0; j < n; j++)
         {
            arr[i][j] = 0;
         }
      }
   }
   void add_adge()
   {
      cout << "\t\t\t\tEnter the source => ";
      cout << "\t\t";
      cin >> sour;
      cout << "\t\t\t\tEnter the destination => ";
      cout << "\t";
      cin >> des;
      if ((sour >= 0 && sour < m) && (des >= 0 && des < n))
      {
         arr[sour][des] = 1;
      }
      else
      {
         cout << "Invalid index " << endl;
         return;
      }
   }
   void remove_adge()
   {
      cout << "\t\t\t\tEnter the source => ";
      cout << "\t\t";
      cin >> sour;
      cout << "\t\t\t\tEnter the destination => ";
      cout << "\t";
      cin >> des;
      if ((sour >= 0 && sour < m) && (des >= 0 && des < n))
      {
         arr[sour][des] = 0;
      }
      else
      {
         cout << "Invalid index " << endl;
         return;
      }
   }

   void display()
   {

      for (int i = 0; i < m; i++)
      {
         cout << "\t\t\t\t" << i << " ";
         for (int j = 0; j < n; j++)
         {
            cout << arr[i][j] << " ";
         }
         cout << endl;
      }
   }
};
int main()
{
   Graph g1;
   int cmd;
   while (1)
   {
      system("cls");
      g1.display();
      cout << endl << endl;
      cout << "\t\t\t\t1.add adge in graph " << endl;
      cout << "\t\t\t\t2.remove adge in graph " << endl;
      cout << "\t\t\t\t3.exit" << endl;
      cout << "\t\t\t\tEnter the choice => ";
      cin >> cmd;
      switch (cmd)
      {
      case 1:
         g1.add_adge();
         break;
      case 2:
         g1.remove_adge();
         break;
      case 3:
         exit(0);
      default:
         cout << "Invalid choice ! " << endl;
         break;
      }
   }

   return 0;
}