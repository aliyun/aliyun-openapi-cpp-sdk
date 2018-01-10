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

#include <alibabacloud/ecs/model/DescribeDeploymentSetTopologyRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDeploymentSetTopologyRequest::DescribeDeploymentSetTopologyRequest() :
	EcsRequest("DescribeDeploymentSetTopology")
{}

DescribeDeploymentSetTopologyRequest::~DescribeDeploymentSetTopologyRequest()
{}

std::string DescribeDeploymentSetTopologyRequest::getDeploymentSetId()const
{
	return deploymentSetId_;
}

void DescribeDeploymentSetTopologyRequest::setDeploymentSetId(const std::string& deploymentSetId)
{
	deploymentSetId_ = deploymentSetId;
	setParameter("DeploymentSetId", deploymentSetId);
}

long DescribeDeploymentSetTopologyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDeploymentSetTopologyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDeploymentSetTopologyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDeploymentSetTopologyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDeploymentSetTopologyRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDeploymentSetTopologyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeDeploymentSetTopologyRequest::getGranularity()const
{
	return granularity_;
}

void DescribeDeploymentSetTopologyRequest::setGranularity(const std::string& granularity)
{
	granularity_ = granularity;
	setParameter("Granularity", granularity);
}

std::string DescribeDeploymentSetTopologyRequest::getDomain()const
{
	return domain_;
}

void DescribeDeploymentSetTopologyRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string DescribeDeploymentSetTopologyRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeDeploymentSetTopologyRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

std::string DescribeDeploymentSetTopologyRequest::getDeploymentSetName()const
{
	return deploymentSetName_;
}

void DescribeDeploymentSetTopologyRequest::setDeploymentSetName(const std::string& deploymentSetName)
{
	deploymentSetName_ = deploymentSetName;
	setParameter("DeploymentSetName", deploymentSetName);
}

long DescribeDeploymentSetTopologyRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDeploymentSetTopologyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDeploymentSetTopologyRequest::getStrategy()const
{
	return strategy_;
}

void DescribeDeploymentSetTopologyRequest::setStrategy(const std::string& strategy)
{
	strategy_ = strategy;
	setParameter("Strategy", strategy);
}

