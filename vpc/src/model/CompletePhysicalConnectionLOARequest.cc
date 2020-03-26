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

#include <alibabacloud/vpc/model/CompletePhysicalConnectionLOARequest.h>

using AlibabaCloud::Vpc::Model::CompletePhysicalConnectionLOARequest;

CompletePhysicalConnectionLOARequest::CompletePhysicalConnectionLOARequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CompletePhysicalConnectionLOA")
{
	setMethod(HttpRequest::Method::Post);
}

CompletePhysicalConnectionLOARequest::~CompletePhysicalConnectionLOARequest()
{}

std::string CompletePhysicalConnectionLOARequest::getLineCode()const
{
	return lineCode_;
}

void CompletePhysicalConnectionLOARequest::setLineCode(const std::string& lineCode)
{
	lineCode_ = lineCode;
	setParameter("LineCode", lineCode);
}

long CompletePhysicalConnectionLOARequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CompletePhysicalConnectionLOARequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CompletePhysicalConnectionLOARequest::getClientToken()const
{
	return clientToken_;
}

void CompletePhysicalConnectionLOARequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CompletePhysicalConnectionLOARequest::getRegionId()const
{
	return regionId_;
}

void CompletePhysicalConnectionLOARequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CompletePhysicalConnectionLOARequest::getLineLabel()const
{
	return lineLabel_;
}

void CompletePhysicalConnectionLOARequest::setLineLabel(const std::string& lineLabel)
{
	lineLabel_ = lineLabel;
	setParameter("LineLabel", lineLabel);
}

std::string CompletePhysicalConnectionLOARequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CompletePhysicalConnectionLOARequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CompletePhysicalConnectionLOARequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CompletePhysicalConnectionLOARequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CompletePhysicalConnectionLOARequest::getOwnerId()const
{
	return ownerId_;
}

void CompletePhysicalConnectionLOARequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CompletePhysicalConnectionLOARequest::getInstanceId()const
{
	return instanceId_;
}

void CompletePhysicalConnectionLOARequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

