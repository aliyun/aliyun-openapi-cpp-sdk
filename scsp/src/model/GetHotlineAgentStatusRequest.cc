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

#include <alibabacloud/scsp/model/GetHotlineAgentStatusRequest.h>

using AlibabaCloud::Scsp::Model::GetHotlineAgentStatusRequest;

GetHotlineAgentStatusRequest::GetHotlineAgentStatusRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GetHotlineAgentStatus")
{
	setMethod(HttpRequest::Method::Post);
}

GetHotlineAgentStatusRequest::~GetHotlineAgentStatusRequest()
{}

std::string GetHotlineAgentStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void GetHotlineAgentStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string GetHotlineAgentStatusRequest::getAccountName()const
{
	return accountName_;
}

void GetHotlineAgentStatusRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

