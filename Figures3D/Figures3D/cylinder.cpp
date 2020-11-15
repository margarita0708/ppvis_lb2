#include "cylinder.h"

namespace Figures
{

	void Cylinder::Move(const Vector3& offset)
	{
		this->_baseCenter += offset;
	}


	float Cylinder::GetVolume() const
	{
		return this->GetBaseArea() * this->_height;
	}

	float Cylinder::GetSurfaceArea() const
	{
		return 2 * this->GetBaseArea() + this->GetSideSurfaceArea();
	}


	float Cylinder::GetBaseArea() const
	{
		return M_PI * pow(this->_baseRadius, 2);
	}

	float Cylinder::GetSideSurfaceArea() const
	{
		return M_PI * 2 * this->_baseRadius * this->_height;
	}

	void Cylinder::SetBaseCenter(const Vector3& newCenter) 
	{ 
		this->_baseCenter = newCenter; 
	}

	Vector3 Cylinder::GetBaseCenter() const 
	{ 
		return this->_baseCenter; 
	}

	void Cylinder::SetBaseRadius(const float newRadius) 
	{ 
		this->_baseRadius = newRadius; 
	}

	float Cylinder::GetBaseRadius() const 
	{ 
		return this->_baseRadius; 
	}

	void Cylinder::SetHeight(const float newHeight) 
	{ 
		this->_height = newHeight; 
	}

	float Cylinder::GetHeight() const 
	{ 
		return this->_height; 
	}

}