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

#include <alibabacloud/emr/model/GetOpsCommandDetailRequest.h>

using AlibabaCloud::Emr::Model::GetOpsCommandDetailRequest;

GetOpsCommandDetailRequest::GetOpsCommandDetailRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetOpsCommandDetail")
{}

GetOpsCommandDetailRequest::~GetOpsCommandDetailRequest()
{}

long GetOpsCommandDetailRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetOpsCommandDetailRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetOpsCommandDetailRequest::getRegionId()const
{
	return regionId_;
}

void GetOpsCommandDetailRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetOpsCommandDetailRequest::getOpsCommandName()const
{
	return opsCommandName_;
}

void GetOpsCommandDetailRequest::setOpsCommandName(const std::string& opsCommandName)
{
	opsCommandName_ = opsCommandName;
	setCoreParameter("OpsCommandName", opsCommandName);
}

std::string GetOpsCommandDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetOpsCommandDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

