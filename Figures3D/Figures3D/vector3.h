#pragma once
#include <iostream> // For operator << with std::ostream overloading

namespace Figures
{

	struct Vector3
	{
		float x, y, z;


		Vector3(float x = 0, float y = 0, float z = 0) :
			x(x),
			y(y),
			z(z)
		{ }


		Vector3 operator+(const Vector3& r) const;

		Vector3& operator+=(const Vector3& r);

		bool operator==(const Vector3& r) const;


		friend std::ostream& operator<<(std::ostream& os, const Vector3& vector);
	};

}