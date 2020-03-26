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

#include <alibabacloud/emr/model/DescribeScalingActivityRequest.h>

using AlibabaCloud::Emr::Model::DescribeScalingActivityRequest;

DescribeScalingActivityRequest::DescribeScalingActivityRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeScalingActivity")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeScalingActivityRequest::~DescribeScalingActivityRequest()
{}

long DescribeScalingActivityRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeScalingActivityRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeScalingActivityRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeScalingActivityRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeScalingActivityRequest::getScalingActivityId()const
{
	return scalingActivityId_;
}

void DescribeScalingActivityRequest::setScalingActivityId(const std::string& scalingActivityId)
{
	scalingActivityId_ = scalingActivityId;
	setParameter("ScalingActivityId", scalingActivityId);
}

std::string DescribeScalingActivityRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScalingActivityRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScalingActivityRequest::getRegionId()const
{
	return regionId_;
}

void DescribeScalingActivityRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeScalingActivityRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void DescribeScalingActivityRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setParameter("HostGroupId", hostGroupId);
}

