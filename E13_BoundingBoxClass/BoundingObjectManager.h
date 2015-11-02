#pragma once

#include "RE\ReEngAppClass.h"

class BoundingObjectManager
{
	
private:
	BoundingObjectManager();
	~BoundingObjectManager();
public:
	static BoundingObjectManager* instance;
	static BoundingObjectManager* GetInstance();
	static void Release();
	
	
};

