#ifndef __BSPHERE_H_
#define __BSPHERE_H_

#include "RE\ReEngAppClass.h"

using namespace ReEng;

class BoundingSphere 
{

public:
	BoundingSphere(std::vector<vector3>listOfVertex);
	bool IsColliding(BoundingSphere* pOther);
	void UpdatePosition(vector3 v3Input);
	vector3 m_v3Center;
	float m_fRadius;
};

#endif //__BSPHERE_H_