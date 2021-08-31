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

#include <alibabacloud/edas/model/DeployApplicationRequest.h>

using AlibabaCloud::Edas::Model::DeployApplicationRequest;

DeployApplicationRequest::DeployApplicationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/changeorder/co_deploy");
	setMethod(HttpRequest::Method::Post);
}

DeployApplicationRequest::~DeployApplicationRequest()
{}

long DeployApplicationRequest::getBuildPackId()const
{
	return buildPackId_;
}

void DeployApplicationRequest::setBuildPackId(long buildPackId)
{
	buildPackId_ = buildPackId;
	setParameter("BuildPackId", std::to_string(buildPackId));
}

std::string DeployApplicationRequest::getComponentIds()const
{
	return componentIds_;
}

void DeployApplicationRequest::setComponentIds(const std::string& componentIds)
{
	componentIds_ = componentIds;
	setParameter("ComponentIds", componentIds);
}

std::string DeployApplicationRequest::getGroupId()const
{
	return groupId_;
}

void DeployApplicationRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

int DeployApplicationRequest::getBatchWaitTime()const
{
	return batchWaitTime_;
}

void DeployApplicationRequest::setBatchWaitTime(int batchWaitTime)
{
	batchWaitTime_ = batchWaitTime;
	setParameter("BatchWaitTime", std::to_string(batchWaitTime));
}

long DeployApplicationRequest::getReleaseType()const
{
	return releaseType_;
}

void DeployApplicationRequest::setReleaseType(long releaseType)
{
	releaseType_ = releaseType;
	setParameter("ReleaseType", std::to_string(releaseType));
}

int DeployApplicationRequest::getBatch()const
{
	return batch_;
}

void DeployApplicationRequest::setBatch(int batch)
{
	batch_ = batch;
	setParameter("Batch", std::to_string(batch));
}

std::string DeployApplicationRequest::getAppEnv()const
{
	return appEnv_;
}

void DeployApplicationRequest::setAppEnv(const std::string& appEnv)
{
	appEnv_ = appEnv;
	setParameter("AppEnv", appEnv);
}

std::string DeployApplicationRequest::getPackageVersion()const
{
	return packageVersion_;
}

void DeployApplicationRequest::setPackageVersion(const std::string& packageVersion)
{
	packageVersion_ = packageVersion;
	setParameter("PackageVersion", packageVersion);
}

bool DeployApplicationRequest::getGray()const
{
	return gray_;
}

void DeployApplicationRequest::setGray(bool gray)
{
	gray_ = gray;
	setParameter("Gray", gray ? "true" : "false");
}

std::string DeployApplicationRequest::getAppId()const
{
	return appId_;
}

void DeployApplicationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DeployApplicationRequest::getImageUrl()const
{
	return imageUrl_;
}

void DeployApplicationRequest::setImageUrl(const std::string& imageUrl)
{
	imageUrl_ = imageUrl;
	setParameter("ImageUrl", imageUrl);
}

std::string DeployApplicationRequest::getWarUrl()const
{
	return warUrl_;
}

void DeployApplicationRequest::setWarUrl(const std::string& warUrl)
{
	warUrl_ = warUrl;
	setParameter("WarUrl", warUrl);
}

std::string DeployApplicationRequest::getTrafficControlStrategy()const
{
	return trafficControlStrategy_;
}

void DeployApplicationRequest::setTrafficControlStrategy(const std::string& trafficControlStrategy)
{
	trafficControlStrategy_ = trafficControlStrategy;
	setParameter("TrafficControlStrategy", trafficControlStrategy);
}

std::string DeployApplicationRequest::getDesc()const
{
	return desc_;
}

void DeployApplicationRequest::setDesc(const std::string& desc)
{
	desc_ = desc;
	setParameter("Desc", desc);
}

std::string DeployApplicationRequest::getDeployType()const
{
	return deployType_;
}

void DeployApplicationRequest::setDeployType(const std::string& deployType)
{
	deployType_ = deployType;
	setParameter("DeployType", deployType);
}

