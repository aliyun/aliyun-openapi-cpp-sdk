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

#include <alibabacloud/ecs/model/RenewInstanceRequest.h>

using AlibabaCloud::Ecs::Model::RenewInstanceRequest;

RenewInstanceRequest::RenewInstanceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "RenewInstance")
{
	setMethod(HttpRequest::Method::Post);
}

RenewInstanceRequest::~RenewInstanceRequest()
{}

long RenewInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenewInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RenewInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void RenewInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

int RenewInstanceRequest::getPeriod()const
{
	return period_;
}

void RenewInstanceRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string RenewInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RenewInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RenewInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RenewInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RenewInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RenewInstanceRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void RenewInstanceRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", periodUnit);
}

std::string RenewInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void RenewInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

