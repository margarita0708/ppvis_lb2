#include "sphere.h"
#include "cone.h"
#include "cylinder.h"

#include <iostream>

using namespace std;
int main()
{
	Figures::Sphere sphere(
		Figures::Vector3(3, 3, 3), 
		1
	);

	Figures::Cone cone(
		Figures::Vector3(2, 2, 2),
		1, 
		2
	); 

	Figures::Cylinder cylinder(
		Figures::Vector3(1, 1, 1),
		1,
		2
	);

	cout << "Sphere: " << endl;

	cout << "  Center:            " << sphere.GetCenter()				<< endl;
	cout << "  Radius:            " << sphere.GetRadius()				<< endl;
	cout << "  Volume:            " << sphere.GetVolume()				<< endl;
	cout << "  Suface Area:       " << sphere.GetSurfaceArea()			<< endl;

	cout << endl;

	cout << "Cone: " << endl;

	cout << "  Base Center:       " << cone.GetBaseCenter()			<< endl;
	cout << "  Base Radius:       " << cone.GetBaseRadius()			<< endl;
	cout << "  Volume:            " << cone.GetVolume()				<< endl;
	cout << "  Side Surface Area: " << cone.GetSideSurfaceArea()		<< endl;
	cout << "  Surface Area:      " << cone.GetSurfaceArea()			<< endl;

	cout << endl;

	cout << "Cylinder: " << endl;

	cout << "  Base Center:       " << cylinder.GetBaseCenter()		<<endl;
	cout << "  Base Radius:       " << cylinder.GetBaseRadius()		<< endl;
	cout << "  Height:            " << cylinder.GetHeight()			<< endl;
	cout << "  Volume:            " << cylinder.GetVolume()			<< endl;
	cout << "  Side Surface Area: " << cylinder.GetSideSurfaceArea()	<< endl;
	cout << "  Surface Area:      " << cylinder.GetSurfaceArea()		<< endl;

	cout << endl;

	system("pause");
	return 0;
}