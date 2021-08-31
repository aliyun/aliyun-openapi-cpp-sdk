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

#include <alibabacloud/edas/model/UpdateContainerConfigurationRequest.h>

using AlibabaCloud::Edas::Model::UpdateContainerConfigurationRequest;

UpdateContainerConfigurationRequest::UpdateContainerConfigurationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/app/container_config");
	setMethod(HttpRequest::Method::Post);
}

UpdateContainerConfigurationRequest::~UpdateContainerConfigurationRequest()
{}

bool UpdateContainerConfigurationRequest::getUseBodyEncoding()const
{
	return useBodyEncoding_;
}

void UpdateContainerConfigurationRequest::setUseBodyEncoding(bool useBodyEncoding)
{
	useBodyEncoding_ = useBodyEncoding;
	setParameter("UseBodyEncoding", useBodyEncoding ? "true" : "false");
}

int UpdateContainerConfigurationRequest::getMaxThreads()const
{
	return maxThreads_;
}

void UpdateContainerConfigurationRequest::setMaxThreads(int maxThreads)
{
	maxThreads_ = maxThreads;
	setParameter("MaxThreads", std::to_string(maxThreads));
}

std::string UpdateContainerConfigurationRequest::getURIEncoding()const
{
	return uRIEncoding_;
}

void UpdateContainerConfigurationRequest::setURIEncoding(const std::string& uRIEncoding)
{
	uRIEncoding_ = uRIEncoding;
	setParameter("URIEncoding", uRIEncoding);
}

std::string UpdateContainerConfigurationRequest::getAppId()const
{
	return appId_;
}

void UpdateContainerConfigurationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UpdateContainerConfigurationRequest::getGroupId()const
{
	return groupId_;
}

void UpdateContainerConfigurationRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

int UpdateContainerConfigurationRequest::getHttpPort()const
{
	return httpPort_;
}

void UpdateContainerConfigurationRequest::setHttpPort(int httpPort)
{
	httpPort_ = httpPort;
	setParameter("HttpPort", std::to_string(httpPort));
}

std::string UpdateContainerConfigurationRequest::getContextPath()const
{
	return contextPath_;
}

void UpdateContainerConfigurationRequest::setContextPath(const std::string& contextPath)
{
	contextPath_ = contextPath;
	setParameter("ContextPath", contextPath);
}

