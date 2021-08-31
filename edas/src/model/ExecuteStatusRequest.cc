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

#include <alibabacloud/edas/model/ExecuteStatusRequest.h>

using AlibabaCloud::Edas::Model::ExecuteStatusRequest;

ExecuteStatusRequest::ExecuteStatusRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/mse/status/execute");
	setMethod(HttpRequest::Method::Post);
}

ExecuteStatusRequest::~ExecuteStatusRequest()
{}

std::string ExecuteStatusRequest::getAccountId()const
{
	return accountId_;
}

void ExecuteStatusRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string ExecuteStatusRequest::getNamespaceId()const
{
	return namespaceId_;
}

void ExecuteStatusRequest::setNamespaceId(const std::string& namespaceId)
{
	namespaceId_ = namespaceId;
	setParameter("NamespaceId", namespaceId);
}

std::string ExecuteStatusRequest::getAppId()const
{
	return appId_;
}

void ExecuteStatusRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string ExecuteStatusRequest::getIp()const
{
	return ip_;
}

void ExecuteStatusRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string ExecuteStatusRequest::getTenantId()const
{
	return tenantId_;
}

void ExecuteStatusRequest::setTenantId(const std::string& tenantId)
{
	tenantId_ = tenantId;
	setParameter("TenantId", tenantId);
}

std::string ExecuteStatusRequest::getPodName()const
{
	return podName_;
}

void ExecuteStatusRequest::setPodName(const std::string& podName)
{
	podName_ = podName;
	setParameter("PodName", podName);
}

std::string ExecuteStatusRequest::getSource()const
{
	return source_;
}

void ExecuteStatusRequest::setSource(const std::string& source)
{
	source_ = source;
	setParameter("Source", source);
}

std::string ExecuteStatusRequest::getRegion()const
{
	return region_;
}

void ExecuteStatusRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string ExecuteStatusRequest::getStatus()const
{
	return status_;
}

void ExecuteStatusRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

