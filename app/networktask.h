#pragma once


#include "../infra/itask.h"
#include "../infra/iactsession.h"
#include "../infra/idemultiplexer.h"
#include "../infra/msgqueue.h"
#include "../infra/bufferpool.h"








class NetworkTask
:	public NS_ECILA::ITask
{
public:

			 NetworkTask();
	virtual ~NetworkTask();

	virtual bool_t Run();
	virtual bool_t Root(NS_ECILA::Node *root);


private:

    NS_ECILA::Node              *root_;
	NS_ECILA::IDemultiplexer	*demultiplexer_;
	NS_ECILA::MsgQueue			*network_q_;
	NS_ECILA::BufferPool		*buff_pool_;
	NS_ECILA::IActSession		*act_sess_pool_;

	void CacheNode(NS_ECILA::Node *root);

	bool_t DispatchMsg();

};

