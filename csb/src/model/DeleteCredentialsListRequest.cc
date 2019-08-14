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

#include <alibabacloud/csb/model/DeleteCredentialsListRequest.h>

using AlibabaCloud::CSB::Model::DeleteCredentialsListRequest;

DeleteCredentialsListRequest::DeleteCredentialsListRequest() :
	RpcServiceRequest("csb", "2017-11-18", "DeleteCredentialsList")
{}

DeleteCredentialsListRequest::~DeleteCredentialsListRequest()
{}

std::string DeleteCredentialsListRequest::getData()const
{
	return data_;
}

void DeleteCredentialsListRequest::setData(const std::string& data)
{
	data_ = data;
	setCoreParameter("Data", data);
}

std::string DeleteCredentialsListRequest::getRegionId()const
{
	return regionId_;
}

void DeleteCredentialsListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DeleteCredentialsListRequest::getIgnoreDauth()const
{
	return ignoreDauth_;
}

void DeleteCredentialsListRequest::setIgnoreDauth(bool ignoreDauth)
{
	ignoreDauth_ = ignoreDauth;
	setCoreParameter("IgnoreDauth", ignoreDauth ? "true" : "false");
}

bool DeleteCredentialsListRequest::getForce()const
{
	return force_;
}

void DeleteCredentialsListRequest::setForce(bool force)
{
	force_ = force;
	setCoreParameter("Force", force ? "true" : "false");
}

