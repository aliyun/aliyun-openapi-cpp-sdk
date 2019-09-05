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

#include <alibabacloud/cloudapi/model/CreateInstanceRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "CreateInstance")
{}

CreateInstanceRequest::~CreateInstanceRequest()
{}

bool CreateInstanceRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateInstanceRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateInstanceRequest::getInstanceSpec()const
{
	return instanceSpec_;
}

void CreateInstanceRequest::setInstanceSpec(const std::string& instanceSpec)
{
	instanceSpec_ = instanceSpec;
	setCoreParameter("InstanceSpec", instanceSpec);
}

std::string CreateInstanceRequest::getHttpsPolicy()const
{
	return httpsPolicy_;
}

void CreateInstanceRequest::setHttpsPolicy(const std::string& httpsPolicy)
{
	httpsPolicy_ = httpsPolicy;
	setCoreParameter("HttpsPolicy", httpsPolicy);
}

std::string CreateInstanceRequest::getToken()const
{
	return token_;
}

void CreateInstanceRequest::setToken(const std::string& token)
{
	token_ = token;
	setCoreParameter("Token", token);
}

int CreateInstanceRequest::getDuration()const
{
	return duration_;
}

void CreateInstanceRequest::setDuration(int duration)
{
	duration_ = duration;
	setCoreParameter("Duration", std::to_string(duration));
}

std::string CreateInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

std::string CreateInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string CreateInstanceRequest::getChargeType()const
{
	return chargeType_;
}

void CreateInstanceRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", chargeType);
}

std::string CreateInstanceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateInstanceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setCoreParameter("PricingCycle", pricingCycle);
}

