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

#include <alibabacloud/ecs/model/CancelSimulatedSystemEventsRequest.h>

using AlibabaCloud::Ecs::Model::CancelSimulatedSystemEventsRequest;

CancelSimulatedSystemEventsRequest::CancelSimulatedSystemEventsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CancelSimulatedSystemEvents")
{
	setMethod(HttpRequest::Method::Post);
}

CancelSimulatedSystemEventsRequest::~CancelSimulatedSystemEventsRequest()
{}

std::vector<std::string> CancelSimulatedSystemEventsRequest::getEventId()const
{
	return eventId_;
}

void CancelSimulatedSystemEventsRequest::setEventId(const std::vector<std::string>& eventId)
{
	eventId_ = eventId;
	for(int dep1 = 0; dep1!= eventId.size(); dep1++) {
		setCoreParameter("EventId."+ std::to_string(dep1), eventId.at(dep1));
	}
}

long CancelSimulatedSystemEventsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CancelSimulatedSystemEventsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CancelSimulatedSystemEventsRequest::getRegionId()const
{
	return regionId_;
}

void CancelSimulatedSystemEventsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CancelSimulatedSystemEventsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CancelSimulatedSystemEventsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CancelSimulatedSystemEventsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CancelSimulatedSystemEventsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CancelSimulatedSystemEventsRequest::getOwnerId()const
{
	return ownerId_;
}

void CancelSimulatedSystemEventsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

