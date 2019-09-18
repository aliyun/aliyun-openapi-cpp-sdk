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

#include <alibabacloud/emr/model/DeleteScalingRuleRequest.h>

using AlibabaCloud::Emr::Model::DeleteScalingRuleRequest;

DeleteScalingRuleRequest::DeleteScalingRuleRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteScalingRule")
{}

DeleteScalingRuleRequest::~DeleteScalingRuleRequest()
{}

long DeleteScalingRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteScalingRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteScalingRuleRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteScalingRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string DeleteScalingRuleRequest::getScalingRuleId()const
{
	return scalingRuleId_;
}

void DeleteScalingRuleRequest::setScalingRuleId(const std::string& scalingRuleId)
{
	scalingRuleId_ = scalingRuleId;
	setCoreParameter("ScalingRuleId", scalingRuleId);
}

std::string DeleteScalingRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteScalingRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteScalingRuleRequest::getRegionId()const
{
	return regionId_;
}

void DeleteScalingRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteScalingRuleRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void DeleteScalingRuleRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setCoreParameter("HostGroupId", hostGroupId);
}

