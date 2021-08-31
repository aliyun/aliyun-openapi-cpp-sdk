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

#include <alibabacloud/edas/model/GetServiceProvidersPageRequest.h>

using AlibabaCloud::Edas::Model::GetServiceProvidersPageRequest;

GetServiceProvidersPageRequest::GetServiceProvidersPageRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/mseForOam/getServiceProvidersPage");
	setMethod(HttpRequest::Method::Post);
}

GetServiceProvidersPageRequest::~GetServiceProvidersPageRequest()
{}

std::string GetServiceProvidersPageRequest::getRegistryType()const
{
	return registryType_;
}

void GetServiceProvidersPageRequest::setRegistryType(const std::string& registryType)
{
	registryType_ = registryType;
	setParameter("RegistryType", registryType);
}

std::string GetServiceProvidersPageRequest::getOrigin()const
{
	return origin_;
}

void GetServiceProvidersPageRequest::setOrigin(const std::string& origin)
{
	origin_ = origin;
	setParameter("Origin", origin);
}

std::string GetServiceProvidersPageRequest::getIp()const
{
	return ip_;
}

void GetServiceProvidersPageRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string GetServiceProvidersPageRequest::getSource()const
{
	return source_;
}

void GetServiceProvidersPageRequest::setSource(const std::string& source)
{
	source_ = source;
	setParameter("Source", source);
}

std::string GetServiceProvidersPageRequest::getServiceType()const
{
	return serviceType_;
}

void GetServiceProvidersPageRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

int GetServiceProvidersPageRequest::getSize()const
{
	return size_;
}

void GetServiceProvidersPageRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string GetServiceProvidersPageRequest::getAppId()const
{
	return appId_;
}

void GetServiceProvidersPageRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string GetServiceProvidersPageRequest::get_Namespace()const
{
	return _namespace_;
}

void GetServiceProvidersPageRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string GetServiceProvidersPageRequest::getServiceVersion()const
{
	return serviceVersion_;
}

void GetServiceProvidersPageRequest::setServiceVersion(const std::string& serviceVersion)
{
	serviceVersion_ = serviceVersion;
	setParameter("ServiceVersion", serviceVersion);
}

std::string GetServiceProvidersPageRequest::getServiceName()const
{
	return serviceName_;
}

void GetServiceProvidersPageRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

int GetServiceProvidersPageRequest::getPage()const
{
	return page_;
}

void GetServiceProvidersPageRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string GetServiceProvidersPageRequest::getRegion()const
{
	return region_;
}

void GetServiceProvidersPageRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetServiceProvidersPageRequest::getServiceId()const
{
	return serviceId_;
}

void GetServiceProvidersPageRequest::setServiceId(const std::string& serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", serviceId);
}

std::string GetServiceProvidersPageRequest::getGroup()const
{
	return group_;
}

void GetServiceProvidersPageRequest::setGroup(const std::string& group)
{
	group_ = group;
	setParameter("Group", group);
}

