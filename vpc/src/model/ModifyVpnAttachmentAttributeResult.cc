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

#include <alibabacloud/vpc/model/ModifyVpnAttachmentAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifyVpnAttachmentAttributeResult::ModifyVpnAttachmentAttributeResult() :
	ServiceResult()
{}

ModifyVpnAttachmentAttributeResult::ModifyVpnAttachmentAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyVpnAttachmentAttributeResult::~ModifyVpnAttachmentAttributeResult()
{}

void ModifyVpnAttachmentAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
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
	if(!vcoHealthCheckNode["Policy"].isNull())
		vcoHealthCheck_.policy = vcoHealthCheckNode["Policy"].asString();
	auto vpnBgpConfigNode = value["VpnBgpConfig"];
	if(!vpnBgpConfigNode["EnableBgp"].isNull())
		vpnBgpConfig_.enableBgp = vpnBgpConfigNode["EnableBgp"].asString();
	if(!vpnBgpConfigNode["TunnelCidr"].isNull())
		vpnBgpConfig_.tunnelCidr = vpnBgpConfigNode["TunnelCidr"].asString();
	if(!vpnBgpConfigNode["LocalBgpIp"].isNull())
		vpnBgpConfig_.localBgpIp = vpnBgpConfigNode["LocalBgpIp"].asString();
	if(!vpnBgpConfigNode["PeerBgpIp"].isNull())
		vpnBgpConfig_.peerBgpIp = vpnBgpConfigNode["PeerBgpIp"].asString();
	if(!vpnBgpConfigNode["LocalAsn"].isNull())
		vpnBgpConfig_.localAsn = std::stol(vpnBgpConfigNode["LocalAsn"].asString());
	if(!vpnBgpConfigNode["PeerAsn"].isNull())
		vpnBgpConfig_.peerAsn = std::stol(vpnBgpConfigNode["PeerAsn"].asString());
	if(!vpnBgpConfigNode["Status"].isNull())
		vpnBgpConfig_.status = vpnBgpConfigNode["Status"].asString();
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
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["EnableDpd"].isNull())
		enableDpd_ = value["EnableDpd"].asString() == "true";
	if(!value["EnableNatTraversal"].isNull())
		enableNatTraversal_ = value["EnableNatTraversal"].asString() == "true";
	if(!value["AttachType"].isNull())
		attachType_ = value["AttachType"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["AttachInstanceId"].isNull())
		attachInstanceId_ = value["AttachInstanceId"].asString();
	if(!value["Spec"].isNull())
		spec_ = value["Spec"].asString();

}

std::string ModifyVpnAttachmentAttributeResult::getLocalSubnet()const
{
	return localSubnet_;
}

std::string ModifyVpnAttachmentAttributeResult::getStatus()const
{
	return status_;
}

std::string ModifyVpnAttachmentAttributeResult::getAttachType()const
{
	return attachType_;
}

std::string ModifyVpnAttachmentAttributeResult::getDescription()const
{
	return description_;
}

std::string ModifyVpnAttachmentAttributeResult::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

long ModifyVpnAttachmentAttributeResult::getCreateTime()const
{
	return createTime_;
}

std::string ModifyVpnAttachmentAttributeResult::getName()const
{
	return name_;
}

bool ModifyVpnAttachmentAttributeResult::getEffectImmediately()const
{
	return effectImmediately_;
}

ModifyVpnAttachmentAttributeResult::VcoHealthCheck ModifyVpnAttachmentAttributeResult::getVcoHealthCheck()const
{
	return vcoHealthCheck_;
}

std::string ModifyVpnAttachmentAttributeResult::getRemoteSubnet()const
{
	return remoteSubnet_;
}

std::string ModifyVpnAttachmentAttributeResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

ModifyVpnAttachmentAttributeResult::IpsecConfig ModifyVpnAttachmentAttributeResult::getIpsecConfig()const
{
	return ipsecConfig_;
}

std::string ModifyVpnAttachmentAttributeResult::getNetworkType()const
{
	return networkType_;
}

std::string ModifyVpnAttachmentAttributeResult::getVpnConnectionId()const
{
	return vpnConnectionId_;
}

bool ModifyVpnAttachmentAttributeResult::getEnableNatTraversal()const
{
	return enableNatTraversal_;
}

std::string ModifyVpnAttachmentAttributeResult::getSpec()const
{
	return spec_;
}

ModifyVpnAttachmentAttributeResult::IkeConfig ModifyVpnAttachmentAttributeResult::getIkeConfig()const
{
	return ikeConfig_;
}

bool ModifyVpnAttachmentAttributeResult::getEnableDpd()const
{
	return enableDpd_;
}

std::string ModifyVpnAttachmentAttributeResult::getAttachInstanceId()const
{
	return attachInstanceId_;
}

ModifyVpnAttachmentAttributeResult::VpnBgpConfig ModifyVpnAttachmentAttributeResult::getVpnBgpConfig()const
{
	return vpnBgpConfig_;
}

