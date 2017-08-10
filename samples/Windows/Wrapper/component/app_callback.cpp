// Tencent is pleased to support the open source community by making Mars available.
// Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.

// Licensed under the MIT License (the "License"); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT

// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.

/*
*  app_callback.cpp
*
*  Created on: 2017-7-7
*      Author: chenzihao
*/
//
#include "app_callback.h"

#include <mars/comm/autobuffer.h>

namespace mars 
{
namespace app
{

// app 回调;
AppCallBack* AppCallBack::instance_ = NULL;

AppCallBack* AppCallBack::Instance()
{
    if(instance_ == NULL)
	{
        instance_ = new AppCallBack();
    }
    return instance_;
}

void AppCallBack::Release()
{
    delete instance_;
    instance_ = NULL;
}

// return your app path
std::string AppCallBack::GetAppFilePath()
{
    return "";
}
        
AccountInfo AppCallBack::GetAccountInfo()
{
    AccountInfo info;
    
    return info;
}

// 客户端版本号;
unsigned int AppCallBack::GetClientVersion()
{
    return 200;
}

DeviceInfo AppCallBack::GetDeviceInfo()
{
    DeviceInfo info;

    info.devicename = "";
    info.devicetype = 1;
    
    return info;
}

}}