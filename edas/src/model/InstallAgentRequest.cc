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

#include <alibabacloud/edas/model/InstallAgentRequest.h>

using AlibabaCloud::Edas::Model::InstallAgentRequest;

InstallAgentRequest::InstallAgentRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/ecss/install_agent");
	setMethod(HttpRequest::Method::Post);
}

InstallAgentRequest::~InstallAgentRequest()
{}

std::string InstallAgentRequest::getInstanceIds()const
{
	return instanceIds_;
}

void InstallAgentRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

bool InstallAgentRequest::getDoAsync()const
{
	return doAsync_;
}

void InstallAgentRequest::setDoAsync(bool doAsync)
{
	doAsync_ = doAsync;
	setParameter("DoAsync", doAsync ? "true" : "false");
}

std::string InstallAgentRequest::getClusterId()const
{
	return clusterId_;
}

void InstallAgentRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

