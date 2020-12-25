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

#include <alibabacloud/emr/model/DescribeScalingConfigItemV2Request.h>

using AlibabaCloud::Emr::Model::DescribeScalingConfigItemV2Request;

DescribeScalingConfigItemV2Request::DescribeScalingConfigItemV2Request() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeScalingConfigItemV2")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeScalingConfigItemV2Request::~DescribeScalingConfigItemV2Request()
{}

std::string DescribeScalingConfigItemV2Request::getConfigItemType()const
{
	return configItemType_;
}

void DescribeScalingConfigItemV2Request::setConfigItemType(const std::string& configItemType)
{
	configItemType_ = configItemType;
	setParameter("ConfigItemType", configItemType);
}

long DescribeScalingConfigItemV2Request::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeScalingConfigItemV2Request::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeScalingConfigItemV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScalingConfigItemV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScalingConfigItemV2Request::getScalingGroupBizId()const
{
	return scalingGroupBizId_;
}

void DescribeScalingConfigItemV2Request::setScalingGroupBizId(const std::string& scalingGroupBizId)
{
	scalingGroupBizId_ = scalingGroupBizId;
	setParameter("ScalingGroupBizId", scalingGroupBizId);
}

std::string DescribeScalingConfigItemV2Request::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeScalingConfigItemV2Request::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeScalingConfigItemV2Request::getRegionId()const
{
	return regionId_;
}

void DescribeScalingConfigItemV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeScalingConfigItemV2Request::getScalingConfigItemId()const
{
	return scalingConfigItemId_;
}

void DescribeScalingConfigItemV2Request::setScalingConfigItemId(const std::string& scalingConfigItemId)
{
	scalingConfigItemId_ = scalingConfigItemId;
	setParameter("ScalingConfigItemId", scalingConfigItemId);
}

