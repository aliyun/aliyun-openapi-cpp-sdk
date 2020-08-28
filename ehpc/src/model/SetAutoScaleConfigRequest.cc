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
{
	setMethod(HttpRequest::Method::Get);
}

SetAutoScaleConfigRequest::~SetAutoScaleConfigRequest()
{}

std::string SetAutoScaleConfigRequest::getImageId()const
{
	return imageId_;
}

void SetAutoScaleConfigRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

float SetAutoScaleConfigRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void SetAutoScaleConfigRequest::setSpotPriceLimit(float spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	setParameter("SpotPriceLimit", std::to_string(spotPriceLimit));
}

std::string SetAutoScaleConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetAutoScaleConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetAutoScaleConfigRequest::getExcludeNodes()const
{
	return excludeNodes_;
}

void SetAutoScaleConfigRequest::setExcludeNodes(const std::string& excludeNodes)
{
	excludeNodes_ = excludeNodes;
	setParameter("ExcludeNodes", excludeNodes);
}

int SetAutoScaleConfigRequest::getExtraNodesGrowRatio()const
{
	return extraNodesGrowRatio_;
}

void SetAutoScaleConfigRequest::setExtraNodesGrowRatio(int extraNodesGrowRatio)
{
	extraNodesGrowRatio_ = extraNodesGrowRatio;
	setParameter("ExtraNodesGrowRatio", std::to_string(extraNodesGrowRatio));
}

int SetAutoScaleConfigRequest::getShrinkIdleTimes()const
{
	return shrinkIdleTimes_;
}

void SetAutoScaleConfigRequest::setShrinkIdleTimes(int shrinkIdleTimes)
{
	shrinkIdleTimes_ = shrinkIdleTimes;
	setParameter("ShrinkIdleTimes", std::to_string(shrinkIdleTimes));
}

int SetAutoScaleConfigRequest::getGrowTimeoutInMinutes()const
{
	return growTimeoutInMinutes_;
}

void SetAutoScaleConfigRequest::setGrowTimeoutInMinutes(int growTimeoutInMinutes)
{
	growTimeoutInMinutes_ = growTimeoutInMinutes;
	setParameter("GrowTimeoutInMinutes", std::to_string(growTimeoutInMinutes));
}

std::string SetAutoScaleConfigRequest::getClusterId()const
{
	return clusterId_;
}

void SetAutoScaleConfigRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

bool SetAutoScaleConfigRequest::getEnableAutoGrow()const
{
	return enableAutoGrow_;
}

void SetAutoScaleConfigRequest::setEnableAutoGrow(bool enableAutoGrow)
{
	enableAutoGrow_ = enableAutoGrow;
	setParameter("EnableAutoGrow", enableAutoGrow ? "true" : "false");
}

bool SetAutoScaleConfigRequest::getEnableAutoShrink()const
{
	return enableAutoShrink_;
}

void SetAutoScaleConfigRequest::setEnableAutoShrink(bool enableAutoShrink)
{
	enableAutoShrink_ = enableAutoShrink;
	setParameter("EnableAutoShrink", enableAutoShrink ? "true" : "false");
}

std::string SetAutoScaleConfigRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void SetAutoScaleConfigRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setParameter("SpotStrategy", spotStrategy);
}

int SetAutoScaleConfigRequest::getMaxNodesInCluster()const
{
	return maxNodesInCluster_;
}

void SetAutoScaleConfigRequest::setMaxNodesInCluster(int maxNodesInCluster)
{
	maxNodesInCluster_ = maxNodesInCluster;
	setParameter("MaxNodesInCluster", std::to_string(maxNodesInCluster));
}

int SetAutoScaleConfigRequest::getShrinkIntervalInMinutes()const
{
	return shrinkIntervalInMinutes_;
}

void SetAutoScaleConfigRequest::setShrinkIntervalInMinutes(int shrinkIntervalInMinutes)
{
	shrinkIntervalInMinutes_ = shrinkIntervalInMinutes;
	setParameter("ShrinkIntervalInMinutes", std::to_string(shrinkIntervalInMinutes));
}

std::vector<SetAutoScaleConfigRequest::Queues> SetAutoScaleConfigRequest::getQueues()const
{
	return queues_;
}

void SetAutoScaleConfigRequest::setQueues(const std::vector<Queues>& queues)
{
	queues_ = queues;
	for(int dep1 = 0; dep1!= queues.size(); dep1++) {
		auto queuesObj = queues.at(dep1);
		std::string queuesObjStr = "Queues." + std::to_string(dep1 + 1);
		setParameter(queuesObjStr + ".SpotStrategy", queuesObj.spotStrategy);
		setParameter(queuesObjStr + ".QueueName", queuesObj.queueName);
		setParameter(queuesObjStr + ".MinNodesInQueue", std::to_string(queuesObj.minNodesInQueue));
		for(int dep2 = 0; dep2!= queuesObj.instanceTypes.size(); dep2++) {
			auto instanceTypesObj = queuesObj.instanceTypes.at(dep2);
			std::string instanceTypesObjStr = queuesObjStr + "InstanceTypes." + std::to_string(dep2 + 1);
			setParameter(instanceTypesObjStr + ".SpotStrategy", instanceTypesObj.spotStrategy);
			setParameter(instanceTypesObjStr + ".VSwitchId", instanceTypesObj.vSwitchId);
			setParameter(instanceTypesObjStr + ".InstanceType", instanceTypesObj.instanceType);
			setParameter(instanceTypesObjStr + ".ZoneId", instanceTypesObj.zoneId);
			setParameter(instanceTypesObjStr + ".HostNamePrefix", instanceTypesObj.hostNamePrefix);
			setParameter(instanceTypesObjStr + ".SpotPriceLimit", std::to_string(instanceTypesObj.spotPriceLimit));
		}
		setParameter(queuesObjStr + ".MaxNodesInQueue", std::to_string(queuesObj.maxNodesInQueue));
		setParameter(queuesObjStr + ".InstanceType", queuesObj.instanceType);
		setParameter(queuesObjStr + ".QueueImageId", queuesObj.queueImageId);
		setParameter(queuesObjStr + ".EnableAutoGrow", queuesObj.enableAutoGrow ? "true" : "false");
		setParameter(queuesObjStr + ".SpotPriceLimit", std::to_string(queuesObj.spotPriceLimit));
		setParameter(queuesObjStr + ".EnableAutoShrink", queuesObj.enableAutoShrink ? "true" : "false");
	}
}

int SetAutoScaleConfigRequest::getGrowIntervalInMinutes()const
{
	return growIntervalInMinutes_;
}

void SetAutoScaleConfigRequest::setGrowIntervalInMinutes(int growIntervalInMinutes)
{
	growIntervalInMinutes_ = growIntervalInMinutes;
	setParameter("GrowIntervalInMinutes", std::to_string(growIntervalInMinutes));
}

int SetAutoScaleConfigRequest::getGrowRatio()const
{
	return growRatio_;
}

void SetAutoScaleConfigRequest::setGrowRatio(int growRatio)
{
	growRatio_ = growRatio;
	setParameter("GrowRatio", std::to_string(growRatio));
}

