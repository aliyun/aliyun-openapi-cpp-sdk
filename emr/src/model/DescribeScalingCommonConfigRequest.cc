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

#include <alibabacloud/emr/model/DescribeScalingCommonConfigRequest.h>

using AlibabaCloud::Emr::Model::DescribeScalingCommonConfigRequest;

DescribeScalingCommonConfigRequest::DescribeScalingCommonConfigRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeScalingCommonConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeScalingCommonConfigRequest::~DescribeScalingCommonConfigRequest()
{}

long DescribeScalingCommonConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeScalingCommonConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeScalingCommonConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScalingCommonConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScalingCommonConfigRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeScalingCommonConfigRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeScalingCommonConfigRequest::getRegionId()const
{
	return regionId_;
}

void DescribeScalingCommonConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

