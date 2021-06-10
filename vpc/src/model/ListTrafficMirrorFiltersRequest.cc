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

#include <alibabacloud/vpc/model/ListTrafficMirrorFiltersRequest.h>

using AlibabaCloud::Vpc::Model::ListTrafficMirrorFiltersRequest;

ListTrafficMirrorFiltersRequest::ListTrafficMirrorFiltersRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ListTrafficMirrorFilters")
{
	setMethod(HttpRequest::Method::Post);
}

ListTrafficMirrorFiltersRequest::~ListTrafficMirrorFiltersRequest()
{}

long ListTrafficMirrorFiltersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTrafficMirrorFiltersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> ListTrafficMirrorFiltersRequest::getTrafficMirrorFilterIds()const
{
	return trafficMirrorFilterIds_;
}

void ListTrafficMirrorFiltersRequest::setTrafficMirrorFilterIds(const std::vector<std::string>& trafficMirrorFilterIds)
{
	trafficMirrorFilterIds_ = trafficMirrorFilterIds;
	for(int dep1 = 0; dep1!= trafficMirrorFilterIds.size(); dep1++) {
		setParameter("TrafficMirrorFilterIds."+ std::to_string(dep1), trafficMirrorFilterIds.at(dep1));
	}
}

std::string ListTrafficMirrorFiltersRequest::getTrafficMirrorFilterName()const
{
	return trafficMirrorFilterName_;
}

void ListTrafficMirrorFiltersRequest::setTrafficMirrorFilterName(const std::string& trafficMirrorFilterName)
{
	trafficMirrorFilterName_ = trafficMirrorFilterName;
	setParameter("TrafficMirrorFilterName", trafficMirrorFilterName);
}

std::string ListTrafficMirrorFiltersRequest::getNextToken()const
{
	return nextToken_;
}

void ListTrafficMirrorFiltersRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListTrafficMirrorFiltersRequest::getRegionId()const
{
	return regionId_;
}

void ListTrafficMirrorFiltersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListTrafficMirrorFiltersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListTrafficMirrorFiltersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListTrafficMirrorFiltersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListTrafficMirrorFiltersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ListTrafficMirrorFiltersRequest::getOwnerId()const
{
	return ownerId_;
}

void ListTrafficMirrorFiltersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int ListTrafficMirrorFiltersRequest::getMaxResults()const
{
	return maxResults_;
}

void ListTrafficMirrorFiltersRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

