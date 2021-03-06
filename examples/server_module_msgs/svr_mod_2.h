///////////////////////////////////////////////////////////////////////////////

#ifndef _SVR_MOD_2_H_
#define _SVR_MOD_2_H_

#include "ise/main/ise.h"
#include "svr_mod_msgs.h"

using namespace ise;

///////////////////////////////////////////////////////////////////////////////

class ServerModule_2: public IseServerModule
{
public:
    virtual void onSvrModMessage(BaseSvrModMessage& message);
};

///////////////////////////////////////////////////////////////////////////////

#endif // _SVR_MOD_2_H_
