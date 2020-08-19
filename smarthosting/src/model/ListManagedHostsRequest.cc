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

#include <alibabacloud/smarthosting/model/ListManagedHostsRequest.h>

using AlibabaCloud::SmartHosting::Model::ListManagedHostsRequest;

ListManagedHostsRequest::ListManagedHostsRequest() :
	RpcServiceRequest("smarthosting", "2020-08-01", "ListManagedHosts")
{
	setMethod(HttpRequest::Method::Post);
}

ListManagedHostsRequest::~ListManagedHostsRequest()
{}

long ListManagedHostsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListManagedHostsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListManagedHostsRequest::getHostType()const
{
	return hostType_;
}

void ListManagedHostsRequest::setHostType(const std::string& hostType)
{
	hostType_ = hostType;
	setParameter("HostType", hostType);
}

std::string ListManagedHostsRequest::getMode()const
{
	return mode_;
}

void ListManagedHostsRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string ListManagedHostsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListManagedHostsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListManagedHostsRequest::getRegionId()const
{
	return regionId_;
}

void ListManagedHostsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListManagedHostsRequest::getNextToken()const
{
	return nextToken_;
}

void ListManagedHostsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::vector<ListManagedHostsRequest::Tag> ListManagedHostsRequest::getTag()const
{
	return tag_;
}

void ListManagedHostsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::string ListManagedHostsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListManagedHostsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListManagedHostsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListManagedHostsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::vector<std::string> ListManagedHostsRequest::getManagedHostId()const
{
	return managedHostId_;
}

void ListManagedHostsRequest::setManagedHostId(const std::vector<std::string>& managedHostId)
{
	managedHostId_ = managedHostId;
	for(int dep1 = 0; dep1!= managedHostId.size(); dep1++) {
		setParameter("ManagedHostId."+ std::to_string(dep1), managedHostId.at(dep1));
	}
}

long ListManagedHostsRequest::getOwnerId()const
{
	return ownerId_;
}

void ListManagedHostsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListManagedHostsRequest::getManagedPrivateSpaceId()const
{
	return managedPrivateSpaceId_;
}

void ListManagedHostsRequest::setManagedPrivateSpaceId(const std::string& managedPrivateSpaceId)
{
	managedPrivateSpaceId_ = managedPrivateSpaceId;
	setParameter("ManagedPrivateSpaceId", managedPrivateSpaceId);
}

std::string ListManagedHostsRequest::getZoneId()const
{
	return zoneId_;
}

void ListManagedHostsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

int ListManagedHostsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListManagedHostsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListManagedHostsRequest::getManagedHostName()const
{
	return managedHostName_;
}

void ListManagedHostsRequest::setManagedHostName(const std::string& managedHostName)
{
	managedHostName_ = managedHostName;
	setParameter("ManagedHostName", managedHostName);
}

std::string ListManagedHostsRequest::getStatus()const
{
	return status_;
}

void ListManagedHostsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

