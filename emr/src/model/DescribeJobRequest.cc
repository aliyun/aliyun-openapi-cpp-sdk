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

#include <alibabacloud/emr/model/DescribeJobRequest.h>

using AlibabaCloud::Emr::Model::DescribeJobRequest;

DescribeJobRequest::DescribeJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeJob")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeJobRequest::~DescribeJobRequest()
{}

long DescribeJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeJobRequest::getRegionId()const
{
	return regionId_;
}

void DescribeJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeJobRequest::getId()const
{
	return id_;
}

void DescribeJobRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

