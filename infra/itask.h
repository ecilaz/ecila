#pragma once


#include "ecila.h"
#include "node.h"


NS_ECILA_START


class DECL_SPEC_DLL ITask
{
public:

			 ITask() {}
	virtual ~ITask() {}

	virtual bool_t Run() = 0;
	virtual bool_t Root(NS_ECILA::Node *root) = 0;

};


NS_ECILA_END

