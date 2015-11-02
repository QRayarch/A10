#pragma once

#include "BoundingSphere.h"
#include "MyBoundingBoxClass.h"
#include "RE\ReEngAppClass.h"


class BoundingObject
{
private:
	BoundingSphere* sphere;
	MyBoundingBoxClass* ob;
	MyBoundingBoxClass* realign;

	bool isVisible;
	vector3 color;
public:
	BoundingObject(std::vector<vector3>);
	~BoundingObject();

	void Draw();
	bool IsColliding(BoundingObject*);
	bool GetVisibility();
	void SetVisibility(bool);
	vector3 GetGlobalCenter();
	//vector3 GetMin();
	//vector3 GetMax();
};
