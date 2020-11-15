#pragma once
#include "vector3.h"

#define _USE_MATH_DEFINES // For M_PI and other math constants
#include <math.h>

namespace Figures
{

	class Figure3D
	{
	public:

		virtual void Move(const Vector3& offset) = 0;


		virtual float GetVolume() const = 0;

		virtual float GetSurfaceArea() const = 0;

	private:


	};

}