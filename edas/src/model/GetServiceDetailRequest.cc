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

#include <alibabacloud/edas/model/GetServiceDetailRequest.h>

using AlibabaCloud::Edas::Model::GetServiceDetailRequest;

GetServiceDetailRequest::GetServiceDetailRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/mseForOam/getServiceDetail");
	setMethod(HttpRequest::Method::Post);
}

GetServiceDetailRequest::~GetServiceDetailRequest()
{}

std::string GetServiceDetailRequest::getRegistryType()const
{
	return registryType_;
}

void GetServiceDetailRequest::setRegistryType(const std::string& registryType)
{
	registryType_ = registryType;
	setParameter("RegistryType", registryType);
}

std::string GetServiceDetailRequest::getServiceType()const
{
	return serviceType_;
}

void GetServiceDetailRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

std::string GetServiceDetailRequest::getOrigin()const
{
	return origin_;
}

void GetServiceDetailRequest::setOrigin(const std::string& origin)
{
	origin_ = origin;
	setParameter("Origin", origin);
}

std::string GetServiceDetailRequest::getAppId()const
{
	return appId_;
}

void GetServiceDetailRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string GetServiceDetailRequest::getIp()const
{
	return ip_;
}

void GetServiceDetailRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string GetServiceDetailRequest::get_Namespace()const
{
	return _namespace_;
}

void GetServiceDetailRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string GetServiceDetailRequest::getServiceVersion()const
{
	return serviceVersion_;
}

void GetServiceDetailRequest::setServiceVersion(const std::string& serviceVersion)
{
	serviceVersion_ = serviceVersion;
	setParameter("ServiceVersion", serviceVersion);
}

std::string GetServiceDetailRequest::getServiceName()const
{
	return serviceName_;
}

void GetServiceDetailRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

std::string GetServiceDetailRequest::getSource()const
{
	return source_;
}

void GetServiceDetailRequest::setSource(const std::string& source)
{
	source_ = source;
	setParameter("Source", source);
}

std::string GetServiceDetailRequest::getRegion()const
{
	return region_;
}

void GetServiceDetailRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetServiceDetailRequest::getServiceId()const
{
	return serviceId_;
}

void GetServiceDetailRequest::setServiceId(const std::string& serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", serviceId);
}

std::string GetServiceDetailRequest::getGroup()const
{
	return group_;
}

void GetServiceDetailRequest::setGroup(const std::string& group)
{
	group_ = group;
	setParameter("Group", group);
}

