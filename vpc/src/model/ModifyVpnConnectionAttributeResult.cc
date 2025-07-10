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
	auto allTunnelOptionsSpecificationNode = value["TunnelOptionsSpecification"]["TunnelOptions"];
	for (auto valueTunnelOptionsSpecificationTunnelOptions : allTunnelOptionsSpecificationNode)
	{
		TunnelOptions tunnelOptionsSpecificationObject;
		if(!valueTunnelOptionsSpecificationTunnelOptions["CustomerGatewayId"].isNull())
			tunnelOptionsSpecificationObject.customerGatewayId = valueTunnelOptionsSpecificationTunnelOptions["CustomerGatewayId"].asString();
		if(!valueTunnelOptionsSpecificationTunnelOptions["EnableDpd"].isNull())
			tunnelOptionsSpecificationObject.enableDpd = valueTunnelOptionsSpecificationTunnelOptions["EnableDpd"].asString() == "true";
		if(!valueTunnelOptionsSpecificationTunnelOptions["EnableNatTraversal"].isNull())
			tunnelOptionsSpecificationObject.enableNatTraversal = valueTunnelOptionsSpecificationTunnelOptions["EnableNatTraversal"].asString() == "true";
		if(!valueTunnelOptionsSpecificationTunnelOptions["InternetIp"].isNull())
			tunnelOptionsSpecificationObject.internetIp = valueTunnelOptionsSpecificationTunnelOptions["InternetIp"].asString();
		if(!valueTunnelOptionsSpecificationTunnelOptions["RemoteCaCertificate"].isNull())
			tunnelOptionsSpecificationObject.remoteCaCertificate = valueTunnelOptionsSpecificationTunnelOptions["RemoteCaCertificate"].asString();
		if(!valueTunnelOptionsSpecificationTunnelOptions["Role"].isNull())
			tunnelOptionsSpecificationObject.role = valueTunnelOptionsSpecificationTunnelOptions["Role"].asString();
		if(!valueTunnelOptionsSpecificationTunnelOptions["State"].isNull())
			tunnelOptionsSpecificationObject.state = valueTunnelOptionsSpecificationTunnelOptions["State"].asString();
		if(!valueTunnelOptionsSpecificationTunnelOptions["TunnelId"].isNull())
			tunnelOptionsSpecificationObject.tunnelId = valueTunnelOptionsSpecificationTunnelOptions["TunnelId"].asString();
		if(!valueTunnelOptionsSpecificationTunnelOptions["ZoneNo"].isNull())
			tunnelOptionsSpecificationObject.zoneNo = valueTunnelOptionsSpecificationTunnelOptions["ZoneNo"].asString();
		auto tunnelBgpConfigNode = value["TunnelBgpConfig"];
		if(!tunnelBgpConfigNode["LocalAsn"].isNull())
			tunnelOptionsSpecificationObject.tunnelBgpConfig.localAsn = std::stol(tunnelBgpConfigNode["LocalAsn"].asString());
		if(!tunnelBgpConfigNode["LocalBgpIp"].isNull())
			tunnelOptionsSpecificationObject.tunnelBgpConfig.localBgpIp = tunnelBgpConfigNode["LocalBgpIp"].asString();
		if(!tunnelBgpConfigNode["PeerAsn"].isNull())
			tunnelOptionsSpecificationObject.tunnelBgpConfig.peerAsn = std::stol(tunnelBgpConfigNode["PeerAsn"].asString());
		if(!tunnelBgpConfigNode["PeerBgpIp"].isNull())
			tunnelOptionsSpecificationObject.tunnelBgpConfig.peerBgpIp = tunnelBgpConfigNode["PeerBgpIp"].asString();
		if(!tunnelBgpConfigNode["TunnelCidr"].isNull())
			tunnelOptionsSpecificationObject.tunnelBgpConfig.tunnelCidr = tunnelBgpConfigNode["TunnelCidr"].asString();
		auto tunnelIkeConfigNode = value["TunnelIkeConfig"];
		if(!tunnelIkeConfigNode["IkeAuthAlg"].isNull())
			tunnelOptionsSpecificationObject.tunnelIkeConfig.ikeAuthAlg = tunnelIkeConfigNode["IkeAuthAlg"].asString();
		if(!tunnelIkeConfigNode["IkeEncAlg"].isNull())
			tunnelOptionsSpecificationObject.tunnelIkeConfig.ikeEncAlg = tunnelIkeConfigNode["IkeEncAlg"].asString();
		if(!tunnelIkeConfigNode["IkeLifetime"].isNull())
			tunnelOptionsSpecificationObject.tunnelIkeConfig.ikeLifetime = std::stol(tunnelIkeConfigNode["IkeLifetime"].asString());
		if(!tunnelIkeConfigNode["IkeMode"].isNull())
			tunnelOptionsSpecificationObject.tunnelIkeConfig.ikeMode = tunnelIkeConfigNode["IkeMode"].asString();
		if(!tunnelIkeConfigNode["IkePfs"].isNull())
			tunnelOptionsSpecificationObject.tunnelIkeConfig.ikePfs = tunnelIkeConfigNode["IkePfs"].asString();
		if(!tunnelIkeConfigNode["IkeVersion"].isNull())
			tunnelOptionsSpecificationObject.tunnelIkeConfig.ikeVersion = tunnelIkeConfigNode["IkeVersion"].asString();
		if(!tunnelIkeConfigNode["LocalId"].isNull())
			tunnelOptionsSpecificationObject.tunnelIkeConfig.localId = tunnelIkeConfigNode["LocalId"].asString();
		if(!tunnelIkeConfigNode["Psk"].isNull())
			tunnelOptionsSpecificationObject.tunnelIkeConfig.psk = tunnelIkeConfigNode["Psk"].asString();
		if(!tunnelIkeConfigNode["RemoteId"].isNull())
			tunnelOptionsSpecificationObject.tunnelIkeConfig.remoteId = tunnelIkeConfigNode["RemoteId"].asString();
		auto tunnelIpsecConfigNode = value["TunnelIpsecConfig"];
		if(!tunnelIpsecConfigNode["IpsecAuthAlg"].isNull())
			tunnelOptionsSpecificationObject.tunnelIpsecConfig.ipsecAuthAlg = tunnelIpsecConfigNode["IpsecAuthAlg"].asString();
		if(!tunnelIpsecConfigNode["IpsecEncAlg"].isNull())
			tunnelOptionsSpecificationObject.tunnelIpsecConfig.ipsecEncAlg = tunnelIpsecConfigNode["IpsecEncAlg"].asString();
		if(!tunnelIpsecConfigNode["IpsecLifetime"].isNull())
			tunnelOptionsSpecificationObject.tunnelIpsecConfig.ipsecLifetime = std::stol(tunnelIpsecConfigNode["IpsecLifetime"].asString());
		if(!tunnelIpsecConfigNode["IpsecPfs"].isNull())
			tunnelOptionsSpecificationObject.tunnelIpsecConfig.ipsecPfs = tunnelIpsecConfigNode["IpsecPfs"].asString();
		tunnelOptionsSpecification_.push_back(tunnelOptionsSpecificationObject);
	}
	auto ikeConfigNode = value["IkeConfig"];
	if(!ikeConfigNode["RemoteId"].isNull())
		ikeConfig_.remoteId = ikeConfigNode["RemoteId"].asString();
	if(!ikeConfigNode["IkeLifetime"].isNull())
		ikeConfig_.ikeLifetime = std::stol(ikeConfigNode["IkeLifetime"].asString());
	if(!ikeConfigNode["IkeEncAlg"].isNull())
		ikeConfig_.ikeEncAlg = ikeConfigNode["IkeEncAlg"].asString();
	if(!ikeConfigNode["LocalId"].isNull())
		ikeConfig_.localId = ikeConfigNode["LocalId"].asString();
	if(!ikeConfigNode["IkeMode"].isNull())
		ikeConfig_.ikeMode = ikeConfigNode["IkeMode"].asString();
	if(!ikeConfigNode["IkeVersion"].isNull())
		ikeConfig_.ikeVersion = ikeConfigNode["IkeVersion"].asString();
	if(!ikeConfigNode["IkePfs"].isNull())
		ikeConfig_.ikePfs = ikeConfigNode["IkePfs"].asString();
	if(!ikeConfigNode["Psk"].isNull())
		ikeConfig_.psk = ikeConfigNode["Psk"].asString();
	if(!ikeConfigNode["IkeAuthAlg"].isNull())
		ikeConfig_.ikeAuthAlg = ikeConfigNode["IkeAuthAlg"].asString();
	auto ipsecConfigNode = value["IpsecConfig"];
	if(!ipsecConfigNode["IpsecAuthAlg"].isNull())
		ipsecConfig_.ipsecAuthAlg = ipsecConfigNode["IpsecAuthAlg"].asString();
	if(!ipsecConfigNode["IpsecLifetime"].isNull())
		ipsecConfig_.ipsecLifetime = std::stol(ipsecConfigNode["IpsecLifetime"].asString());
	if(!ipsecConfigNode["IpsecEncAlg"].isNull())
		ipsecConfig_.ipsecEncAlg = ipsecConfigNode["IpsecEncAlg"].asString();
	if(!ipsecConfigNode["IpsecPfs"].isNull())
		ipsecConfig_.ipsecPfs = ipsecConfigNode["IpsecPfs"].asString();
	auto vcoHealthCheckNode = value["VcoHealthCheck"];
	if(!vcoHealthCheckNode["Dip"].isNull())
		vcoHealthCheck_.dip = vcoHealthCheckNode["Dip"].asString();
	if(!vcoHealthCheckNode["Interval"].isNull())
		vcoHealthCheck_.interval = std::stoi(vcoHealthCheckNode["Interval"].asString());
	if(!vcoHealthCheckNode["Retry"].isNull())
		vcoHealthCheck_.retry = std::stoi(vcoHealthCheckNode["Retry"].asString());
	if(!vcoHealthCheckNode["Sip"].isNull())
		vcoHealthCheck_.sip = vcoHealthCheckNode["Sip"].asString();
	if(!vcoHealthCheckNode["Enable"].isNull())
		vcoHealthCheck_.enable = vcoHealthCheckNode["Enable"].asString();
	auto vpnBgpConfigNode = value["VpnBgpConfig"];
	if(!vpnBgpConfigNode["Status"].isNull())
		vpnBgpConfig_.status = vpnBgpConfigNode["Status"].asString();
	if(!vpnBgpConfigNode["PeerBgpIp"].isNull())
		vpnBgpConfig_.peerBgpIp = vpnBgpConfigNode["PeerBgpIp"].asString();
	if(!vpnBgpConfigNode["TunnelCidr"].isNull())
		vpnBgpConfig_.tunnelCidr = vpnBgpConfigNode["TunnelCidr"].asString();
	if(!vpnBgpConfigNode["EnableBgp"].isNull())
		vpnBgpConfig_.enableBgp = vpnBgpConfigNode["EnableBgp"].asString();
	if(!vpnBgpConfigNode["LocalBgpIp"].isNull())
		vpnBgpConfig_.localBgpIp = vpnBgpConfigNode["LocalBgpIp"].asString();
	if(!vpnBgpConfigNode["PeerAsn"].isNull())
		vpnBgpConfig_.peerAsn = std::stoi(vpnBgpConfigNode["PeerAsn"].asString());
	if(!vpnBgpConfigNode["LocalAsn"].isNull())
		vpnBgpConfig_.localAsn = std::stoi(vpnBgpConfigNode["LocalAsn"].asString());
	if(!value["EnableNatTraversal"].isNull())
		enableNatTraversal_ = value["EnableNatTraversal"].asString() == "true";
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["EffectImmediately"].isNull())
		effectImmediately_ = value["EffectImmediately"].asString() == "true";
	if(!value["VpnGatewayId"].isNull())
		vpnGatewayId_ = value["VpnGatewayId"].asString();
	if(!value["LocalSubnet"].isNull())
		localSubnet_ = value["LocalSubnet"].asString();
	if(!value["VpnConnectionId"].isNull())
		vpnConnectionId_ = value["VpnConnectionId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["RemoteSubnet"].isNull())
		remoteSubnet_ = value["RemoteSubnet"].asString();
	if(!value["CustomerGatewayId"].isNull())
		customerGatewayId_ = value["CustomerGatewayId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["EnableDpd"].isNull())
		enableDpd_ = value["EnableDpd"].asString() == "true";
	if(!value["EnableTunnelsBgp"].isNull())
		enableTunnelsBgp_ = value["EnableTunnelsBgp"].asString() == "true";
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string ModifyVpnConnectionAttributeResult::getLocalSubnet()const
{
	return localSubnet_;
}

std::string ModifyVpnConnectionAttributeResult::getDescription()const
{
	return description_;
}

std::string ModifyVpnConnectionAttributeResult::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

std::string ModifyVpnConnectionAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

bool ModifyVpnConnectionAttributeResult::getEnableTunnelsBgp()const
{
	return enableTunnelsBgp_;
}

long ModifyVpnConnectionAttributeResult::getCreateTime()const
{
	return createTime_;
}

std::string ModifyVpnConnectionAttributeResult::getName()const
{
	return name_;
}

bool ModifyVpnConnectionAttributeResult::getEffectImmediately()const
{
	return effectImmediately_;
}

std::vector<ModifyVpnConnectionAttributeResult::TunnelOptions> ModifyVpnConnectionAttributeResult::getTunnelOptionsSpecification()const
{
	return tunnelOptionsSpecification_;
}

ModifyVpnConnectionAttributeResult::VcoHealthCheck ModifyVpnConnectionAttributeResult::getVcoHealthCheck()const
{
	return vcoHealthCheck_;
}

std::string ModifyVpnConnectionAttributeResult::getRemoteSubnet()const
{
	return remoteSubnet_;
}

std::string ModifyVpnConnectionAttributeResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

ModifyVpnConnectionAttributeResult::IpsecConfig ModifyVpnConnectionAttributeResult::getIpsecConfig()const
{
	return ipsecConfig_;
}

std::string ModifyVpnConnectionAttributeResult::getVpnConnectionId()const
{
	return vpnConnectionId_;
}

bool ModifyVpnConnectionAttributeResult::getEnableNatTraversal()const
{
	return enableNatTraversal_;
}

ModifyVpnConnectionAttributeResult::IkeConfig ModifyVpnConnectionAttributeResult::getIkeConfig()const
{
	return ikeConfig_;
}

bool ModifyVpnConnectionAttributeResult::getEnableDpd()const
{
	return enableDpd_;
}

ModifyVpnConnectionAttributeResult::VpnBgpConfig ModifyVpnConnectionAttributeResult::getVpnBgpConfig()const
{
	return vpnBgpConfig_;
}

