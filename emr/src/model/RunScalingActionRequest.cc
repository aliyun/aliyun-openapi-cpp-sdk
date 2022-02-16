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

#include <alibabacloud/emr/model/RunScalingActionRequest.h>

using AlibabaCloud::Emr::Model::RunScalingActionRequest;

RunScalingActionRequest::RunScalingActionRequest() :
	RpcServiceRequest("emr", "2021-03-20", "RunScalingAction")
{
	setMethod(HttpRequest::Method::Post);
}

RunScalingActionRequest::~RunScalingActionRequest()
{}

std::string RunScalingActionRequest::getScalingActionType()const
{
	return scalingActionType_;
}

void RunScalingActionRequest::setScalingActionType(const std::string& scalingActionType)
{
	scalingActionType_ = scalingActionType;
	setParameter("ScalingActionType", scalingActionType);
}

std::string RunScalingActionRequest::getClientToken()const
{
	return clientToken_;
}

void RunScalingActionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RunScalingActionRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void RunScalingActionRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string RunScalingActionRequest::getRegionId()const
{
	return regionId_;
}

void RunScalingActionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RunScalingActionRequest::getActionParam()const
{
	return actionParam_;
}

void RunScalingActionRequest::setActionParam(const std::string& actionParam)
{
	actionParam_ = actionParam;
	setParameter("ActionParam", actionParam);
}

std::string RunScalingActionRequest::getClusterId()const
{
	return clusterId_;
}

void RunScalingActionRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string RunScalingActionRequest::getSystemDebug()const
{
	return systemDebug_;
}

void RunScalingActionRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

