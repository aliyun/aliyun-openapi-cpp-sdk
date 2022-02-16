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

#include <alibabacloud/emr/model/RemoveScalingConfigItemV2Request.h>

using AlibabaCloud::Emr::Model::RemoveScalingConfigItemV2Request;

RemoveScalingConfigItemV2Request::RemoveScalingConfigItemV2Request() :
	RpcServiceRequest("emr", "2016-04-08", "RemoveScalingConfigItemV2")
{
	setMethod(HttpRequest::Method::Post);
}

RemoveScalingConfigItemV2Request::~RemoveScalingConfigItemV2Request()
{}

std::string RemoveScalingConfigItemV2Request::getConfigItemType()const
{
	return configItemType_;
}

void RemoveScalingConfigItemV2Request::setConfigItemType(const std::string& configItemType)
{
	configItemType_ = configItemType;
	setParameter("ConfigItemType", configItemType);
}

std::string RemoveScalingConfigItemV2Request::getConfigItemBizId()const
{
	return configItemBizId_;
}

void RemoveScalingConfigItemV2Request::setConfigItemBizId(const std::string& configItemBizId)
{
	configItemBizId_ = configItemBizId;
	setParameter("ConfigItemBizId", configItemBizId);
}

long RemoveScalingConfigItemV2Request::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveScalingConfigItemV2Request::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RemoveScalingConfigItemV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveScalingConfigItemV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RemoveScalingConfigItemV2Request::getScalingGroupBizId()const
{
	return scalingGroupBizId_;
}

void RemoveScalingConfigItemV2Request::setScalingGroupBizId(const std::string& scalingGroupBizId)
{
	scalingGroupBizId_ = scalingGroupBizId;
	setParameter("ScalingGroupBizId", scalingGroupBizId);
}

std::string RemoveScalingConfigItemV2Request::getResourceGroupId()const
{
	return resourceGroupId_;
}

void RemoveScalingConfigItemV2Request::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string RemoveScalingConfigItemV2Request::getRegionId()const
{
	return regionId_;
}

void RemoveScalingConfigItemV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

