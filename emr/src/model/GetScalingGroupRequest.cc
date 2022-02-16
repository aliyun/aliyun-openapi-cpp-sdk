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

#include <alibabacloud/emr/model/GetScalingGroupRequest.h>

using AlibabaCloud::Emr::Model::GetScalingGroupRequest;

GetScalingGroupRequest::GetScalingGroupRequest() :
	RpcServiceRequest("emr", "2021-03-20", "GetScalingGroup")
{
	setMethod(HttpRequest::Method::Post);
}

GetScalingGroupRequest::~GetScalingGroupRequest()
{}

std::string GetScalingGroupRequest::getClientToken()const
{
	return clientToken_;
}

void GetScalingGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string GetScalingGroupRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void GetScalingGroupRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string GetScalingGroupRequest::getRegionId()const
{
	return regionId_;
}

void GetScalingGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string GetScalingGroupRequest::getClusterId()const
{
	return clusterId_;
}

void GetScalingGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string GetScalingGroupRequest::getSystemDebug()const
{
	return systemDebug_;
}

void GetScalingGroupRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

