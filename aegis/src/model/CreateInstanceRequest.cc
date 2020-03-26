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

#include <alibabacloud/aegis/model/CreateInstanceRequest.h>

using AlibabaCloud::Aegis::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "CreateInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest()
{}

bool CreateInstanceRequest::getIsAutoRenew()const
{
	return isAutoRenew_;
}

void CreateInstanceRequest::setIsAutoRenew(bool isAutoRenew)
{
	isAutoRenew_ = isAutoRenew;
	setParameter("IsAutoRenew", isAutoRenew ? "true" : "false");
}

std::string CreateInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

int CreateInstanceRequest::getVmNumber()const
{
	return vmNumber_;
}

void CreateInstanceRequest::setVmNumber(int vmNumber)
{
	vmNumber_ = vmNumber;
	setParameter("VmNumber", std::to_string(vmNumber));
}

long CreateInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int CreateInstanceRequest::getAutoRenewDuration()const
{
	return autoRenewDuration_;
}

void CreateInstanceRequest::setAutoRenewDuration(int autoRenewDuration)
{
	autoRenewDuration_ = autoRenewDuration;
	setParameter("AutoRenewDuration", std::to_string(autoRenewDuration));
}

int CreateInstanceRequest::getDuration()const
{
	return duration_;
}

void CreateInstanceRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

int CreateInstanceRequest::getVersionCode()const
{
	return versionCode_;
}

void CreateInstanceRequest::setVersionCode(int versionCode)
{
	versionCode_ = versionCode;
	setParameter("VersionCode", std::to_string(versionCode));
}

std::string CreateInstanceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateInstanceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

