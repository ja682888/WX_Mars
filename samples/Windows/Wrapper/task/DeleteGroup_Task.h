//#ifndef _DeleteGroupIN_CGI_TASK_H_
//#define _DeleteGroupIN_CGI_TASK_H_
//
//#include "task/CGITask.h"
//#include "mars/boost/weak_ptr.hpp"
//#include "tars/access_tars.h"
//
//class DeleteGroup_Task;
//
//// DeleteGroup����ص�;
//class DeleteGroup_Callback
//{
//public:
//	virtual void OnResponse(DeleteGroup_Task* task, MessageService::DeleteGroupResp& response) = 0;
//};
//
//// DeleteGroup����;
//class DeleteGroup_Task : public CGITask 
//{
//public:
//	virtual bool Req2Buf(uint32_t _taskid, void* const _user_context, AutoBuffer& _outbuffer, AutoBuffer& _extend, int& _error_code, const int _channel_select);
//	virtual int Buf2Resp(uint32_t _taskid, void* const _user_context, const AutoBuffer& _inbuffer, const AutoBuffer& _extend, int& _error_code, const int _channel_select);
//
//	std::string strAppID;
//	std::string strAppToken;
//	std::string strUserID;
//	std::string strUserName;
//	int iDeviceType;
//	std::string strDeviceToken;
//
//	DeleteGroup_Callback* pCallback;
//};
//
//#endif