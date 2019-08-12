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

#include <alibabacloud/csb/model/ImportCredentialsRequest.h>

using AlibabaCloud::CSB::Model::ImportCredentialsRequest;

ImportCredentialsRequest::ImportCredentialsRequest() :
	RpcServiceRequest("csb", "2017-11-18", "ImportCredentials")
{}

ImportCredentialsRequest::~ImportCredentialsRequest()
{}

std::string ImportCredentialsRequest::getData()const
{
	return data_;
}

void ImportCredentialsRequest::setData(const std::string& data)
{
	data_ = data;
	setCoreParameter("Data", std::to_string(data));
}

long ImportCredentialsRequest::getCsbId()const
{
	return csbId_;
}

void ImportCredentialsRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setCoreParameter("CsbId", csbId);
}

std::string ImportCredentialsRequest::getRegionId()const
{
	return regionId_;
}

void ImportCredentialsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

