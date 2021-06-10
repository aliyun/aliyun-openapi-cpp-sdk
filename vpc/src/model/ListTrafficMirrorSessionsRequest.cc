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

#include <alibabacloud/vpc/model/ListTrafficMirrorSessionsRequest.h>

using AlibabaCloud::Vpc::Model::ListTrafficMirrorSessionsRequest;

ListTrafficMirrorSessionsRequest::ListTrafficMirrorSessionsRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ListTrafficMirrorSessions")
{
	setMethod(HttpRequest::Method::Post);
}

ListTrafficMirrorSessionsRequest::~ListTrafficMirrorSessionsRequest()
{}

long ListTrafficMirrorSessionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTrafficMirrorSessionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListTrafficMirrorSessionsRequest::getTrafficMirrorSourceId()const
{
	return trafficMirrorSourceId_;
}

void ListTrafficMirrorSessionsRequest::setTrafficMirrorSourceId(const std::string& trafficMirrorSourceId)
{
	trafficMirrorSourceId_ = trafficMirrorSourceId;
	setParameter("TrafficMirrorSourceId", trafficMirrorSourceId);
}

bool ListTrafficMirrorSessionsRequest::getEnabled()const
{
	return enabled_;
}

void ListTrafficMirrorSessionsRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

std::string ListTrafficMirrorSessionsRequest::getTrafficMirrorSessionName()const
{
	return trafficMirrorSessionName_;
}

void ListTrafficMirrorSessionsRequest::setTrafficMirrorSessionName(const std::string& trafficMirrorSessionName)
{
	trafficMirrorSessionName_ = trafficMirrorSessionName;
	setParameter("TrafficMirrorSessionName", trafficMirrorSessionName);
}

std::string ListTrafficMirrorSessionsRequest::getNextToken()const
{
	return nextToken_;
}

void ListTrafficMirrorSessionsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListTrafficMirrorSessionsRequest::getRegionId()const
{
	return regionId_;
}

void ListTrafficMirrorSessionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> ListTrafficMirrorSessionsRequest::getTrafficMirrorSessionIds()const
{
	return trafficMirrorSessionIds_;
}

void ListTrafficMirrorSessionsRequest::setTrafficMirrorSessionIds(const std::vector<std::string>& trafficMirrorSessionIds)
{
	trafficMirrorSessionIds_ = trafficMirrorSessionIds;
	for(int dep1 = 0; dep1!= trafficMirrorSessionIds.size(); dep1++) {
		setParameter("TrafficMirrorSessionIds."+ std::to_string(dep1), trafficMirrorSessionIds.at(dep1));
	}
}

std::string ListTrafficMirrorSessionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListTrafficMirrorSessionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListTrafficMirrorSessionsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListTrafficMirrorSessionsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int ListTrafficMirrorSessionsRequest::getPriority()const
{
	return priority_;
}

void ListTrafficMirrorSessionsRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

long ListTrafficMirrorSessionsRequest::getOwnerId()const
{
	return ownerId_;
}

void ListTrafficMirrorSessionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListTrafficMirrorSessionsRequest::getTrafficMirrorTargetId()const
{
	return trafficMirrorTargetId_;
}

void ListTrafficMirrorSessionsRequest::setTrafficMirrorTargetId(const std::string& trafficMirrorTargetId)
{
	trafficMirrorTargetId_ = trafficMirrorTargetId;
	setParameter("TrafficMirrorTargetId", trafficMirrorTargetId);
}

std::string ListTrafficMirrorSessionsRequest::getTrafficMirrorFilterId()const
{
	return trafficMirrorFilterId_;
}

void ListTrafficMirrorSessionsRequest::setTrafficMirrorFilterId(const std::string& trafficMirrorFilterId)
{
	trafficMirrorFilterId_ = trafficMirrorFilterId;
	setParameter("TrafficMirrorFilterId", trafficMirrorFilterId);
}

int ListTrafficMirrorSessionsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListTrafficMirrorSessionsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

int ListTrafficMirrorSessionsRequest::getVirtualNetworkId()const
{
	return virtualNetworkId_;
}

void ListTrafficMirrorSessionsRequest::setVirtualNetworkId(int virtualNetworkId)
{
	virtualNetworkId_ = virtualNetworkId;
	setParameter("VirtualNetworkId", std::to_string(virtualNetworkId));
}

