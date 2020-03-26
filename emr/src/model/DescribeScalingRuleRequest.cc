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

#include <alibabacloud/emr/model/DescribeScalingRuleRequest.h>

using AlibabaCloud::Emr::Model::DescribeScalingRuleRequest;

DescribeScalingRuleRequest::DescribeScalingRuleRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeScalingRule")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeScalingRuleRequest::~DescribeScalingRuleRequest()
{}

long DescribeScalingRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeScalingRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeScalingRuleRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeScalingRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeScalingRuleRequest::getScalingRuleId()const
{
	return scalingRuleId_;
}

void DescribeScalingRuleRequest::setScalingRuleId(const std::string& scalingRuleId)
{
	scalingRuleId_ = scalingRuleId;
	setParameter("ScalingRuleId", scalingRuleId);
}

std::string DescribeScalingRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScalingRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScalingRuleRequest::getRegionId()const
{
	return regionId_;
}

void DescribeScalingRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeScalingRuleRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void DescribeScalingRuleRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setParameter("HostGroupId", hostGroupId);
}

