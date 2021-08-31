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

#include <alibabacloud/edas/model/UpdateK8sApplicationConfigRequest.h>

using AlibabaCloud::Edas::Model::UpdateK8sApplicationConfigRequest;

UpdateK8sApplicationConfigRequest::UpdateK8sApplicationConfigRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_app_configuration");
	setMethod(HttpRequest::Method::Put);
}

UpdateK8sApplicationConfigRequest::~UpdateK8sApplicationConfigRequest()
{}

std::string UpdateK8sApplicationConfigRequest::getMemoryRequest()const
{
	return memoryRequest_;
}

void UpdateK8sApplicationConfigRequest::setMemoryRequest(const std::string& memoryRequest)
{
	memoryRequest_ = memoryRequest;
	setParameter("MemoryRequest", memoryRequest);
}

std::string UpdateK8sApplicationConfigRequest::getAppId()const
{
	return appId_;
}

void UpdateK8sApplicationConfigRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UpdateK8sApplicationConfigRequest::getCpuRequest()const
{
	return cpuRequest_;
}

void UpdateK8sApplicationConfigRequest::setCpuRequest(const std::string& cpuRequest)
{
	cpuRequest_ = cpuRequest;
	setParameter("CpuRequest", cpuRequest);
}

std::string UpdateK8sApplicationConfigRequest::getMemoryLimit()const
{
	return memoryLimit_;
}

void UpdateK8sApplicationConfigRequest::setMemoryLimit(const std::string& memoryLimit)
{
	memoryLimit_ = memoryLimit;
	setParameter("MemoryLimit", memoryLimit);
}

std::string UpdateK8sApplicationConfigRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateK8sApplicationConfigRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UpdateK8sApplicationConfigRequest::getCpuLimit()const
{
	return cpuLimit_;
}

void UpdateK8sApplicationConfigRequest::setCpuLimit(const std::string& cpuLimit)
{
	cpuLimit_ = cpuLimit;
	setParameter("CpuLimit", cpuLimit);
}

std::string UpdateK8sApplicationConfigRequest::getMcpuLimit()const
{
	return mcpuLimit_;
}

void UpdateK8sApplicationConfigRequest::setMcpuLimit(const std::string& mcpuLimit)
{
	mcpuLimit_ = mcpuLimit;
	setParameter("McpuLimit", mcpuLimit);
}

std::string UpdateK8sApplicationConfigRequest::getMcpuRequest()const
{
	return mcpuRequest_;
}

void UpdateK8sApplicationConfigRequest::setMcpuRequest(const std::string& mcpuRequest)
{
	mcpuRequest_ = mcpuRequest;
	setParameter("McpuRequest", mcpuRequest);
}

int UpdateK8sApplicationConfigRequest::getTimeout()const
{
	return timeout_;
}

void UpdateK8sApplicationConfigRequest::setTimeout(int timeout)
{
	timeout_ = timeout;
	setParameter("Timeout", std::to_string(timeout));
}

