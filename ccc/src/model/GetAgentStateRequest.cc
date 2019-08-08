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

#include <alibabacloud/ccc/model/GetAgentStateRequest.h>

using AlibabaCloud::CCC::Model::GetAgentStateRequest;

GetAgentStateRequest::GetAgentStateRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetAgentState")
{}

GetAgentStateRequest::~GetAgentStateRequest()
{}

std::string GetAgentStateRequest::getAgentId()const
{
	return agentId_;
}

void GetAgentStateRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setCoreParameter("AgentId", agentId);
}

std::string GetAgentStateRequest::getInstanceId()const
{
	return instanceId_;
}

void GetAgentStateRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string GetAgentStateRequest::getDn()const
{
	return dn_;
}

void GetAgentStateRequest::setDn(const std::string& dn)
{
	dn_ = dn;
	setCoreParameter("Dn", dn);
}

std::string GetAgentStateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAgentStateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

