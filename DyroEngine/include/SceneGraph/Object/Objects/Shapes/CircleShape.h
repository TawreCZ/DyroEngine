#ifndef _CIRCLESHAPE_H
#define _CIRCLESHAPE_H

#include "SceneGraph/Object/Objects/Shapes/Shape.h"
#include "Interfaces/IFillableShape.h"

#ifndef _VECTOR2D_H
#include "Helpers/Math/Vector2D.h"
#endif

class Renderer;

class CircleShape : public Shape, public IFillableShape
{
public:
	CircleShape(float xcenter, float ycenter, float r, float lineWidth = 0.5f);
	CircleShape(const Vector2D& center, float r, float lineWidth = 0.5f);
	virtual ~CircleShape();

	virtual void setFill(bool fill);
	virtual bool getFill() const;

	virtual void render(Renderer* renderer);

private:
	Vector2D center;
	float radius;
	float line_width;
};

#endif