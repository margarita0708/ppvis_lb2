#pragma once
#include "figure3D.h"

namespace Figures
{

	class Sphere : public Figure3D
	{
	public:

		Sphere(const Vector3& center, const float radius) :
			_center(center),
			_radius(radius)
		{ }


		void Move(const Vector3& offset) override;


		float GetVolume() const override;

		float GetSurfaceArea() const override;


		void SetCenter(const Vector3& newCenter);
		Vector3 GetCenter() const;

		void SetRadius(const float newRadius);
		float GetRadius() const;

	private:

		Vector3 _center;
		float _radius;

	};

}