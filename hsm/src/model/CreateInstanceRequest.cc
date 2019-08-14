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

#include <alibabacloud/hsm/model/CreateInstanceRequest.h>

using AlibabaCloud::Hsm::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest() :
	RpcServiceRequest("hsm", "2018-01-11", "CreateInstance")
{}

CreateInstanceRequest::~CreateInstanceRequest()
{}

int CreateInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateInstanceRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string CreateInstanceRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateInstanceRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", periodUnit);
}

std::string CreateInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateInstanceRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int CreateInstanceRequest::getQuantity()const
{
	return quantity_;
}

void CreateInstanceRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setCoreParameter("Quantity", std::to_string(quantity));
}

std::string CreateInstanceRequest::getHsmDeviceType()const
{
	return hsmDeviceType_;
}

void CreateInstanceRequest::setHsmDeviceType(const std::string& hsmDeviceType)
{
	hsmDeviceType_ = hsmDeviceType;
	setCoreParameter("HsmDeviceType", hsmDeviceType);
}

std::string CreateInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
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

std::string CreateInstanceRequest::getHsmOem()const
{
	return hsmOem_;
}

void CreateInstanceRequest::setHsmOem(const std::string& hsmOem)
{
	hsmOem_ = hsmOem;
	setCoreParameter("HsmOem", hsmOem);
}

