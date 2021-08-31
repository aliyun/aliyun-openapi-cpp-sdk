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

#include <alibabacloud/edas/model/QueryServiceTimeConfigRequest.h>

using AlibabaCloud::Edas::Model::QueryServiceTimeConfigRequest;

QueryServiceTimeConfigRequest::QueryServiceTimeConfigRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/timeout/page");
	setMethod(HttpRequest::Method::Post);
}

QueryServiceTimeConfigRequest::~QueryServiceTimeConfigRequest()
{}

std::string QueryServiceTimeConfigRequest::getServiceType()const
{
	return serviceType_;
}

void QueryServiceTimeConfigRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

std::string QueryServiceTimeConfigRequest::getAppId()const
{
	return appId_;
}

void QueryServiceTimeConfigRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string QueryServiceTimeConfigRequest::getServiceVersion()const
{
	return serviceVersion_;
}

void QueryServiceTimeConfigRequest::setServiceVersion(const std::string& serviceVersion)
{
	serviceVersion_ = serviceVersion;
	setParameter("ServiceVersion", serviceVersion);
}

int QueryServiceTimeConfigRequest::getPageSize()const
{
	return pageSize_;
}

void QueryServiceTimeConfigRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryServiceTimeConfigRequest::get_Namespace()const
{
	return _namespace_;
}

void QueryServiceTimeConfigRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string QueryServiceTimeConfigRequest::getServiceName()const
{
	return serviceName_;
}

void QueryServiceTimeConfigRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

std::string QueryServiceTimeConfigRequest::getSource()const
{
	return source_;
}

void QueryServiceTimeConfigRequest::setSource(const std::string& source)
{
	source_ = source;
	setParameter("Source", source);
}

std::string QueryServiceTimeConfigRequest::getRegion()const
{
	return region_;
}

void QueryServiceTimeConfigRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string QueryServiceTimeConfigRequest::getServiceGroup()const
{
	return serviceGroup_;
}

void QueryServiceTimeConfigRequest::setServiceGroup(const std::string& serviceGroup)
{
	serviceGroup_ = serviceGroup;
	setParameter("ServiceGroup", serviceGroup);
}

int QueryServiceTimeConfigRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryServiceTimeConfigRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

