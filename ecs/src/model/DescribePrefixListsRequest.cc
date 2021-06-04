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

#include <alibabacloud/ecs/model/DescribePrefixListsRequest.h>

using AlibabaCloud::Ecs::Model::DescribePrefixListsRequest;

DescribePrefixListsRequest::DescribePrefixListsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribePrefixLists")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePrefixListsRequest::~DescribePrefixListsRequest()
{}

long DescribePrefixListsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribePrefixListsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribePrefixListsRequest::getRegionId()const
{
	return regionId_;
}

void DescribePrefixListsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> DescribePrefixListsRequest::getPrefixListId()const
{
	return prefixListId_;
}

void DescribePrefixListsRequest::setPrefixListId(const std::vector<std::string>& prefixListId)
{
	prefixListId_ = prefixListId;
	for(int dep1 = 0; dep1!= prefixListId.size(); dep1++) {
		setParameter("PrefixListId."+ std::to_string(dep1), prefixListId.at(dep1));
	}
}

std::string DescribePrefixListsRequest::getNextToken()const
{
	return nextToken_;
}

void DescribePrefixListsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string DescribePrefixListsRequest::getAddressFamily()const
{
	return addressFamily_;
}

void DescribePrefixListsRequest::setAddressFamily(const std::string& addressFamily)
{
	addressFamily_ = addressFamily;
	setParameter("AddressFamily", addressFamily);
}

std::string DescribePrefixListsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribePrefixListsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribePrefixListsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribePrefixListsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribePrefixListsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePrefixListsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribePrefixListsRequest::getPrefixListName()const
{
	return prefixListName_;
}

void DescribePrefixListsRequest::setPrefixListName(const std::string& prefixListName)
{
	prefixListName_ = prefixListName;
	setParameter("PrefixListName", prefixListName);
}

int DescribePrefixListsRequest::getMaxResults()const
{
	return maxResults_;
}

void DescribePrefixListsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

