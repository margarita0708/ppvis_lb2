#include "sphere.h"

namespace Figures
{

	void Sphere::Move(const Vector3& offset) 
	{ 
		this->_center += offset; 
	}


	float Sphere::GetVolume() const
	{
		return 4.0 / 3.0 * M_PI * pow(this->_radius, 3);
	}

	float Sphere::GetSurfaceArea() const
	{
		return 4.0 * M_PI * pow(this->_radius, 2);
	}


	void Sphere::SetCenter(const Vector3& newCenter)
	{ 
		this->_center = newCenter; 
	}

	Vector3 Sphere::GetCenter() const
	{ 
		return this->_center; 
	}

	void Sphere::SetRadius(const float newRadius)
	{ 
		this->_radius = newRadius; 
	}

	float Sphere::GetRadius() const
	{ 
		return this->_radius; 
	}

}