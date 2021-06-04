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

#include <alibabacloud/ecs/model/CreatePrefixListRequest.h>

using AlibabaCloud::Ecs::Model::CreatePrefixListRequest;

CreatePrefixListRequest::CreatePrefixListRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreatePrefixList")
{
	setMethod(HttpRequest::Method::Post);
}

CreatePrefixListRequest::~CreatePrefixListRequest()
{}

long CreatePrefixListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreatePrefixListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreatePrefixListRequest::getClientToken()const
{
	return clientToken_;
}

void CreatePrefixListRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreatePrefixListRequest::getDescription()const
{
	return description_;
}

void CreatePrefixListRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

int CreatePrefixListRequest::getMaxEntries()const
{
	return maxEntries_;
}

void CreatePrefixListRequest::setMaxEntries(int maxEntries)
{
	maxEntries_ = maxEntries;
	setParameter("MaxEntries", std::to_string(maxEntries));
}

std::string CreatePrefixListRequest::getRegionId()const
{
	return regionId_;
}

void CreatePrefixListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreatePrefixListRequest::getAddressFamily()const
{
	return addressFamily_;
}

void CreatePrefixListRequest::setAddressFamily(const std::string& addressFamily)
{
	addressFamily_ = addressFamily;
	setParameter("AddressFamily", addressFamily);
}

std::string CreatePrefixListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreatePrefixListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreatePrefixListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreatePrefixListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreatePrefixListRequest::getOwnerId()const
{
	return ownerId_;
}

void CreatePrefixListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreatePrefixListRequest::getPrefixListName()const
{
	return prefixListName_;
}

void CreatePrefixListRequest::setPrefixListName(const std::string& prefixListName)
{
	prefixListName_ = prefixListName;
	setParameter("PrefixListName", prefixListName);
}

std::vector<CreatePrefixListRequest::Entry> CreatePrefixListRequest::getEntry()const
{
	return entry_;
}

void CreatePrefixListRequest::setEntry(const std::vector<Entry>& entry)
{
	entry_ = entry;
	for(int dep1 = 0; dep1!= entry.size(); dep1++) {
		auto entryObj = entry.at(dep1);
		std::string entryObjStr = "Entry." + std::to_string(dep1 + 1);
		setParameter(entryObjStr + ".Cidr", entryObj.cidr);
		setParameter(entryObjStr + ".Description", entryObj.description);
	}
}

