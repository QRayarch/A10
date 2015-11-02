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
<<<<<<< HEAD
	void AddBox(std::vector<vector3> verticies);
	void SwitchBoxVisibility();
	void GetBoundingObjNumber();
	void SetColor();
	void SetVisibility(int bo, bool visible);
=======
	void AddBox(std::vector<vector3>);
	void SwitchBoxVisibility(int, bool);
	int GetBoundingObjNumber();
	void SetColor(int, vector3);
	void SetVisibility();
>>>>>>> 110c334348b66cf0b76d94ba83ac83891c66b638
	void RenderSetting();
	void CheckCollisions();

};

