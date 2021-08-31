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

#include <alibabacloud/edas/model/GetServiceConsumersPageRequest.h>

using AlibabaCloud::Edas::Model::GetServiceConsumersPageRequest;

GetServiceConsumersPageRequest::GetServiceConsumersPageRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/mseForOam/getServiceConsumersPage");
	setMethod(HttpRequest::Method::Post);
}

GetServiceConsumersPageRequest::~GetServiceConsumersPageRequest()
{}

std::string GetServiceConsumersPageRequest::getRegistryType()const
{
	return registryType_;
}

void GetServiceConsumersPageRequest::setRegistryType(const std::string& registryType)
{
	registryType_ = registryType;
	setParameter("RegistryType", registryType);
}

std::string GetServiceConsumersPageRequest::getOrigin()const
{
	return origin_;
}

void GetServiceConsumersPageRequest::setOrigin(const std::string& origin)
{
	origin_ = origin;
	setParameter("Origin", origin);
}

std::string GetServiceConsumersPageRequest::getIp()const
{
	return ip_;
}

void GetServiceConsumersPageRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string GetServiceConsumersPageRequest::getSource()const
{
	return source_;
}

void GetServiceConsumersPageRequest::setSource(const std::string& source)
{
	source_ = source;
	setParameter("Source", source);
}

std::string GetServiceConsumersPageRequest::getServiceType()const
{
	return serviceType_;
}

void GetServiceConsumersPageRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

int GetServiceConsumersPageRequest::getSize()const
{
	return size_;
}

void GetServiceConsumersPageRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string GetServiceConsumersPageRequest::getAppId()const
{
	return appId_;
}

void GetServiceConsumersPageRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string GetServiceConsumersPageRequest::get_Namespace()const
{
	return _namespace_;
}

void GetServiceConsumersPageRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string GetServiceConsumersPageRequest::getServiceVersion()const
{
	return serviceVersion_;
}

void GetServiceConsumersPageRequest::setServiceVersion(const std::string& serviceVersion)
{
	serviceVersion_ = serviceVersion;
	setParameter("ServiceVersion", serviceVersion);
}

std::string GetServiceConsumersPageRequest::getServiceName()const
{
	return serviceName_;
}

void GetServiceConsumersPageRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

int GetServiceConsumersPageRequest::getPage()const
{
	return page_;
}

void GetServiceConsumersPageRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string GetServiceConsumersPageRequest::getRegion()const
{
	return region_;
}

void GetServiceConsumersPageRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetServiceConsumersPageRequest::getServiceId()const
{
	return serviceId_;
}

void GetServiceConsumersPageRequest::setServiceId(const std::string& serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", serviceId);
}

std::string GetServiceConsumersPageRequest::getGroup()const
{
	return group_;
}

void GetServiceConsumersPageRequest::setGroup(const std::string& group)
{
	group_ = group;
	setParameter("Group", group);
}

