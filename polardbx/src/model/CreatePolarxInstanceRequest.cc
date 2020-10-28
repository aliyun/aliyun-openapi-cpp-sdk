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

#include <alibabacloud/polardbx/model/CreatePolarxInstanceRequest.h>

using AlibabaCloud::Polardbx::Model::CreatePolarxInstanceRequest;

CreatePolarxInstanceRequest::CreatePolarxInstanceRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "CreatePolarxInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreatePolarxInstanceRequest::~CreatePolarxInstanceRequest()
{}

bool CreatePolarxInstanceRequest::getIsAutoRenew()const
{
	return isAutoRenew_;
}

void CreatePolarxInstanceRequest::setIsAutoRenew(bool isAutoRenew)
{
	isAutoRenew_ = isAutoRenew;
	setParameter("IsAutoRenew", isAutoRenew ? "true" : "false");
}

std::string CreatePolarxInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreatePolarxInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreatePolarxInstanceRequest::getDescription()const
{
	return description_;
}

void CreatePolarxInstanceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreatePolarxInstanceRequest::getType()const
{
	return type_;
}

void CreatePolarxInstanceRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreatePolarxInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreatePolarxInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int CreatePolarxInstanceRequest::getDuration()const
{
	return duration_;
}

void CreatePolarxInstanceRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

bool CreatePolarxInstanceRequest::getIsHa()const
{
	return isHa_;
}

void CreatePolarxInstanceRequest::setIsHa(bool isHa)
{
	isHa_ = isHa;
	setParameter("IsHa", isHa ? "true" : "false");
}

int CreatePolarxInstanceRequest::getMySQLVersion()const
{
	return mySQLVersion_;
}

void CreatePolarxInstanceRequest::setMySQLVersion(int mySQLVersion)
{
	mySQLVersion_ = mySQLVersion;
	setParameter("MySQLVersion", std::to_string(mySQLVersion));
}

std::string CreatePolarxInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreatePolarxInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreatePolarxInstanceRequest::getInstanceSeries()const
{
	return instanceSeries_;
}

void CreatePolarxInstanceRequest::setInstanceSeries(const std::string& instanceSeries)
{
	instanceSeries_ = instanceSeries;
	setParameter("InstanceSeries", instanceSeries);
}

std::string CreatePolarxInstanceRequest::getMasterInstId()const
{
	return masterInstId_;
}

void CreatePolarxInstanceRequest::setMasterInstId(const std::string& masterInstId)
{
	masterInstId_ = masterInstId;
	setParameter("MasterInstId", masterInstId);
}

int CreatePolarxInstanceRequest::getQuantity()const
{
	return quantity_;
}

void CreatePolarxInstanceRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setParameter("Quantity", std::to_string(quantity));
}

std::string CreatePolarxInstanceRequest::getSpecification()const
{
	return specification_;
}

void CreatePolarxInstanceRequest::setSpecification(const std::string& specification)
{
	specification_ = specification;
	setParameter("Specification", specification);
}

std::string CreatePolarxInstanceRequest::getVswitchId()const
{
	return vswitchId_;
}

void CreatePolarxInstanceRequest::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setParameter("VswitchId", vswitchId);
}

std::string CreatePolarxInstanceRequest::getVpcId()const
{
	return vpcId_;
}

void CreatePolarxInstanceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreatePolarxInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreatePolarxInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreatePolarxInstanceRequest::getPayType()const
{
	return payType_;
}

void CreatePolarxInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string CreatePolarxInstanceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreatePolarxInstanceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

