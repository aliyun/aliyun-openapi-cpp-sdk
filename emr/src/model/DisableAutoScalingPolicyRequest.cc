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

#include <alibabacloud/emr/model/DisableAutoScalingPolicyRequest.h>

using AlibabaCloud::Emr::Model::DisableAutoScalingPolicyRequest;

DisableAutoScalingPolicyRequest::DisableAutoScalingPolicyRequest() :
	RpcServiceRequest("emr", "2021-03-20", "DisableAutoScalingPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

DisableAutoScalingPolicyRequest::~DisableAutoScalingPolicyRequest()
{}

std::string DisableAutoScalingPolicyRequest::getClientToken()const
{
	return clientToken_;
}

void DisableAutoScalingPolicyRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DisableAutoScalingPolicyRequest::getRegionId()const
{
	return regionId_;
}

void DisableAutoScalingPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DisableAutoScalingPolicyRequest::getClusterId()const
{
	return clusterId_;
}

void DisableAutoScalingPolicyRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DisableAutoScalingPolicyRequest::getSystemDebug()const
{
	return systemDebug_;
}

void DisableAutoScalingPolicyRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

std::string DisableAutoScalingPolicyRequest::getScalingPolicyId()const
{
	return scalingPolicyId_;
}

void DisableAutoScalingPolicyRequest::setScalingPolicyId(const std::string& scalingPolicyId)
{
	scalingPolicyId_ = scalingPolicyId;
	setParameter("ScalingPolicyId", scalingPolicyId);
}

