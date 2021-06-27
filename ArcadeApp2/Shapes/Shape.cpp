#include "Shape.h"

void Shapes::MoveBy(const Vec2D& deltaOffset)
{
	for (Vec2D& point : mPoints)
	{
		point = point + deltaOffset;
	}
}
