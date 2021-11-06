#include"IOrder.h"


// IOrder

IOrder::IOrder(char* ownerName, const CTime& departDay, Flight* flight)
	:m_OwnerName(ownerName)
	,m_DepartDay(departDay)
	,m_Flight(flight)
{
	srand((unsigned)CTime::GetCurrentTime().GetTime());
	m_OrderNum = rand();
}

int IOrder::getNo()
{
	return m_OrderNum;
}

char* IOrder::getName()
{
	return m_OwnerName;
}

CTime& IOrder::getDepartDay()
{
	return m_DepartDay;
}

Flight* IOrder::getFlight()
{
	return m_Flight;
}


// IOrderManager 

int IOrderManager::create(char* ownerName, const CTime& t, Flight* pFlight)
{
	IOrder* newOrder = new IOrder(ownerName, t, pFlight);
	m_Map.insert(std::make_pair(newOrder->getNo(), newOrder));
	return newOrder->getNo();
}

IOrder* IOrderManager::getOrder(int n)
{
	auto iter = m_Map.find(n);
	if (iter != m_Map.end())
		return iter->second;
	return nullptr;
}

std::vector<IOrder*>& IOrderManager::getOrder(char* ownerName)
{
	std::vector<IOrder*> returnArr;
	for (auto& iter : m_Map)
	{
		if (iter.second->getName() == ownerName)
			returnArr.push_back(iter.second);
	}
	return returnArr;
}

void IOrderManager::remove(int n)
{
	auto iter = m_Map.find(n);
	if (iter != m_Map.end())
	{
		IOrder* pObj = iter->second;
		m_Map.erase(iter);
		delete pObj;
	}
}
