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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto ikeConfigNode = value["IkeConfig"];
	if(!ikeConfigNode["Psk"].isNull())
		ikeConfig_.psk = ikeConfigNode["Psk"].asString();
	if(!ikeConfigNode["IkeVersion"].isNull())
		ikeConfig_.ikeVersion = ikeConfigNode["IkeVersion"].asString();
	if(!ikeConfigNode["IkeMode"].isNull())
		ikeConfig_.ikeMode = ikeConfigNode["IkeMode"].asString();
	if(!ikeConfigNode["IkeEncAlg"].isNull())
		ikeConfig_.ikeEncAlg = ikeConfigNode["IkeEncAlg"].asString();
	if(!ikeConfigNode["IkeAuthAlg"].isNull())
		ikeConfig_.ikeAuthAlg = ikeConfigNode["IkeAuthAlg"].asString();
	if(!ikeConfigNode["IkePfs"].isNull())
		ikeConfig_.ikePfs = ikeConfigNode["IkePfs"].asString();
	if(!ikeConfigNode["IkeLifetime"].isNull())
		ikeConfig_.ikeLifetime = std::stol(ikeConfigNode["IkeLifetime"].asString());
	if(!ikeConfigNode["LocalId"].isNull())
		ikeConfig_.localId = ikeConfigNode["LocalId"].asString();
	if(!ikeConfigNode["RemoteId"].isNull())
		ikeConfig_.remoteId = ikeConfigNode["RemoteId"].asString();
	auto ipsecConfigNode = value["IpsecConfig"];
	if(!ipsecConfigNode["IpsecEncAlg"].isNull())
		ipsecConfig_.ipsecEncAlg = ipsecConfigNode["IpsecEncAlg"].asString();
	if(!ipsecConfigNode["IpsecAuthAlg"].isNull())
		ipsecConfig_.ipsecAuthAlg = ipsecConfigNode["IpsecAuthAlg"].asString();
	if(!ipsecConfigNode["IpsecPfs"].isNull())
		ipsecConfig_.ipsecPfs = ipsecConfigNode["IpsecPfs"].asString();
	if(!ipsecConfigNode["IpsecLifetime"].isNull())
		ipsecConfig_.ipsecLifetime = std::stol(ipsecConfigNode["IpsecLifetime"].asString());
	auto vcoHealthCheckNode = value["VcoHealthCheck"];
	if(!vcoHealthCheckNode["Enable"].isNull())
		vcoHealthCheck_.enable = vcoHealthCheckNode["Enable"].asString();
	if(!vcoHealthCheckNode["Sip"].isNull())
		vcoHealthCheck_.sip = vcoHealthCheckNode["Sip"].asString();
	if(!vcoHealthCheckNode["Dip"].isNull())
		vcoHealthCheck_.dip = vcoHealthCheckNode["Dip"].asString();
	if(!vcoHealthCheckNode["Interval"].isNull())
		vcoHealthCheck_.interval = std::stoi(vcoHealthCheckNode["Interval"].asString());
	if(!vcoHealthCheckNode["Retry"].isNull())
		vcoHealthCheck_.retry = std::stoi(vcoHealthCheckNode["Retry"].asString());
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

ModifyVpnConnectionAttributeResult::VcoHealthCheck ModifyVpnConnectionAttributeResult::getVcoHealthCheck()const
{
	return vcoHealthCheck_;
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

ModifyVpnConnectionAttributeResult::IpsecConfig ModifyVpnConnectionAttributeResult::getIpsecConfig()const
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

ModifyVpnConnectionAttributeResult::IkeConfig ModifyVpnConnectionAttributeResult::getIkeConfig()const
{
	return ikeConfig_;
}

std::string ModifyVpnConnectionAttributeResult::getName()const
{
	return name_;
}

