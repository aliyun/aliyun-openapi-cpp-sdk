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

#include <alibabacloud/eais/model/GetPrivateIpRequest.h>

using AlibabaCloud::Eais::Model::GetPrivateIpRequest;

GetPrivateIpRequest::GetPrivateIpRequest() :
	RpcServiceRequest("eais", "2019-06-24", "GetPrivateIp")
{
	setMethod(HttpRequest::Method::Post);
}

GetPrivateIpRequest::~GetPrivateIpRequest()
{}

std::string GetPrivateIpRequest::getClientInstanceId()const
{
	return clientInstanceId_;
}

void GetPrivateIpRequest::setClientInstanceId(const std::string& clientInstanceId)
{
	clientInstanceId_ = clientInstanceId;
	setParameter("ClientInstanceId", clientInstanceId);
}

std::string GetPrivateIpRequest::getRegionId()const
{
	return regionId_;
}

void GetPrivateIpRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

