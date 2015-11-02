#include "BoundingObject.h"


BoundingObject::BoundingObject(std::vector<vector3> vertices)
{
	sphere = new BoundingSphere(vertices);
	ob = new MyBoundingBoxClass(vertices);
	realign = new MyBoundingBoxClass(vertices);
}


BoundingObject::~BoundingObject()
{
	if (sphere != nullptr) {
		delete sphere;
		sphere = nullptr;
	}

	if (ob != nullptr) {
		delete ob;
		ob = nullptr;
	}

	if (realign != nullptr) {
		delete realign;
		realign = nullptr;
	}
}

void BoundingObject::Draw() {

}


bool BoundingObject::IsColliding(BoundingObject* other) {
	if (!other->sphere->IsColliding(sphere)) return;
	return other->realign->IsColliding(realign);
}

