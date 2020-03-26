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

#include <alibabacloud/csb/model/CommitSuccessedServicesRequest.h>

using AlibabaCloud::CSB::Model::CommitSuccessedServicesRequest;

CommitSuccessedServicesRequest::CommitSuccessedServicesRequest() :
	RpcServiceRequest("csb", "2017-11-18", "CommitSuccessedServices")
{
	setMethod(HttpRequest::Method::Post);
}

CommitSuccessedServicesRequest::~CommitSuccessedServicesRequest()
{}

std::string CommitSuccessedServicesRequest::getCsbName()const
{
	return csbName_;
}

void CommitSuccessedServicesRequest::setCsbName(const std::string& csbName)
{
	csbName_ = csbName;
	setParameter("CsbName", csbName);
}

std::string CommitSuccessedServicesRequest::getServices()const
{
	return services_;
}

void CommitSuccessedServicesRequest::setServices(const std::string& services)
{
	services_ = services;
	setBodyParameter("Services", services);
}

