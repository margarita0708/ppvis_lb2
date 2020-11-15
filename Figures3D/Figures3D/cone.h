#pragma once
#include "figure3D.h"

namespace Figures
{

	class Cone : public Figure3D
	{
	public:

		Cone(const Vector3& baseCenter, const float baseRadius, const float height) :
			_baseCenter(baseCenter),
			_baseRadius(baseRadius),
			_height(height)
		{ }


		void Move(const Vector3& offset) override;


		float GetVolume() const override;

		float GetBaseArea() const;

		float GetSurfaceArea() const override;

		float GetSideSurfaceArea() const;

		float GetGeneratrix() const;


		void SetBaseCenter(const Vector3& newCenter);
		Vector3 GetBaseCenter() const;

		void SetBaseRadius(const float newRadius);
		float GetBaseRadius() const;

		void SetHeight(const float newHeight);
		float GetHeight() const;

	private:

		Vector3 _baseCenter;

		float _baseRadius;
		float _height;

	};

}