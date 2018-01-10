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

#include <alibabacloud/vpc/model/ModifyVpnConnectionAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifyVpnConnectionAttributeResult::ModifyVpnConnectionAttributeResult() :
	ServiceResult()
{}

ModifyVpnConnectionAttributeResult::ModifyVpnConnectionAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyVpnConnectionAttributeResult::~ModifyVpnConnectionAttributeResult()
{}

void ModifyVpnConnectionAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allIkeConfig = value["IkeConfig"];
	for (auto value : allIkeConfig)
	{
		IkeConfig ikeConfigObject;
		ikeConfigObject.psk = value["Psk"].asString();
		ikeConfigObject.ikeVersion = value["IkeVersion"].asString();
		ikeConfigObject.ikeMode = value["IkeMode"].asString();
		ikeConfigObject.ikeEncAlg = value["IkeEncAlg"].asString();
		ikeConfigObject.ikeAuthAlg = value["IkeAuthAlg"].asString();
		ikeConfigObject.ikePfs = value["IkePfs"].asString();
		ikeConfigObject.ikeLifetime = std::stol(value["IkeLifetime"].asString());
		ikeConfigObject.localId = value["LocalId"].asString();
		ikeConfigObject.remoteId = value["RemoteId"].asString();
		ikeConfig_.push_back(ikeConfigObject);
	}
	auto allIpsecConfig = value["IpsecConfig"];
	for (auto value : allIpsecConfig)
	{
		IpsecConfig ipsecConfigObject;
		ipsecConfigObject.ipsecEncAlg = value["IpsecEncAlg"].asString();
		ipsecConfigObject.ipsecAuthAlg = value["IpsecAuthAlg"].asString();
		ipsecConfigObject.ipsecPfs = value["IpsecPfs"].asString();
		ipsecConfigObject.ipsecLifetime = std::stol(value["IpsecLifetime"].asString());
		ipsecConfig_.push_back(ipsecConfigObject);
	}
	vpnConnectionId_ = value["VpnConnectionId"].asString();
	customerGatewayId_ = value["CustomerGatewayId"].asString();
	vpnGatewayId_ = value["VpnGatewayId"].asString();
	name_ = value["Name"].asString();
	description_ = value["Description"].asString();
	localSubnet_ = value["LocalSubnet"].asString();
	remoteSubnet_ = value["RemoteSubnet"].asString();
	createTime_ = std::stol(value["CreateTime"].asString());
	effectImmediately_ = std::stoi(value["EffectImmediately"].asString());

}

std::string ModifyVpnConnectionAttributeResult::getLocalSubnet()const
{
	return localSubnet_;
}

void ModifyVpnConnectionAttributeResult::setLocalSubnet(const std::string& localSubnet)
{
	localSubnet_ = localSubnet;
}

bool ModifyVpnConnectionAttributeResult::getEffectImmediately()const
{
	return effectImmediately_;
}

void ModifyVpnConnectionAttributeResult::setEffectImmediately(bool effectImmediately)
{
	effectImmediately_ = effectImmediately;
}

std::string ModifyVpnConnectionAttributeResult::getRemoteSubnet()const
{
	return remoteSubnet_;
}

void ModifyVpnConnectionAttributeResult::setRemoteSubnet(const std::string& remoteSubnet)
{
	remoteSubnet_ = remoteSubnet;
}

std::string ModifyVpnConnectionAttributeResult::getDescription()const
{
	return description_;
}

void ModifyVpnConnectionAttributeResult::setDescription(const std::string& description)
{
	description_ = description;
}

std::string ModifyVpnConnectionAttributeResult::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

void ModifyVpnConnectionAttributeResult::setCustomerGatewayId(const std::string& customerGatewayId)
{
	customerGatewayId_ = customerGatewayId;
}

std::string ModifyVpnConnectionAttributeResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void ModifyVpnConnectionAttributeResult::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
}

long ModifyVpnConnectionAttributeResult::getCreateTime()const
{
	return createTime_;
}

void ModifyVpnConnectionAttributeResult::setCreateTime(long createTime)
{
	createTime_ = createTime;
}

std::string ModifyVpnConnectionAttributeResult::getVpnConnectionId()const
{
	return vpnConnectionId_;
}

void ModifyVpnConnectionAttributeResult::setVpnConnectionId(const std::string& vpnConnectionId)
{
	vpnConnectionId_ = vpnConnectionId;
}

std::string ModifyVpnConnectionAttributeResult::getName()const
{
	return name_;
}

void ModifyVpnConnectionAttributeResult::setName(const std::string& name)
{
	name_ = name;
}

