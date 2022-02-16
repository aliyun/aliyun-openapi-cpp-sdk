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

#include <alibabacloud/emr/model/DeleteAutoScalingPolicyRequest.h>

using AlibabaCloud::Emr::Model::DeleteAutoScalingPolicyRequest;

DeleteAutoScalingPolicyRequest::DeleteAutoScalingPolicyRequest() :
	RpcServiceRequest("emr", "2021-03-20", "DeleteAutoScalingPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteAutoScalingPolicyRequest::~DeleteAutoScalingPolicyRequest()
{}

std::string DeleteAutoScalingPolicyRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteAutoScalingPolicyRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DeleteAutoScalingPolicyRequest::getRegionId()const
{
	return regionId_;
}

void DeleteAutoScalingPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteAutoScalingPolicyRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteAutoScalingPolicyRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DeleteAutoScalingPolicyRequest::getSystemDebug()const
{
	return systemDebug_;
}

void DeleteAutoScalingPolicyRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

std::string DeleteAutoScalingPolicyRequest::getScalingPolicyId()const
{
	return scalingPolicyId_;
}

void DeleteAutoScalingPolicyRequest::setScalingPolicyId(const std::string& scalingPolicyId)
{
	scalingPolicyId_ = scalingPolicyId;
	setParameter("ScalingPolicyId", scalingPolicyId);
}

