#include<iostream>
using namespace std;

class Student 
   {
    private:
      char *name;
      int BatchNumber;
      int weightDate;
      int weight;
      Student *mother;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function 
      void isMotherOf ();
      void changeWeight (int kg);
      void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      inline int reptWeightDate () {return weightDate;};
      int daysSinceLastWeighted (int today);
   };

void Students::isMotherOf ()
{
   mother = this;
}
void Students::Create (char* m, int n, int p, int q)
{
    name=m;
    Bathch Number=n;
    weightDate=p;
    weight=q;
}

int main()
{
    Student bozo;
    bozo.Create ("Bozo", 408, 1027, 400);
    bozo.isMotherOf ();
    cout << "The day the animal was last weighed " << bozo.reptWeightDate() << endl;
    return 0;
}

