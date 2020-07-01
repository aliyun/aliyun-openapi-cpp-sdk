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

#include <alibabacloud/saf/model/ExecuteExtendServiceRequest.h>

using AlibabaCloud::Saf::Model::ExecuteExtendServiceRequest;

ExecuteExtendServiceRequest::ExecuteExtendServiceRequest() :
	RpcServiceRequest("saf", "2019-05-21", "ExecuteExtendService")
{
	setMethod(HttpRequest::Method::Post);
}

ExecuteExtendServiceRequest::~ExecuteExtendServiceRequest()
{}

std::string ExecuteExtendServiceRequest::getServiceParameters()const
{
	return serviceParameters_;
}

void ExecuteExtendServiceRequest::setServiceParameters(const std::string& serviceParameters)
{
	serviceParameters_ = serviceParameters;
	setParameter("ServiceParameters", serviceParameters);
}

std::string ExecuteExtendServiceRequest::getService()const
{
	return service_;
}

void ExecuteExtendServiceRequest::setService(const std::string& service)
{
	service_ = service;
	setParameter("Service", service);
}

std::string ExecuteExtendServiceRequest::getRegion()const
{
	return region_;
}

void ExecuteExtendServiceRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

