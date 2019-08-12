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

#include <alibabacloud/ehpc/model/SetAutoScaleConfigRequest.h>

using AlibabaCloud::EHPC::Model::SetAutoScaleConfigRequest;

SetAutoScaleConfigRequest::SetAutoScaleConfigRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "SetAutoScaleConfig")
{}

SetAutoScaleConfigRequest::~SetAutoScaleConfigRequest()
{}

int SetAutoScaleConfigRequest::getShrinkIdleTimes()const
{
	return shrinkIdleTimes_;
}

void SetAutoScaleConfigRequest::setShrinkIdleTimes(int shrinkIdleTimes)
{
	shrinkIdleTimes_ = shrinkIdleTimes;
	setCoreParameter("ShrinkIdleTimes", shrinkIdleTimes);
}

int SetAutoScaleConfigRequest::getGrowTimeoutInMinutes()const
{
	return growTimeoutInMinutes_;
}

void SetAutoScaleConfigRequest::setGrowTimeoutInMinutes(int growTimeoutInMinutes)
{
	growTimeoutInMinutes_ = growTimeoutInMinutes;
	setCoreParameter("GrowTimeoutInMinutes", growTimeoutInMinutes);
}

std::string SetAutoScaleConfigRequest::getClusterId()const
{
	return clusterId_;
}

void SetAutoScaleConfigRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

bool SetAutoScaleConfigRequest::getEnableAutoGrow()const
{
	return enableAutoGrow_;
}

void SetAutoScaleConfigRequest::setEnableAutoGrow(bool enableAutoGrow)
{
	enableAutoGrow_ = enableAutoGrow;
	setCoreParameter("EnableAutoGrow", enableAutoGrow ? "true" : "false");
}

float SetAutoScaleConfigRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void SetAutoScaleConfigRequest::setSpotPriceLimit(float spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	setCoreParameter("SpotPriceLimit", spotPriceLimit);
}

bool SetAutoScaleConfigRequest::getEnableAutoShrink()const
{
	return enableAutoShrink_;
}

void SetAutoScaleConfigRequest::setEnableAutoShrink(bool enableAutoShrink)
{
	enableAutoShrink_ = enableAutoShrink;
	setCoreParameter("EnableAutoShrink", enableAutoShrink ? "true" : "false");
}

std::string SetAutoScaleConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetAutoScaleConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string SetAutoScaleConfigRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void SetAutoScaleConfigRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setCoreParameter("SpotStrategy", std::to_string(spotStrategy));
}

int SetAutoScaleConfigRequest::getMaxNodesInCluster()const
{
	return maxNodesInCluster_;
}

void SetAutoScaleConfigRequest::setMaxNodesInCluster(int maxNodesInCluster)
{
	maxNodesInCluster_ = maxNodesInCluster;
	setCoreParameter("MaxNodesInCluster", maxNodesInCluster);
}

std::string SetAutoScaleConfigRequest::getExcludeNodes()const
{
	return excludeNodes_;
}

void SetAutoScaleConfigRequest::setExcludeNodes(const std::string& excludeNodes)
{
	excludeNodes_ = excludeNodes;
	setCoreParameter("ExcludeNodes", std::to_string(excludeNodes));
}

int SetAutoScaleConfigRequest::getShrinkIntervalInMinutes()const
{
	return shrinkIntervalInMinutes_;
}

void SetAutoScaleConfigRequest::setShrinkIntervalInMinutes(int shrinkIntervalInMinutes)
{
	shrinkIntervalInMinutes_ = shrinkIntervalInMinutes;
	setCoreParameter("ShrinkIntervalInMinutes", shrinkIntervalInMinutes);
}

std::vector<SetAutoScaleConfigRequest::Queues> SetAutoScaleConfigRequest::getQueues()const
{
	return queues_;
}

void SetAutoScaleConfigRequest::setQueues(const std::vector<Queues>& queues)
{
	queues_ = queues;
	int i = 0;
	for(int i = 0; i!= queues.size(); i++)	{
		auto obj = queues.at(i);
		std::string str ="Queues."+ std::to_string(i);
		setCoreParameter(str + ".SpotStrategy", std::to_string(obj.spotStrategy));
		setCoreParameter(str + ".QueueName", std::to_string(obj.queueName));
		setCoreParameter(str + ".InstanceTypes", obj.instanceTypes);
		setCoreParameter(str + ".InstanceType", std::to_string(obj.instanceType));
		setCoreParameter(str + ".EnableAutoGrow", obj.enableAutoGrow ? "true" : "false");
		setCoreParameter(str + ".SpotPriceLimit", obj.spotPriceLimit);
		setCoreParameter(str + ".EnableAutoShrink", obj.enableAutoShrink ? "true" : "false");
	}
}

int SetAutoScaleConfigRequest::getExtraNodesGrowRatio()const
{
	return extraNodesGrowRatio_;
}

void SetAutoScaleConfigRequest::setExtraNodesGrowRatio(int extraNodesGrowRatio)
{
	extraNodesGrowRatio_ = extraNodesGrowRatio;
	setCoreParameter("ExtraNodesGrowRatio", extraNodesGrowRatio);
}

int SetAutoScaleConfigRequest::getGrowIntervalInMinutes()const
{
	return growIntervalInMinutes_;
}

void SetAutoScaleConfigRequest::setGrowIntervalInMinutes(int growIntervalInMinutes)
{
	growIntervalInMinutes_ = growIntervalInMinutes;
	setCoreParameter("GrowIntervalInMinutes", growIntervalInMinutes);
}

int SetAutoScaleConfigRequest::getGrowRatio()const
{
	return growRatio_;
}

void SetAutoScaleConfigRequest::setGrowRatio(int growRatio)
{
	growRatio_ = growRatio;
	setCoreParameter("GrowRatio", growRatio);
}

