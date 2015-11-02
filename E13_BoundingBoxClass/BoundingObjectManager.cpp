#include "BoundingObjectManager.h"


BoundingObjectManager::BoundingObjectManager()
{
}

BoundingObjectManager* BoundingObjectManager::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new BoundingObjectManager();
		std::cout << "Made camera" << std::endl;
	}
	return instance;
}

void BoundingObjectManager::AddBox(std::vector<vector3> verticies)
{
	boundingObjList.push_back(BoundingObject(verticies));
}

void BoundingObjectManager::Release()
{
	if (instance != nullptr)
	{
		delete instance;
		instance = nullptr;
	}
}
