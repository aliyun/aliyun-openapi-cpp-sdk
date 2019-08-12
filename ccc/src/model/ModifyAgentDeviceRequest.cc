/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ccc/model/ModifyAgentDeviceRequest.h>

using AlibabaCloud::CCC::Model::ModifyAgentDeviceRequest;

ModifyAgentDeviceRequest::ModifyAgentDeviceRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifyAgentDevice")
{}

ModifyAgentDeviceRequest::~ModifyAgentDeviceRequest()
{}

long ModifyAgentDeviceRequest::getAgentDeviceId()const
{
	return agentDeviceId_;
}

void ModifyAgentDeviceRequest::setAgentDeviceId(long agentDeviceId)
{
	agentDeviceId_ = agentDeviceId;
	setCoreParameter("AgentDeviceId", agentDeviceId);
}

std::string ModifyAgentDeviceRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyAgentDeviceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

int ModifyAgentDeviceRequest::getIsLogin()const
{
	return isLogin_;
}

void ModifyAgentDeviceRequest::setIsLogin(int isLogin)
{
	isLogin_ = isLogin;
	setCoreParameter("IsLogin", isLogin);
}

std::string ModifyAgentDeviceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAgentDeviceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

