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

#include <alibabacloud/emr/model/DescribeScalingGroupV2Request.h>

using AlibabaCloud::Emr::Model::DescribeScalingGroupV2Request;

DescribeScalingGroupV2Request::DescribeScalingGroupV2Request() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeScalingGroupV2")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeScalingGroupV2Request::~DescribeScalingGroupV2Request()
{}

long DescribeScalingGroupV2Request::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeScalingGroupV2Request::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeScalingGroupV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScalingGroupV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScalingGroupV2Request::getScalingGroupBizId()const
{
	return scalingGroupBizId_;
}

void DescribeScalingGroupV2Request::setScalingGroupBizId(const std::string& scalingGroupBizId)
{
	scalingGroupBizId_ = scalingGroupBizId;
	setParameter("ScalingGroupBizId", scalingGroupBizId);
}

std::string DescribeScalingGroupV2Request::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeScalingGroupV2Request::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeScalingGroupV2Request::getRegionId()const
{
	return regionId_;
}

void DescribeScalingGroupV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeScalingGroupV2Request::getHostGroupBizId()const
{
	return hostGroupBizId_;
}

void DescribeScalingGroupV2Request::setHostGroupBizId(const std::string& hostGroupBizId)
{
	hostGroupBizId_ = hostGroupBizId;
	setParameter("HostGroupBizId", hostGroupBizId);
}

