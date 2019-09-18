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

#include <alibabacloud/emr/model/GetMetadataTypeListRequest.h>

using AlibabaCloud::Emr::Model::GetMetadataTypeListRequest;

GetMetadataTypeListRequest::GetMetadataTypeListRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetMetadataTypeList")
{}

GetMetadataTypeListRequest::~GetMetadataTypeListRequest()
{}

long GetMetadataTypeListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetMetadataTypeListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetMetadataTypeListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetMetadataTypeListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetMetadataTypeListRequest::getRegionId()const
{
	return regionId_;
}

void GetMetadataTypeListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

