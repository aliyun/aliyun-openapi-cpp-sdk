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

#include <alibabacloud/vpc/model/UpdateTrafficMirrorSessionAttributeRequest.h>

using AlibabaCloud::Vpc::Model::UpdateTrafficMirrorSessionAttributeRequest;

UpdateTrafficMirrorSessionAttributeRequest::UpdateTrafficMirrorSessionAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "UpdateTrafficMirrorSessionAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateTrafficMirrorSessionAttributeRequest::~UpdateTrafficMirrorSessionAttributeRequest()
{}

std::string UpdateTrafficMirrorSessionAttributeRequest::getTrafficMirrorTargetType()const
{
	return trafficMirrorTargetType_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setTrafficMirrorTargetType(const std::string& trafficMirrorTargetType)
{
	trafficMirrorTargetType_ = trafficMirrorTargetType;
	setParameter("TrafficMirrorTargetType", trafficMirrorTargetType);
}

long UpdateTrafficMirrorSessionAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateTrafficMirrorSessionAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

bool UpdateTrafficMirrorSessionAttributeRequest::getEnabled()const
{
	return enabled_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

std::string UpdateTrafficMirrorSessionAttributeRequest::getTrafficMirrorSessionName()const
{
	return trafficMirrorSessionName_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setTrafficMirrorSessionName(const std::string& trafficMirrorSessionName)
{
	trafficMirrorSessionName_ = trafficMirrorSessionName;
	setParameter("TrafficMirrorSessionName", trafficMirrorSessionName);
}

std::string UpdateTrafficMirrorSessionAttributeRequest::getRegionId()const
{
	return regionId_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateTrafficMirrorSessionAttributeRequest::getTrafficMirrorSessionDescription()const
{
	return trafficMirrorSessionDescription_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setTrafficMirrorSessionDescription(const std::string& trafficMirrorSessionDescription)
{
	trafficMirrorSessionDescription_ = trafficMirrorSessionDescription;
	setParameter("TrafficMirrorSessionDescription", trafficMirrorSessionDescription);
}

bool UpdateTrafficMirrorSessionAttributeRequest::getDryRun()const
{
	return dryRun_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string UpdateTrafficMirrorSessionAttributeRequest::getTrafficMirrorSessionId()const
{
	return trafficMirrorSessionId_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setTrafficMirrorSessionId(const std::string& trafficMirrorSessionId)
{
	trafficMirrorSessionId_ = trafficMirrorSessionId;
	setParameter("TrafficMirrorSessionId", trafficMirrorSessionId);
}

std::string UpdateTrafficMirrorSessionAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateTrafficMirrorSessionAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int UpdateTrafficMirrorSessionAttributeRequest::getPriority()const
{
	return priority_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

long UpdateTrafficMirrorSessionAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateTrafficMirrorSessionAttributeRequest::getTrafficMirrorTargetId()const
{
	return trafficMirrorTargetId_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setTrafficMirrorTargetId(const std::string& trafficMirrorTargetId)
{
	trafficMirrorTargetId_ = trafficMirrorTargetId;
	setParameter("TrafficMirrorTargetId", trafficMirrorTargetId);
}

std::string UpdateTrafficMirrorSessionAttributeRequest::getTrafficMirrorFilterId()const
{
	return trafficMirrorFilterId_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setTrafficMirrorFilterId(const std::string& trafficMirrorFilterId)
{
	trafficMirrorFilterId_ = trafficMirrorFilterId;
	setParameter("TrafficMirrorFilterId", trafficMirrorFilterId);
}

int UpdateTrafficMirrorSessionAttributeRequest::getVirtualNetworkId()const
{
	return virtualNetworkId_;
}

void UpdateTrafficMirrorSessionAttributeRequest::setVirtualNetworkId(int virtualNetworkId)
{
	virtualNetworkId_ = virtualNetworkId;
	setParameter("VirtualNetworkId", std::to_string(virtualNetworkId));
}

