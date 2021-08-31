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

#include <alibabacloud/edas/model/AddServiceTimeConfigRequest.h>

using AlibabaCloud::Edas::Model::AddServiceTimeConfigRequest;

AddServiceTimeConfigRequest::AddServiceTimeConfigRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/timeout/add");
	setMethod(HttpRequest::Method::Post);
}

AddServiceTimeConfigRequest::~AddServiceTimeConfigRequest()
{}

std::string AddServiceTimeConfigRequest::getPath()const
{
	return path_;
}

void AddServiceTimeConfigRequest::setPath(const std::string& path)
{
	path_ = path;
	setParameter("Path", path);
}

std::string AddServiceTimeConfigRequest::getServiceType()const
{
	return serviceType_;
}

void AddServiceTimeConfigRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

std::string AddServiceTimeConfigRequest::getConsumerAppId()const
{
	return consumerAppId_;
}

void AddServiceTimeConfigRequest::setConsumerAppId(const std::string& consumerAppId)
{
	consumerAppId_ = consumerAppId;
	setParameter("ConsumerAppId", consumerAppId);
}

std::string AddServiceTimeConfigRequest::getAppId()const
{
	return appId_;
}

void AddServiceTimeConfigRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string AddServiceTimeConfigRequest::getServiceVersion()const
{
	return serviceVersion_;
}

void AddServiceTimeConfigRequest::setServiceVersion(const std::string& serviceVersion)
{
	serviceVersion_ = serviceVersion;
	setParameter("ServiceVersion", serviceVersion);
}

std::string AddServiceTimeConfigRequest::get_Namespace()const
{
	return _namespace_;
}

void AddServiceTimeConfigRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string AddServiceTimeConfigRequest::getServiceName()const
{
	return serviceName_;
}

void AddServiceTimeConfigRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

std::string AddServiceTimeConfigRequest::getSource()const
{
	return source_;
}

void AddServiceTimeConfigRequest::setSource(const std::string& source)
{
	source_ = source;
	setParameter("Source", source);
}

std::string AddServiceTimeConfigRequest::getRegion()const
{
	return region_;
}

void AddServiceTimeConfigRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string AddServiceTimeConfigRequest::getServiceGroup()const
{
	return serviceGroup_;
}

void AddServiceTimeConfigRequest::setServiceGroup(const std::string& serviceGroup)
{
	serviceGroup_ = serviceGroup;
	setParameter("ServiceGroup", serviceGroup);
}

std::string AddServiceTimeConfigRequest::getConsumerAppName()const
{
	return consumerAppName_;
}

void AddServiceTimeConfigRequest::setConsumerAppName(const std::string& consumerAppName)
{
	consumerAppName_ = consumerAppName;
	setParameter("ConsumerAppName", consumerAppName);
}

std::string AddServiceTimeConfigRequest::getTimeout()const
{
	return timeout_;
}

void AddServiceTimeConfigRequest::setTimeout(const std::string& timeout)
{
	timeout_ = timeout;
	setParameter("Timeout", timeout);
}

