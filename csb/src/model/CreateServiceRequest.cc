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

#include <alibabacloud/csb/model/CreateServiceRequest.h>

using AlibabaCloud::CSB::Model::CreateServiceRequest;

CreateServiceRequest::CreateServiceRequest() :
	RpcServiceRequest("csb", "2017-11-18", "CreateService")
{}

CreateServiceRequest::~CreateServiceRequest()
{}

std::string CreateServiceRequest::getData()const
{
	return data_;
}

void CreateServiceRequest::setData(const std::string& data)
{
	data_ = data;
	setCoreParameter("Data", data);
}

std::string CreateServiceRequest::getRegionId()const
{
	return regionId_;
}

void CreateServiceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long CreateServiceRequest::getCsbId()const
{
	return csbId_;
}

void CreateServiceRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setCoreParameter("CsbId", std::to_string(csbId));
}

