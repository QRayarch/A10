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
	void AddBox(std::vector<vector3>);
	void SwitchBoxVisibility(int, bool);
	int GetBoundingObjNumber();
	void SetColor(int, vector3);
	void SetVisibility();
	void RenderSetting();
	void CheckCollisions();

};

