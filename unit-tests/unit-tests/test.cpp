#include "pch.h"

#include "../../Figures3D/Figures3D/vector3.cpp"
#include "../../Figures3D/Figures3D/cone.cpp"
#include "../../Figures3D/Figures3D/cylinder.cpp"
#include "../../Figures3D/Figures3D/sphere.cpp"

using namespace Figures;

TEST(Vector3Testing, Operations)
{
	Vector3 first(1, -1, 2);
	Vector3 second(1, 0, -5);

	Vector3 result = first + second;
	Vector3 expecting(2, -1, -3);

	EXPECT_EQ(result, expecting);

	first += second;

	EXPECT_EQ(first, expecting);
}


TEST(ConeTesting, Creation)
{
	Vector3 center(1, 2, 3);
	float radius = 2;
	float height = 5;

	Cone cone(center, radius, height);

	EXPECT_EQ(cone.GetHeight(), height);
	EXPECT_EQ(cone.GetBaseCenter(), center);
}

TEST(ConeTesting, Moving)
{
	Vector3 center(1, 2, 3);
	float radius = 2;
	float height = 5;

	Cone cone(center, radius, height);

	Vector3 toMove(3, -1, 0);

	cone.Move(toMove);

	EXPECT_EQ(cone.GetHeight(), height);
	EXPECT_EQ(cone.GetBaseCenter(), center + toMove);
}

TEST(ConeTesting, ChangingParams)
{
	Vector3 center(1, 2, 3);
	float radius = 2;
	float height = 5;

	Cone cone(center, radius, height);

	center = Vector3(3, 2, 1);
	radius = 5;
	height = 10;

	cone.SetBaseCenter(center);
	cone.SetBaseRadius(radius);
	cone.SetHeight(height);

	EXPECT_EQ(cone.GetBaseCenter(), center);
	EXPECT_EQ(cone.GetBaseRadius(), radius);
	EXPECT_EQ(cone.GetHeight(), height);
}

TEST(ConeTesting, Params)
{
	Vector3 center(1, 2, 3);
	float radius = 2;
	float height = 5;

	Cone cone(center, radius, height);

	EXPECT_FLOAT_EQ(cone.GetVolume(), 20.94395);
	EXPECT_FLOAT_EQ(cone.GetSideSurfaceArea(), 33.835987);
	EXPECT_FLOAT_EQ(cone.GetSurfaceArea(), 46.402359);
}


TEST(SphereTesting, Creation)
{
	Vector3 center(5, 1, 7);
	float radius = 3;

	Sphere sphere(center, radius);

	EXPECT_EQ(sphere.GetCenter(), center);
	EXPECT_EQ(sphere.GetRadius(), radius);
}

TEST(SphereTesting, Moving)
{
	Vector3 center(5.15, 1.1, 7.1);
	float radius = 3;

	Sphere sphere(center, radius);

	Vector3 toMove(1, -25, 35.2);

	sphere.Move(toMove);

	EXPECT_EQ(sphere.GetCenter(), center + toMove);
	EXPECT_EQ(sphere.GetRadius(), radius);
}

TEST(SphereTesting, ChangingParams)
{
	Vector3 center(5.15, 1.1, 7.1);
	float radius = 3;

	Sphere sphere(center, radius);

	center = Vector3(3, 2, 1);
	radius = 5;

	sphere.SetCenter(center);
	sphere.SetRadius(radius);

	EXPECT_EQ(sphere.GetCenter(), center);
	EXPECT_EQ(sphere.GetRadius(), radius);
}

TEST(SphereTesting, Params)
{
	Vector3 center(5.15, 1.1, 7.1);
	float radius = 3;

	Sphere sphere(center, radius);

	EXPECT_FLOAT_EQ(sphere.GetVolume(), 113.09734);
	EXPECT_FLOAT_EQ(sphere.GetSurfaceArea(), 113.09734);
}


TEST(CylinderTesting, Creation)
{
	Vector3 center(2.3, 17.6, -2.3);
	float radius = 3;
	float height = 5;

	Cylinder cylinder(center, radius, height);

	EXPECT_EQ(cylinder.GetBaseCenter(), center);
	EXPECT_EQ(cylinder.GetBaseRadius(), radius);
	EXPECT_EQ(cylinder.GetHeight(), height);
}

TEST(CylinderTesting, Moving)
{
	Vector3 center(2.3, 17.6, -2.3);
	float radius = 3;
	float height = 5;

	Cylinder cylinder(center, radius, height);

	Vector3 toMove(-1.2, 25, 14.72);

	cylinder.Move(toMove);

	EXPECT_EQ(cylinder.GetBaseCenter(), center + toMove);
	EXPECT_EQ(cylinder.GetBaseRadius(), radius);
	EXPECT_EQ(cylinder.GetHeight(), height);
}

TEST(CylinderTesting, ChangingParams)
{
	Vector3 center(1, 2, 3);
	float radius = 2;
	float height = 5;

	Cylinder cylinder(center, radius, height);

	center = Vector3(3, 2, 1);
	radius = 5;
	height = 10;

	cylinder.SetBaseCenter(center);
	cylinder.SetBaseRadius(radius);
	cylinder.SetHeight(height);

	EXPECT_EQ(cylinder.GetBaseCenter(), center);
	EXPECT_EQ(cylinder.GetBaseRadius(), radius);
	EXPECT_EQ(cylinder.GetHeight(), height);
}

TEST(CylinderTesting, Params)
{
	Vector3 center(1, 2, 3);
	float radius = 2;
	float height = 5;

	Cylinder cylinder(center, radius, height);

	EXPECT_FLOAT_EQ(cylinder.GetVolume(), 62.83185);
	EXPECT_FLOAT_EQ(cylinder.GetSideSurfaceArea(), 62.831852);
	EXPECT_FLOAT_EQ(cylinder.GetSurfaceArea(), 87.964592);
}