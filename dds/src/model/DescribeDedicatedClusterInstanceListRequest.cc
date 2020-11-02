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

#include <alibabacloud/dds/model/DescribeDedicatedClusterInstanceListRequest.h>

using AlibabaCloud::Dds::Model::DescribeDedicatedClusterInstanceListRequest;

DescribeDedicatedClusterInstanceListRequest::DescribeDedicatedClusterInstanceListRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeDedicatedClusterInstanceList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedClusterInstanceListRequest::~DescribeDedicatedClusterInstanceListRequest()
{}

long DescribeDedicatedClusterInstanceListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDedicatedClusterInstanceListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDedicatedClusterInstanceListRequest::getEngineVersion()const
{
	return engineVersion_;
}

void DescribeDedicatedClusterInstanceListRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

int DescribeDedicatedClusterInstanceListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDedicatedClusterInstanceListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDedicatedClusterInstanceListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDedicatedClusterInstanceListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDedicatedClusterInstanceListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDedicatedClusterInstanceListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDedicatedClusterInstanceListRequest::getEngine()const
{
	return engine_;
}

void DescribeDedicatedClusterInstanceListRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

int DescribeDedicatedClusterInstanceListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDedicatedClusterInstanceListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int DescribeDedicatedClusterInstanceListRequest::getInstanceStatus()const
{
	return instanceStatus_;
}

void DescribeDedicatedClusterInstanceListRequest::setInstanceStatus(int instanceStatus)
{
	instanceStatus_ = instanceStatus;
	setParameter("InstanceStatus", std::to_string(instanceStatus));
}

std::string DescribeDedicatedClusterInstanceListRequest::getDedicatedHostName()const
{
	return dedicatedHostName_;
}

void DescribeDedicatedClusterInstanceListRequest::setDedicatedHostName(const std::string& dedicatedHostName)
{
	dedicatedHostName_ = dedicatedHostName;
	setParameter("DedicatedHostName", dedicatedHostName);
}

std::string DescribeDedicatedClusterInstanceListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDedicatedClusterInstanceListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDedicatedClusterInstanceListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDedicatedClusterInstanceListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDedicatedClusterInstanceListRequest::getInstanceNetType()const
{
	return instanceNetType_;
}

void DescribeDedicatedClusterInstanceListRequest::setInstanceNetType(const std::string& instanceNetType)
{
	instanceNetType_ = instanceNetType;
	setParameter("InstanceNetType", instanceNetType);
}

std::string DescribeDedicatedClusterInstanceListRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeDedicatedClusterInstanceListRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

long DescribeDedicatedClusterInstanceListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDedicatedClusterInstanceListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDedicatedClusterInstanceListRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeDedicatedClusterInstanceListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

