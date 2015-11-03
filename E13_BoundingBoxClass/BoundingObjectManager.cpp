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
	boundingObjList.push_back(new BoundingObject(verticies));
}

void BoundingObjectManager::Release()
{
	if (instance != nullptr)
	{
		delete instance;
		instance = nullptr;
	}
}

int BoundingObjectManager::GetBoundingObjNumber()
{
	return boundingObjList.size();
}

void BoundingObjectManager::SetColor(int bo, vector3 color)
{
	boundingObjList[bo]->SetColor(color);
}

void BoundingObjectManager::SwitchBoxVisibility(int bo, bool vis)
{
	boundingObjList[bo]->SetAABBVisibility(vis);
}

void BoundingObjectManager::SetVisibility(int bo, bool visible)
{
	boundingObjList[bo]->SetVisibility(visible);
}

void BoundingObjectManager::RenderSetting(bool visible)
{
	for (int i = 0; i < boundingObjList.size(); i++)
	{
		boundingObjList[i]->SetVisibility(visible);
	}
}
void BoundingObjectManager::RenderSetting(bool visible, int bo)
{
	boundingObjList[bo]->SetVisibility(visible);
}
void BoundingObjectManager::CheckCollisions()
{
	for (int i = 0; i < boundingObjList.size(); i++)
	{
		for (int j = 0; j < boundingObjList.size(); j++)
		{
			if (i != j)
			{
				if (boundingObjList[i]->IsColliding(boundingObjList[j]))
				{
					SetColor(i, RERED);
					SetColor(j, RERED);
				}
				else
				{
					SetColor(i, REWHITE);
					SetColor(j, REWHITE);
				}
			}
		}
	}
}
