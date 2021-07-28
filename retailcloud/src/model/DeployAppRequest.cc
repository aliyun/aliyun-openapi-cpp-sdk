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

#include <alibabacloud/retailcloud/model/DeployAppRequest.h>

using AlibabaCloud::Retailcloud::Model::DeployAppRequest;

DeployAppRequest::DeployAppRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "DeployApp")
{
	setMethod(HttpRequest::Method::Post);
}

DeployAppRequest::~DeployAppRequest()
{}

std::string DeployAppRequest::getDeployPacketUrl()const
{
	return deployPacketUrl_;
}

void DeployAppRequest::setDeployPacketUrl(const std::string& deployPacketUrl)
{
	deployPacketUrl_ = deployPacketUrl;
	setParameter("DeployPacketUrl", deployPacketUrl);
}

int DeployAppRequest::getTotalPartitions()const
{
	return totalPartitions_;
}

void DeployAppRequest::setTotalPartitions(int totalPartitions)
{
	totalPartitions_ = totalPartitions;
	setParameter("TotalPartitions", std::to_string(totalPartitions));
}

std::string DeployAppRequest::getDescription()const
{
	return description_;
}

void DeployAppRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long DeployAppRequest::getEnvId()const
{
	return envId_;
}

void DeployAppRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

std::string DeployAppRequest::getUpdateStrategyType()const
{
	return updateStrategyType_;
}

void DeployAppRequest::setUpdateStrategyType(const std::string& updateStrategyType)
{
	updateStrategyType_ = updateStrategyType;
	setParameter("UpdateStrategyType", updateStrategyType);
}

std::string DeployAppRequest::getPauseType()const
{
	return pauseType_;
}

void DeployAppRequest::setPauseType(const std::string& pauseType)
{
	pauseType_ = pauseType;
	setParameter("PauseType", pauseType);
}

long DeployAppRequest::getDeployPacketId()const
{
	return deployPacketId_;
}

void DeployAppRequest::setDeployPacketId(long deployPacketId)
{
	deployPacketId_ = deployPacketId;
	setParameter("DeployPacketId", std::to_string(deployPacketId));
}

std::vector<std::string> DeployAppRequest::getContainerImageList()const
{
	return containerImageList_;
}

void DeployAppRequest::setContainerImageList(const std::vector<std::string>& containerImageList)
{
	containerImageList_ = containerImageList;
	for(int dep1 = 0; dep1!= containerImageList.size(); dep1++) {
		setParameter("ContainerImageList."+ std::to_string(dep1), containerImageList.at(dep1));
	}
}

std::string DeployAppRequest::getName()const
{
	return name_;
}

void DeployAppRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::vector<std::string> DeployAppRequest::getInitContainerImageList()const
{
	return initContainerImageList_;
}

void DeployAppRequest::setInitContainerImageList(const std::vector<std::string>& initContainerImageList)
{
	initContainerImageList_ = initContainerImageList;
	for(int dep1 = 0; dep1!= initContainerImageList.size(); dep1++) {
		setParameter("InitContainerImageList."+ std::to_string(dep1), initContainerImageList.at(dep1));
	}
}

std::string DeployAppRequest::getDefaultPacketOfAppGroup()const
{
	return defaultPacketOfAppGroup_;
}

void DeployAppRequest::setDefaultPacketOfAppGroup(const std::string& defaultPacketOfAppGroup)
{
	defaultPacketOfAppGroup_ = defaultPacketOfAppGroup;
	setParameter("DefaultPacketOfAppGroup", defaultPacketOfAppGroup);
}

bool DeployAppRequest::getArmsFlag()const
{
	return armsFlag_;
}

void DeployAppRequest::setArmsFlag(bool armsFlag)
{
	armsFlag_ = armsFlag;
	setParameter("ArmsFlag", armsFlag ? "true" : "false");
}

