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

#include <alibabacloud/aegis/model/RenewInstanceRequest.h>

using AlibabaCloud::Aegis::Model::RenewInstanceRequest;

RenewInstanceRequest::RenewInstanceRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "RenewInstance")
{
	setMethod(HttpRequest::Method::Post);
}

RenewInstanceRequest::~RenewInstanceRequest()
{}

int RenewInstanceRequest::getDuration()const
{
	return duration_;
}

void RenewInstanceRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string RenewInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void RenewInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string RenewInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void RenewInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RenewInstanceRequest::getVmNumber()const
{
	return vmNumber_;
}

void RenewInstanceRequest::setVmNumber(const std::string& vmNumber)
{
	vmNumber_ = vmNumber;
	setParameter("VmNumber", vmNumber);
}

long RenewInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RenewInstanceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void RenewInstanceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

