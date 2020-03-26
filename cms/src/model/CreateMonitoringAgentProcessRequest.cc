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

#include <alibabacloud/cms/model/CreateMonitoringAgentProcessRequest.h>

using AlibabaCloud::Cms::Model::CreateMonitoringAgentProcessRequest;

CreateMonitoringAgentProcessRequest::CreateMonitoringAgentProcessRequest() :
	RpcServiceRequest("cms", "2019-01-01", "CreateMonitoringAgentProcess")
{
	setMethod(HttpRequest::Method::Post);
}

CreateMonitoringAgentProcessRequest::~CreateMonitoringAgentProcessRequest()
{}

std::string CreateMonitoringAgentProcessRequest::getProcessName()const
{
	return processName_;
}

void CreateMonitoringAgentProcessRequest::setProcessName(const std::string& processName)
{
	processName_ = processName;
	setParameter("ProcessName", processName);
}

std::string CreateMonitoringAgentProcessRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateMonitoringAgentProcessRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateMonitoringAgentProcessRequest::getProcessUser()const
{
	return processUser_;
}

void CreateMonitoringAgentProcessRequest::setProcessUser(const std::string& processUser)
{
	processUser_ = processUser;
	setParameter("ProcessUser", processUser);
}

