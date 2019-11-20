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

#include <alibabacloud/vpc/model/CreateVpnGatewayRequest.h>

using AlibabaCloud::Vpc::Model::CreateVpnGatewayRequest;

CreateVpnGatewayRequest::CreateVpnGatewayRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateVpnGateway")
{
	setMethod(HttpRequest::Method::Post);
}

CreateVpnGatewayRequest::~CreateVpnGatewayRequest()
{}

long CreateVpnGatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateVpnGatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool CreateVpnGatewayRequest::getEnableIpsec()const
{
	return enableIpsec_;
}

void CreateVpnGatewayRequest::setEnableIpsec(bool enableIpsec)
{
	enableIpsec_ = enableIpsec;
	setCoreParameter("EnableIpsec", enableIpsec ? "true" : "false");
}

std::string CreateVpnGatewayRequest::getRegionId()const
{
	return regionId_;
}

void CreateVpnGatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateVpnGatewayRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateVpnGatewayRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

int CreateVpnGatewayRequest::getPeriod()const
{
	return period_;
}

void CreateVpnGatewayRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

bool CreateVpnGatewayRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateVpnGatewayRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateVpnGatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateVpnGatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateVpnGatewayRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateVpnGatewayRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreateVpnGatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateVpnGatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateVpnGatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateVpnGatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateVpnGatewayRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateVpnGatewayRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

bool CreateVpnGatewayRequest::getEnableSsl()const
{
	return enableSsl_;
}

void CreateVpnGatewayRequest::setEnableSsl(bool enableSsl)
{
	enableSsl_ = enableSsl;
	setCoreParameter("EnableSsl", enableSsl ? "true" : "false");
}

int CreateVpnGatewayRequest::getSslConnections()const
{
	return sslConnections_;
}

void CreateVpnGatewayRequest::setSslConnections(int sslConnections)
{
	sslConnections_ = sslConnections;
	setCoreParameter("SslConnections", std::to_string(sslConnections));
}

std::string CreateVpnGatewayRequest::getVpcId()const
{
	return vpcId_;
}

void CreateVpnGatewayRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string CreateVpnGatewayRequest::getName()const
{
	return name_;
}

void CreateVpnGatewayRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

