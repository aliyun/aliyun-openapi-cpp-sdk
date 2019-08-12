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

#include <alibabacloud/drds/model/CreateDrdsInstanceRequest.h>

using AlibabaCloud::Drds::Model::CreateDrdsInstanceRequest;

CreateDrdsInstanceRequest::CreateDrdsInstanceRequest() :
	RpcServiceRequest("drds", "2017-10-16", "CreateDrdsInstance")
{}

CreateDrdsInstanceRequest::~CreateDrdsInstanceRequest()
{}

bool CreateDrdsInstanceRequest::getIsAutoRenew()const
{
	return isAutoRenew_;
}

void CreateDrdsInstanceRequest::setIsAutoRenew(bool isAutoRenew)
{
	isAutoRenew_ = isAutoRenew;
	setCoreParameter("IsAutoRenew", isAutoRenew);
}

int CreateDrdsInstanceRequest::getQuantity()const
{
	return quantity_;
}

void CreateDrdsInstanceRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setCoreParameter("Quantity", quantity);
}

std::string CreateDrdsInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDrdsInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateDrdsInstanceRequest::getDescription()const
{
	return description_;
}

void CreateDrdsInstanceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateDrdsInstanceRequest::getSpecification()const
{
	return specification_;
}

void CreateDrdsInstanceRequest::setSpecification(const std::string& specification)
{
	specification_ = specification;
	setCoreParameter("Specification", specification);
}

std::string CreateDrdsInstanceRequest::getType()const
{
	return type_;
}

void CreateDrdsInstanceRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateDrdsInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDrdsInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateDrdsInstanceRequest::getVswitchId()const
{
	return vswitchId_;
}

void CreateDrdsInstanceRequest::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setCoreParameter("VswitchId", vswitchId);
}

int CreateDrdsInstanceRequest::getDuration()const
{
	return duration_;
}

void CreateDrdsInstanceRequest::setDuration(int duration)
{
	duration_ = duration;
	setCoreParameter("Duration", duration);
}

bool CreateDrdsInstanceRequest::getIsHa()const
{
	return isHa_;
}

void CreateDrdsInstanceRequest::setIsHa(bool isHa)
{
	isHa_ = isHa;
	setCoreParameter("IsHa", isHa);
}

std::string CreateDrdsInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateDrdsInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateDrdsInstanceRequest::getInstanceSeries()const
{
	return instanceSeries_;
}

void CreateDrdsInstanceRequest::setInstanceSeries(const std::string& instanceSeries)
{
	instanceSeries_ = instanceSeries;
	setCoreParameter("InstanceSeries", instanceSeries);
}

std::string CreateDrdsInstanceRequest::getVpcId()const
{
	return vpcId_;
}

void CreateDrdsInstanceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string CreateDrdsInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDrdsInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string CreateDrdsInstanceRequest::getPayType()const
{
	return payType_;
}

void CreateDrdsInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

std::string CreateDrdsInstanceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateDrdsInstanceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setCoreParameter("PricingCycle", pricingCycle);
}

