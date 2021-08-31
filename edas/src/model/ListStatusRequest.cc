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

#include <alibabacloud/edas/model/ListStatusRequest.h>

using AlibabaCloud::Edas::Model::ListStatusRequest;

ListStatusRequest::ListStatusRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/mse/status/list");
	setMethod(HttpRequest::Method::Post);
}

ListStatusRequest::~ListStatusRequest()
{}

std::string ListStatusRequest::getIp()const
{
	return ip_;
}

void ListStatusRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string ListStatusRequest::getPodName()const
{
	return podName_;
}

void ListStatusRequest::setPodName(const std::string& podName)
{
	podName_ = podName;
	setParameter("PodName", podName);
}

std::string ListStatusRequest::getSource()const
{
	return source_;
}

void ListStatusRequest::setSource(const std::string& source)
{
	source_ = source;
	setParameter("Source", source);
}

std::string ListStatusRequest::getAccountId()const
{
	return accountId_;
}

void ListStatusRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string ListStatusRequest::getNamespaceId()const
{
	return namespaceId_;
}

void ListStatusRequest::setNamespaceId(const std::string& namespaceId)
{
	namespaceId_ = namespaceId;
	setParameter("NamespaceId", namespaceId);
}

std::string ListStatusRequest::getAppId()const
{
	return appId_;
}

void ListStatusRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string ListStatusRequest::getTenantId()const
{
	return tenantId_;
}

void ListStatusRequest::setTenantId(const std::string& tenantId)
{
	tenantId_ = tenantId;
	setParameter("TenantId", tenantId);
}

std::string ListStatusRequest::getRegion()const
{
	return region_;
}

void ListStatusRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string ListStatusRequest::getStatus()const
{
	return status_;
}

void ListStatusRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

