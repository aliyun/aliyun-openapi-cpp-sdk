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

#include <alibabacloud/smarthosting/model/ListManagedPrivateSpacesRequest.h>

using AlibabaCloud::SmartHosting::Model::ListManagedPrivateSpacesRequest;

ListManagedPrivateSpacesRequest::ListManagedPrivateSpacesRequest() :
	RpcServiceRequest("smarthosting", "2020-08-01", "ListManagedPrivateSpaces")
{
	setMethod(HttpRequest::Method::Post);
}

ListManagedPrivateSpacesRequest::~ListManagedPrivateSpacesRequest()
{}

long ListManagedPrivateSpacesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListManagedPrivateSpacesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListManagedPrivateSpacesRequest::getManagedPrivateSpaceName()const
{
	return managedPrivateSpaceName_;
}

void ListManagedPrivateSpacesRequest::setManagedPrivateSpaceName(const std::string& managedPrivateSpaceName)
{
	managedPrivateSpaceName_ = managedPrivateSpaceName;
	setParameter("ManagedPrivateSpaceName", managedPrivateSpaceName);
}

std::string ListManagedPrivateSpacesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListManagedPrivateSpacesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListManagedPrivateSpacesRequest::getRegionId()const
{
	return regionId_;
}

void ListManagedPrivateSpacesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListManagedPrivateSpacesRequest::getNextToken()const
{
	return nextToken_;
}

void ListManagedPrivateSpacesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::vector<ListManagedPrivateSpacesRequest::Tag> ListManagedPrivateSpacesRequest::getTag()const
{
	return tag_;
}

void ListManagedPrivateSpacesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::string ListManagedPrivateSpacesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListManagedPrivateSpacesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListManagedPrivateSpacesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListManagedPrivateSpacesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ListManagedPrivateSpacesRequest::getOwnerId()const
{
	return ownerId_;
}

void ListManagedPrivateSpacesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> ListManagedPrivateSpacesRequest::getManagedPrivateSpaceId()const
{
	return managedPrivateSpaceId_;
}

void ListManagedPrivateSpacesRequest::setManagedPrivateSpaceId(const std::vector<std::string>& managedPrivateSpaceId)
{
	managedPrivateSpaceId_ = managedPrivateSpaceId;
	for(int dep1 = 0; dep1!= managedPrivateSpaceId.size(); dep1++) {
		setParameter("ManagedPrivateSpaceId."+ std::to_string(dep1), managedPrivateSpaceId.at(dep1));
	}
}

std::string ListManagedPrivateSpacesRequest::getZoneId()const
{
	return zoneId_;
}

void ListManagedPrivateSpacesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

int ListManagedPrivateSpacesRequest::getMaxResults()const
{
	return maxResults_;
}

void ListManagedPrivateSpacesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

