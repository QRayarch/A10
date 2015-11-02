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

void BoundingObjectManager::Release()
{
	if (instance != nullptr)
	{
		delete instance;
		instance = nullptr;
	}
}

BoundingObjectManager::~BoundingObjectManager()
{
}
