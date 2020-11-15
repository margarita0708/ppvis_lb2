#include "vector3.h"

namespace Figures
{

	Vector3 Vector3::operator+(const Vector3& r) const
	{
		return
			Vector3(
				this->x + r.x,
				this->y + r.y,
				this->z + r.z
			);
	}

	Vector3& Vector3::operator+=(const Vector3& r)
	{
		this->x += r.x;
		this->y += r.y;
		this->z += r.z;

		return *this;
	}

	bool Vector3::operator==(const Vector3 & r) const
	{
		return this->x == r.x 
			&& this->y == r.y
			&& this->z == r.z;
	}


	std::ostream& operator<<(std::ostream& os, const Vector3& vector)
	{
		os << "(" << vector.x << "," << vector.y << "," << vector.z << ")";

		return os;
	}

}