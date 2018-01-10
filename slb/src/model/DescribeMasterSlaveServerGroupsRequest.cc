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

#include <alibabacloud/slb/model/DescribeMasterSlaveServerGroupsRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeMasterSlaveServerGroupsRequest::DescribeMasterSlaveServerGroupsRequest() :
	SlbRequest("DescribeMasterSlaveServerGroups")
{}

DescribeMasterSlaveServerGroupsRequest::~DescribeMasterSlaveServerGroupsRequest()
{}

std::string DescribeMasterSlaveServerGroupsRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeMasterSlaveServerGroupsRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DescribeMasterSlaveServerGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMasterSlaveServerGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeMasterSlaveServerGroupsRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeMasterSlaveServerGroupsRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string DescribeMasterSlaveServerGroupsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeMasterSlaveServerGroupsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeMasterSlaveServerGroupsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeMasterSlaveServerGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeMasterSlaveServerGroupsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeMasterSlaveServerGroupsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeMasterSlaveServerGroupsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeMasterSlaveServerGroupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeMasterSlaveServerGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeMasterSlaveServerGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeMasterSlaveServerGroupsRequest::getTags()const
{
	return tags_;
}

void DescribeMasterSlaveServerGroupsRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

