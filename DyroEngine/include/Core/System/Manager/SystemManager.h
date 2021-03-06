#ifndef _SYSTEMMANAGER_H
#define _SYSTEMMANAGER_H

#include "Helpers/Manager.h"

#ifndef _VECTOR_
	#include <vector>
#endif

#ifndef _SYSTEMTYPE_H
	#include "Defines/Types/SystemType.h"
#endif

class System;
class SystemFactory;

class SystemManager : public Manager
{
public:
	SystemManager();
	virtual ~SystemManager();

	virtual bool initialize();
	virtual bool shutdown();

	System* getSystem(SystemType type);

	std::vector<System*>& getDrawableSystems();
	std::vector<System*>& getSystems();

private:

	std::vector<System*> vec_systems;
	std::vector<System*> vec_drawable_systems;

	SystemFactory* factory;
};

#endif //_SYSTEMMANAGER
