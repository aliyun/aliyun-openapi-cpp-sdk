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
	setCoreParameter("IsAutoRenew", isAutoRenew ? "true" : "false");
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
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string CreateDrdsInstanceRequest::getDescription()const
{
	return description_;
}

void CreateDrdsInstanceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateDrdsInstanceRequest::getSpecification()const
{
	return specification_;
}

void CreateDrdsInstanceRequest::setSpecification(const std::string& specification)
{
	specification_ = specification;
	setCoreParameter("Specification", std::to_string(specification));
}

std::string CreateDrdsInstanceRequest::getType()const
{
	return type_;
}

void CreateDrdsInstanceRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string CreateDrdsInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDrdsInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateDrdsInstanceRequest::getVswitchId()const
{
	return vswitchId_;
}

void CreateDrdsInstanceRequest::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setCoreParameter("VswitchId", std::to_string(vswitchId));
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
	setCoreParameter("IsHa", isHa ? "true" : "false");
}

std::string CreateDrdsInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateDrdsInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateDrdsInstanceRequest::getInstanceSeries()const
{
	return instanceSeries_;
}

void CreateDrdsInstanceRequest::setInstanceSeries(const std::string& instanceSeries)
{
	instanceSeries_ = instanceSeries;
	setCoreParameter("InstanceSeries", std::to_string(instanceSeries));
}

std::string CreateDrdsInstanceRequest::getVpcId()const
{
	return vpcId_;
}

void CreateDrdsInstanceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string CreateDrdsInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDrdsInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

std::string CreateDrdsInstanceRequest::getPayType()const
{
	return payType_;
}

void CreateDrdsInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", std::to_string(payType));
}

std::string CreateDrdsInstanceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateDrdsInstanceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setCoreParameter("PricingCycle", std::to_string(pricingCycle));
}

