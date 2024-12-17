#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float f ( float  , float  );

main()
{
	float x , y;
	
	cout<<"Pleasae enter x , y : "<<endl;
	cin>>x>>y;
	
	cout<<f ( x , y );
	
}

float f ( float x , float y )
{
	float s;
	s = x + y ;
	return s ;
}
