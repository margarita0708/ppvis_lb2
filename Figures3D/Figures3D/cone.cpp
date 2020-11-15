#include "cone.h"

namespace Figures
{

	void Cone::Move(const Vector3& offset)
	{
		this->_baseCenter += offset;
	}


	float Cone::GetVolume() const
	{
		return 1.0 / 3.0 * this->GetBaseArea() * this->_height;
	}

	float Cone::GetBaseArea() const
	{
		return M_PI * pow(this->_baseRadius, 2);
	}

	float Cone::GetSurfaceArea() const
	{
		return M_PI * pow(this->_baseRadius, 2) + this->GetSideSurfaceArea();
	}

	float Cone::GetSideSurfaceArea() const
	{
		return M_PI * this->_baseRadius * this->GetGeneratrix();
	}

	float Cone::GetGeneratrix() const
	{
		return sqrt(pow(this->_height, 2) + pow(this->_baseRadius, 2));
	}


	void Cone::SetBaseCenter(const Vector3& newCenter) 
	{ 
		this->_baseCenter = newCenter; 
	}

	Vector3 Cone::GetBaseCenter() const 
	{ 
		return this->_baseCenter; 
	}

	void Cone::SetBaseRadius(const float newRadius) 
	{ 
		this->_baseRadius = newRadius; 
	}

	float Cone::GetBaseRadius() const 
	{ 
		return this->_baseRadius; 
	}

	void Cone::SetHeight(const float newHeight) 
	{ 
		this->_height = newHeight; 
	}

	float Cone::GetHeight() const 
	{ 
		return this->_height; 
	}

}