#include <iostream>
using namespace std;





//  Declaring Class Point




// Class Point represents two-dimensional point
class Point
{
	public:
  	// default class constructor :
 	 Point(); 

 	// class constructor that sets the coordinates x, y to the values xval,
 	// yval:
 	 Point(int xval, int yval);

  	// type of function for moving a point by dx, dy:
  	void Move(int dx, int dy);

  	// type of functions for getting values of x, y:
  	int Set_X() const;
  	int Set_Y() const;

 	// type of functions for setting x, y to xval, yval respectively  
 	void Form_X(int xval);
 	void Form_Y(int yval);

	// private data members x, y represent coordinates of the point:
	private:
  	int X;
 	int Y;
		};  





//  Methods for class Point




	// class constructor sets X, Y to zero when no values are specified:
	Point::Point()
	{
 	  X = 0;
  	  Y = 0;
		}

	// class constructor sets X, Y to given values xval, yval:
	Point::Point(int xval, int yval)
	{
 	  X = xval;
 	  Y = yval;
		   }

	// function Move: increases the x coordinate by dx and the y
	// coordinate by dy.
	void Point::Move(int dx, int dy)
	{
  	  X += dx;
  	  Y += dy;
		  }

	// Set_X which returns the value of the X coordinate
	int Point::Set_X() const
	{
  	 return X;
		  }

	// Set_Y which returns the value of the Y coordinate
	int Point::Set_Y() const
	{
 	 return Y;
		  }

	// Form_X which sets the value of X coordinate to xval
	void Point::Form_X(int xval)
	{
 	 X = xval;
		  } 

	// Form_Y which sets the value of Y coordinate to yval
	void Point::Form_Y(int yval)
	{
 	 Y = yval;
		  } 
   





//  Declaring class Rectangle




	class rectangle
	{




		//  Methods for class Rectangle



		Point pdr,pdl,pur,pul;
		int side1()
		{ 
  		  int n;
  		  n=pdl.Set_X()-pdr.Set_X();
    		  return n;
			   }
		int side2()
 		{
  		 int n;
 		 n=pdl.Set_X()-pul.Set_X();
  		 return n;
			  }
 		public:
    		rectangle (Point pur, Point pdl)
		{
 		 int n;
 		 n=pdl.Set_X();pul.Form_X(n);
 		 n=pdl.Set_Y();pdr.Form_Y(n);
 		 n=pur.Set_Y();pul.Form_Y(n);
  		 n=pur.Set_X();pdr.Form_X(n);
		}
		rectangle ()
		{
  		pdr.Form_X(1);pdr.Form_Y(0);
  		pdl.Form_X(0);pdl.Form_Y(0);
  		pur.Form_X(0);pur.Form_Y(1);
  		pul.Form_X(1);pul.Form_Y(1);
		}
		void area()
		{
 		 cout<<side1()*side2();
		}
			};



//  main() function for testing classes Point and Rectangle




	// Testing classes Point and Rectangle
	int main()
	{
	// Declaring a point using default class constructor (x = y = 0):
 	 Point p1;
  	cout<< "The x value for p1 is " << p1.Set_X() << endl;
  	cout<< "The y value for p1 is " << p1.Set_Y() << endl;

	// Declaring a point with coordinates X = 2, Y = 3:
  	Point p2(2, 3);
  	cout<< "The x value for p2 is " << p2.Set_X() << endl;
  	cout<< "The y value for p2 is " << p2.Set_Y() << endl;

	// Moving point p2 by (1, -1):
 	 p2.Move(1, -1);
  	cout<< "After the move:" << endl;
 	 cout<< "The x value for p2 is " << p2.Set_X() << endl;
  	cout<< "The y value for p2 is " << p2.Set_Y() << endl;


  
  return 0;
}


