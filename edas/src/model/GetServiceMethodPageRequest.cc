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

#include <alibabacloud/edas/model/GetServiceMethodPageRequest.h>

using AlibabaCloud::Edas::Model::GetServiceMethodPageRequest;

GetServiceMethodPageRequest::GetServiceMethodPageRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/mseForOam/getServiceMethodPage");
	setMethod(HttpRequest::Method::Post);
}

GetServiceMethodPageRequest::~GetServiceMethodPageRequest()
{}

std::string GetServiceMethodPageRequest::getRegistryType()const
{
	return registryType_;
}

void GetServiceMethodPageRequest::setRegistryType(const std::string& registryType)
{
	registryType_ = registryType;
	setParameter("RegistryType", registryType);
}

std::string GetServiceMethodPageRequest::getOrigin()const
{
	return origin_;
}

void GetServiceMethodPageRequest::setOrigin(const std::string& origin)
{
	origin_ = origin;
	setParameter("Origin", origin);
}

std::string GetServiceMethodPageRequest::getIp()const
{
	return ip_;
}

void GetServiceMethodPageRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string GetServiceMethodPageRequest::getSource()const
{
	return source_;
}

void GetServiceMethodPageRequest::setSource(const std::string& source)
{
	source_ = source;
	setParameter("Source", source);
}

int GetServiceMethodPageRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetServiceMethodPageRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetServiceMethodPageRequest::getPath()const
{
	return path_;
}

void GetServiceMethodPageRequest::setPath(const std::string& path)
{
	path_ = path;
	setParameter("Path", path);
}

std::string GetServiceMethodPageRequest::getServiceType()const
{
	return serviceType_;
}

void GetServiceMethodPageRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

std::string GetServiceMethodPageRequest::getAppId()const
{
	return appId_;
}

void GetServiceMethodPageRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string GetServiceMethodPageRequest::get_Namespace()const
{
	return _namespace_;
}

void GetServiceMethodPageRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string GetServiceMethodPageRequest::getServiceVersion()const
{
	return serviceVersion_;
}

void GetServiceMethodPageRequest::setServiceVersion(const std::string& serviceVersion)
{
	serviceVersion_ = serviceVersion;
	setParameter("ServiceVersion", serviceVersion);
}

int GetServiceMethodPageRequest::getPageSize()const
{
	return pageSize_;
}

void GetServiceMethodPageRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string GetServiceMethodPageRequest::getName()const
{
	return name_;
}

void GetServiceMethodPageRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string GetServiceMethodPageRequest::getServiceName()const
{
	return serviceName_;
}

void GetServiceMethodPageRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

std::string GetServiceMethodPageRequest::getRegion()const
{
	return region_;
}

void GetServiceMethodPageRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetServiceMethodPageRequest::getServiceId()const
{
	return serviceId_;
}

void GetServiceMethodPageRequest::setServiceId(const std::string& serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", serviceId);
}

std::string GetServiceMethodPageRequest::getMethodController()const
{
	return methodController_;
}

void GetServiceMethodPageRequest::setMethodController(const std::string& methodController)
{
	methodController_ = methodController;
	setParameter("MethodController", methodController);
}

std::string GetServiceMethodPageRequest::getGroup()const
{
	return group_;
}

void GetServiceMethodPageRequest::setGroup(const std::string& group)
{
	group_ = group;
	setParameter("Group", group);
}

