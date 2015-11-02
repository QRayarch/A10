#pragma once

#include "RE\ReEngAppClass.h"
#include "BoundingObject.h"

class BoundingObjectManager
{
	
private:
	BoundingObjectManager();
	std::vector<BoundingObject> boundingObjList;
public:
	static BoundingObjectManager* instance;
	static BoundingObjectManager* GetInstance();
	static void Release();
	void AddBox(std::vector<vector3> verticies);
	void SwitchBoxVisibility();
	void GetBoundingObjNumber();
	void SetColor();
	void SetVisibility(int bo, bool visible);
	void RenderSetting();
	void CheckCollisions();

};

