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

#include <alibabacloud/vpc/model/ModifyTunnelAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifyTunnelAttributeResult::ModifyTunnelAttributeResult() :
	ServiceResult()
{}

ModifyTunnelAttributeResult::ModifyTunnelAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyTunnelAttributeResult::~ModifyTunnelAttributeResult()
{}

void ModifyTunnelAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tunnelIkeConfigNode = value["TunnelIkeConfig"];
	if(!tunnelIkeConfigNode["IkeAuthAlg"].isNull())
		tunnelIkeConfig_.ikeAuthAlg = tunnelIkeConfigNode["IkeAuthAlg"].asString();
	if(!tunnelIkeConfigNode["IkeEncAlg"].isNull())
		tunnelIkeConfig_.ikeEncAlg = tunnelIkeConfigNode["IkeEncAlg"].asString();
	if(!tunnelIkeConfigNode["IkeLifetime"].isNull())
		tunnelIkeConfig_.ikeLifetime = std::stol(tunnelIkeConfigNode["IkeLifetime"].asString());
	if(!tunnelIkeConfigNode["IkeMode"].isNull())
		tunnelIkeConfig_.ikeMode = tunnelIkeConfigNode["IkeMode"].asString();
	if(!tunnelIkeConfigNode["IkePfs"].isNull())
		tunnelIkeConfig_.ikePfs = tunnelIkeConfigNode["IkePfs"].asString();
	if(!tunnelIkeConfigNode["IkeVersion"].isNull())
		tunnelIkeConfig_.ikeVersion = tunnelIkeConfigNode["IkeVersion"].asString();
	if(!tunnelIkeConfigNode["LocalId"].isNull())
		tunnelIkeConfig_.localId = tunnelIkeConfigNode["LocalId"].asString();
	if(!tunnelIkeConfigNode["Psk"].isNull())
		tunnelIkeConfig_.psk = tunnelIkeConfigNode["Psk"].asString();
	if(!tunnelIkeConfigNode["RemoteId"].isNull())
		tunnelIkeConfig_.remoteId = tunnelIkeConfigNode["RemoteId"].asString();
	auto tunnelIpsecConfigNode = value["TunnelIpsecConfig"];
	if(!tunnelIpsecConfigNode["IpsecAuthAlg"].isNull())
		tunnelIpsecConfig_.ipsecAuthAlg = tunnelIpsecConfigNode["IpsecAuthAlg"].asString();
	if(!tunnelIpsecConfigNode["IpsecEncAlg"].isNull())
		tunnelIpsecConfig_.ipsecEncAlg = tunnelIpsecConfigNode["IpsecEncAlg"].asString();
	if(!tunnelIpsecConfigNode["IpsecLifetime"].isNull())
		tunnelIpsecConfig_.ipsecLifetime = std::stol(tunnelIpsecConfigNode["IpsecLifetime"].asString());
	if(!tunnelIpsecConfigNode["IpsecPfs"].isNull())
		tunnelIpsecConfig_.ipsecPfs = tunnelIpsecConfigNode["IpsecPfs"].asString();
	auto tunnelBgpConfigNode = value["TunnelBgpConfig"];
	if(!tunnelBgpConfigNode["EnableBgp"].isNull())
		tunnelBgpConfig_.enableBgp = tunnelBgpConfigNode["EnableBgp"].asString() == "true";
	if(!tunnelBgpConfigNode["LocalAsn"].isNull())
		tunnelBgpConfig_.localAsn = std::stol(tunnelBgpConfigNode["LocalAsn"].asString());
	if(!tunnelBgpConfigNode["LocalBgpIp"].isNull())
		tunnelBgpConfig_.localBgpIp = tunnelBgpConfigNode["LocalBgpIp"].asString();
	if(!tunnelBgpConfigNode["PeerAsn"].isNull())
		tunnelBgpConfig_.peerAsn = std::stol(tunnelBgpConfigNode["PeerAsn"].asString());
	if(!tunnelBgpConfigNode["PeerBgpIp"].isNull())
		tunnelBgpConfig_.peerBgpIp = tunnelBgpConfigNode["PeerBgpIp"].asString();
	if(!tunnelBgpConfigNode["TunnelCidr"].isNull())
		tunnelBgpConfig_.tunnelCidr = tunnelBgpConfigNode["TunnelCidr"].asString();
	if(!value["TunnelId"].isNull())
		tunnelId_ = value["TunnelId"].asString();
	if(!value["EnableNatTraversal"].isNull())
		enableNatTraversal_ = value["EnableNatTraversal"].asString() == "true";
	if(!value["EnableDpd"].isNull())
		enableDpd_ = value["EnableDpd"].asString() == "true";
	if(!value["RemoteCaCertificate"].isNull())
		remoteCaCertificate_ = value["RemoteCaCertificate"].asString();
	if(!value["CustomerGatewayId"].isNull())
		customerGatewayId_ = value["CustomerGatewayId"].asString();
	if(!value["Role"].isNull())
		role_ = value["Role"].asString();
	if(!value["ZoneNo"].isNull())
		zoneNo_ = value["ZoneNo"].asString();
	if(!value["InternetIp"].isNull())
		internetIp_ = value["InternetIp"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();

}

std::string ModifyTunnelAttributeResult::getRole()const
{
	return role_;
}

ModifyTunnelAttributeResult::TunnelIkeConfig ModifyTunnelAttributeResult::getTunnelIkeConfig()const
{
	return tunnelIkeConfig_;
}

std::string ModifyTunnelAttributeResult::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

std::string ModifyTunnelAttributeResult::getInternetIp()const
{
	return internetIp_;
}

ModifyTunnelAttributeResult::TunnelBgpConfig ModifyTunnelAttributeResult::getTunnelBgpConfig()const
{
	return tunnelBgpConfig_;
}

std::string ModifyTunnelAttributeResult::getState()const
{
	return state_;
}

std::string ModifyTunnelAttributeResult::getRemoteCaCertificate()const
{
	return remoteCaCertificate_;
}

bool ModifyTunnelAttributeResult::getEnableNatTraversal()const
{
	return enableNatTraversal_;
}

ModifyTunnelAttributeResult::TunnelIpsecConfig ModifyTunnelAttributeResult::getTunnelIpsecConfig()const
{
	return tunnelIpsecConfig_;
}

std::string ModifyTunnelAttributeResult::getTunnelId()const
{
	return tunnelId_;
}

bool ModifyTunnelAttributeResult::getEnableDpd()const
{
	return enableDpd_;
}

std::string ModifyTunnelAttributeResult::getZoneNo()const
{
	return zoneNo_;
}

