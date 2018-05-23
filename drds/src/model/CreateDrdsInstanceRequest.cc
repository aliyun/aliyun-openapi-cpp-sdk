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

int CreateDrdsInstanceRequest::getQuantity()const
{
	return quantity_;
}

void CreateDrdsInstanceRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setParameter("Quantity", std::to_string(quantity));
}

std::string CreateDrdsInstanceRequest::getDescription()const
{
	return description_;
}

void CreateDrdsInstanceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateDrdsInstanceRequest::getSpecification()const
{
	return specification_;
}

void CreateDrdsInstanceRequest::setSpecification(const std::string& specification)
{
	specification_ = specification;
	setParameter("Specification", specification);
}

std::string CreateDrdsInstanceRequest::getType()const
{
	return type_;
}

void CreateDrdsInstanceRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateDrdsInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDrdsInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDrdsInstanceRequest::getVswitchId()const
{
	return vswitchId_;
}

void CreateDrdsInstanceRequest::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setParameter("VswitchId", vswitchId);
}

bool CreateDrdsInstanceRequest::getIsHa()const
{
	return isHa_;
}

void CreateDrdsInstanceRequest::setIsHa(bool isHa)
{
	isHa_ = isHa;
	setParameter("IsHa", std::to_string(isHa));
}

std::string CreateDrdsInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateDrdsInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateDrdsInstanceRequest::getInstanceSeries()const
{
	return instanceSeries_;
}

void CreateDrdsInstanceRequest::setInstanceSeries(const std::string& instanceSeries)
{
	instanceSeries_ = instanceSeries;
	setParameter("InstanceSeries", instanceSeries);
}

std::string CreateDrdsInstanceRequest::getVpcId()const
{
	return vpcId_;
}

void CreateDrdsInstanceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateDrdsInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDrdsInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateDrdsInstanceRequest::getPayType()const
{
	return payType_;
}

void CreateDrdsInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

