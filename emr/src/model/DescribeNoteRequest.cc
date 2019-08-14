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

#include <alibabacloud/emr/model/DescribeNoteRequest.h>

using AlibabaCloud::Emr::Model::DescribeNoteRequest;

DescribeNoteRequest::DescribeNoteRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeNote")
{}

DescribeNoteRequest::~DescribeNoteRequest()
{}

long DescribeNoteRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeNoteRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeNoteRequest::getRegionId()const
{
	return regionId_;
}

void DescribeNoteRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeNoteRequest::getId()const
{
	return id_;
}

void DescribeNoteRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string DescribeNoteRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeNoteRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

