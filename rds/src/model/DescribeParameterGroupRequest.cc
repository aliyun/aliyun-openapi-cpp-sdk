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

#include <alibabacloud/rds/model/DescribeParameterGroupRequest.h>

using AlibabaCloud::Rds::Model::DescribeParameterGroupRequest;

DescribeParameterGroupRequest::DescribeParameterGroupRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeParameterGroup")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeParameterGroupRequest::~DescribeParameterGroupRequest()
{}

long DescribeParameterGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeParameterGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeParameterGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeParameterGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeParameterGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeParameterGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeParameterGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeParameterGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeParameterGroupRequest::getParameterGroupId()const
{
	return parameterGroupId_;
}

void DescribeParameterGroupRequest::setParameterGroupId(const std::string& parameterGroupId)
{
	parameterGroupId_ = parameterGroupId;
	setCoreParameter("ParameterGroupId", parameterGroupId);
}

std::string DescribeParameterGroupRequest::getRegionId()const
{
	return regionId_;
}

void DescribeParameterGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

