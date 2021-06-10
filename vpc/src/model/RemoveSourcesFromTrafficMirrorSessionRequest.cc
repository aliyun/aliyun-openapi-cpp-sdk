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

#include <alibabacloud/vpc/model/RemoveSourcesFromTrafficMirrorSessionRequest.h>

using AlibabaCloud::Vpc::Model::RemoveSourcesFromTrafficMirrorSessionRequest;

RemoveSourcesFromTrafficMirrorSessionRequest::RemoveSourcesFromTrafficMirrorSessionRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "RemoveSourcesFromTrafficMirrorSession")
{
	setMethod(HttpRequest::Method::Post);
}

RemoveSourcesFromTrafficMirrorSessionRequest::~RemoveSourcesFromTrafficMirrorSessionRequest()
{}

long RemoveSourcesFromTrafficMirrorSessionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveSourcesFromTrafficMirrorSessionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RemoveSourcesFromTrafficMirrorSessionRequest::getClientToken()const
{
	return clientToken_;
}

void RemoveSourcesFromTrafficMirrorSessionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RemoveSourcesFromTrafficMirrorSessionRequest::getRegionId()const
{
	return regionId_;
}

void RemoveSourcesFromTrafficMirrorSessionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> RemoveSourcesFromTrafficMirrorSessionRequest::getTrafficMirrorSourceIds()const
{
	return trafficMirrorSourceIds_;
}

void RemoveSourcesFromTrafficMirrorSessionRequest::setTrafficMirrorSourceIds(const std::vector<std::string>& trafficMirrorSourceIds)
{
	trafficMirrorSourceIds_ = trafficMirrorSourceIds;
	for(int dep1 = 0; dep1!= trafficMirrorSourceIds.size(); dep1++) {
		setParameter("TrafficMirrorSourceIds."+ std::to_string(dep1), trafficMirrorSourceIds.at(dep1));
	}
}

bool RemoveSourcesFromTrafficMirrorSessionRequest::getDryRun()const
{
	return dryRun_;
}

void RemoveSourcesFromTrafficMirrorSessionRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string RemoveSourcesFromTrafficMirrorSessionRequest::getTrafficMirrorSessionId()const
{
	return trafficMirrorSessionId_;
}

void RemoveSourcesFromTrafficMirrorSessionRequest::setTrafficMirrorSessionId(const std::string& trafficMirrorSessionId)
{
	trafficMirrorSessionId_ = trafficMirrorSessionId;
	setParameter("TrafficMirrorSessionId", trafficMirrorSessionId);
}

std::string RemoveSourcesFromTrafficMirrorSessionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RemoveSourcesFromTrafficMirrorSessionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RemoveSourcesFromTrafficMirrorSessionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RemoveSourcesFromTrafficMirrorSessionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long RemoveSourcesFromTrafficMirrorSessionRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveSourcesFromTrafficMirrorSessionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

