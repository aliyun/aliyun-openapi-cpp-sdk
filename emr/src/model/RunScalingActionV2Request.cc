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

#include <alibabacloud/emr/model/RunScalingActionV2Request.h>

using AlibabaCloud::Emr::Model::RunScalingActionV2Request;

RunScalingActionV2Request::RunScalingActionV2Request() :
	RpcServiceRequest("emr", "2016-04-08", "RunScalingActionV2")
{
	setMethod(HttpRequest::Method::Post);
}

RunScalingActionV2Request::~RunScalingActionV2Request()
{}

long RunScalingActionV2Request::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RunScalingActionV2Request::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RunScalingActionV2Request::getScalingActionType()const
{
	return scalingActionType_;
}

void RunScalingActionV2Request::setScalingActionType(const std::string& scalingActionType)
{
	scalingActionType_ = scalingActionType;
	setParameter("ScalingActionType", scalingActionType);
}

std::string RunScalingActionV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void RunScalingActionV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RunScalingActionV2Request::getScalingGroupBizId()const
{
	return scalingGroupBizId_;
}

void RunScalingActionV2Request::setScalingGroupBizId(const std::string& scalingGroupBizId)
{
	scalingGroupBizId_ = scalingGroupBizId;
	setParameter("ScalingGroupBizId", scalingGroupBizId);
}

std::string RunScalingActionV2Request::getResourceGroupId()const
{
	return resourceGroupId_;
}

void RunScalingActionV2Request::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string RunScalingActionV2Request::getRegionId()const
{
	return regionId_;
}

void RunScalingActionV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RunScalingActionV2Request::getActionParam()const
{
	return actionParam_;
}

void RunScalingActionV2Request::setActionParam(const std::string& actionParam)
{
	actionParam_ = actionParam;
	setParameter("ActionParam", actionParam);
}

