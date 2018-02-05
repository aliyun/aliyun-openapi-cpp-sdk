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
		if(!value["Psk"].isNull())
			ikeConfigObject.psk = value["Psk"].asString();
		if(!value["IkeVersion"].isNull())
			ikeConfigObject.ikeVersion = value["IkeVersion"].asString();
		if(!value["IkeMode"].isNull())
			ikeConfigObject.ikeMode = value["IkeMode"].asString();
		if(!value["IkeEncAlg"].isNull())
			ikeConfigObject.ikeEncAlg = value["IkeEncAlg"].asString();
		if(!value["IkeAuthAlg"].isNull())
			ikeConfigObject.ikeAuthAlg = value["IkeAuthAlg"].asString();
		if(!value["IkePfs"].isNull())
			ikeConfigObject.ikePfs = value["IkePfs"].asString();
		if(!value["IkeLifetime"].isNull())
			ikeConfigObject.ikeLifetime = std::stol(value["IkeLifetime"].asString());
		if(!value["LocalId"].isNull())
			ikeConfigObject.localId = value["LocalId"].asString();
		if(!value["RemoteId"].isNull())
			ikeConfigObject.remoteId = value["RemoteId"].asString();
		ikeConfig_.push_back(ikeConfigObject);
	}
	auto allIpsecConfig = value["IpsecConfig"];
	for (auto value : allIpsecConfig)
	{
		IpsecConfig ipsecConfigObject;
		if(!value["IpsecEncAlg"].isNull())
			ipsecConfigObject.ipsecEncAlg = value["IpsecEncAlg"].asString();
		if(!value["IpsecAuthAlg"].isNull())
			ipsecConfigObject.ipsecAuthAlg = value["IpsecAuthAlg"].asString();
		if(!value["IpsecPfs"].isNull())
			ipsecConfigObject.ipsecPfs = value["IpsecPfs"].asString();
		if(!value["IpsecLifetime"].isNull())
			ipsecConfigObject.ipsecLifetime = std::stol(value["IpsecLifetime"].asString());
		ipsecConfig_.push_back(ipsecConfigObject);
	}
	if(!value["VpnConnectionId"].isNull())
		vpnConnectionId_ = value["VpnConnectionId"].asString();
	if(!value["CustomerGatewayId"].isNull())
		customerGatewayId_ = value["CustomerGatewayId"].asString();
	if(!value["VpnGatewayId"].isNull())
		vpnGatewayId_ = value["VpnGatewayId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["LocalSubnet"].isNull())
		localSubnet_ = value["LocalSubnet"].asString();
	if(!value["RemoteSubnet"].isNull())
		remoteSubnet_ = value["RemoteSubnet"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["EffectImmediately"].isNull())
		effectImmediately_ = value["EffectImmediately"].asString() == "true";

}

std::string ModifyVpnConnectionAttributeResult::getLocalSubnet()const
{
	return localSubnet_;
}

bool ModifyVpnConnectionAttributeResult::getEffectImmediately()const
{
	return effectImmediately_;
}

std::string ModifyVpnConnectionAttributeResult::getRemoteSubnet()const
{
	return remoteSubnet_;
}

std::string ModifyVpnConnectionAttributeResult::getDescription()const
{
	return description_;
}

std::string ModifyVpnConnectionAttributeResult::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

std::string ModifyVpnConnectionAttributeResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

std::vector<ModifyVpnConnectionAttributeResult::IpsecConfig> ModifyVpnConnectionAttributeResult::getIpsecConfig()const
{
	return ipsecConfig_;
}

long ModifyVpnConnectionAttributeResult::getCreateTime()const
{
	return createTime_;
}

std::string ModifyVpnConnectionAttributeResult::getVpnConnectionId()const
{
	return vpnConnectionId_;
}

std::vector<ModifyVpnConnectionAttributeResult::IkeConfig> ModifyVpnConnectionAttributeResult::getIkeConfig()const
{
	return ikeConfig_;
}

std::string ModifyVpnConnectionAttributeResult::getName()const
{
	return name_;
}

