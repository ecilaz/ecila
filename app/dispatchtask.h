#pragma once


#include "../infra/itask.h"
#include "../infra/msgqueue.h"
#include "../infra/bufferpool.h"







class HttpMsgDispatcherDic;

class DispatchTask
:	public NS_ECILA::ITask
{
public:

			 DispatchTask();
	virtual ~DispatchTask();

	virtual bool_t Run();
	virtual bool_t Root(NS_ECILA::Node *root);


private:

    NS_ECILA::Node          *root_;
	NS_ECILA::MsgQueue		*dispatch_q_;
	NS_ECILA::BufferPool	*buff_pool_;
	HttpMsgDispatcherDic	*httpd_dic_;

	void CacheNode(NS_ECILA::Node *root);

	bool_t DispatchMsg();

};

