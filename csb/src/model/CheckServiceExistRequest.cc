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

#include <alibabacloud/csb/model/CheckServiceExistRequest.h>

using AlibabaCloud::CSB::Model::CheckServiceExistRequest;

CheckServiceExistRequest::CheckServiceExistRequest() :
	RpcServiceRequest("csb", "2017-11-18", "CheckServiceExist")
{
	setMethod(HttpRequest::Method::Post);
}

CheckServiceExistRequest::~CheckServiceExistRequest()
{}

long CheckServiceExistRequest::getCsbId()const
{
	return csbId_;
}

void CheckServiceExistRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setParameter("CsbId", std::to_string(csbId));
}

std::string CheckServiceExistRequest::getServiceName()const
{
	return serviceName_;
}

void CheckServiceExistRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

