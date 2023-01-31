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

#include <alibabacloud/vpc/model/DescribeVpnConnectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVpnConnectionResult::DescribeVpnConnectionResult() :
	ServiceResult()
{}

DescribeVpnConnectionResult::DescribeVpnConnectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpnConnectionResult::~DescribeVpnConnectionResult()
{}

void DescribeVpnConnectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		tags_.push_back(tagsObject);
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
	if(!vcoHealthCheckNode["Status"].isNull())
		vcoHealthCheck_.status = vcoHealthCheckNode["Status"].asString();
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
	if(!vcoHealthCheckNode["Policy"].isNull())
		vcoHealthCheck_.policy = vcoHealthCheckNode["Policy"].asString();
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
		vpnBgpConfig_.peerAsn = std::stol(vpnBgpConfigNode["PeerAsn"].asString());
	if(!vpnBgpConfigNode["LocalAsn"].isNull())
		vpnBgpConfig_.localAsn = std::stol(vpnBgpConfigNode["LocalAsn"].asString());
	if(!vpnBgpConfigNode["AuthKey"].isNull())
		vpnBgpConfig_.authKey = vpnBgpConfigNode["AuthKey"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["RemoteCaCertificate"].isNull())
		remoteCaCertificate_ = value["RemoteCaCertificate"].asString();
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
	if(!value["RemoteSubnet"].isNull())
		remoteSubnet_ = value["RemoteSubnet"].asString();
	if(!value["CustomerGatewayId"].isNull())
		customerGatewayId_ = value["CustomerGatewayId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["EnableDpd"].isNull())
		enableDpd_ = value["EnableDpd"].asString() == "true";
	if(!value["AttachType"].isNull())
		attachType_ = value["AttachType"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["AttachInstanceId"].isNull())
		attachInstanceId_ = value["AttachInstanceId"].asString();
	if(!value["Spec"].isNull())
		spec_ = value["Spec"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["ZoneNo"].isNull())
		zoneNo_ = value["ZoneNo"].asString();
	if(!value["InternetIp"].isNull())
		internetIp_ = value["InternetIp"].asString();
	if(!value["TransitRouterId"].isNull())
		transitRouterId_ = value["TransitRouterId"].asString();
	if(!value["TransitRouterName"].isNull())
		transitRouterName_ = value["TransitRouterName"].asString();
	if(!value["CrossAccountAuthorized"].isNull())
		crossAccountAuthorized_ = value["CrossAccountAuthorized"].asString() == "true";

}

std::string DescribeVpnConnectionResult::getAttachType()const
{
	return attachType_;
}

bool DescribeVpnConnectionResult::getCrossAccountAuthorized()const
{
	return crossAccountAuthorized_;
}

std::string DescribeVpnConnectionResult::getZoneNo()const
{
	return zoneNo_;
}

std::string DescribeVpnConnectionResult::getName()const
{
	return name_;
}

bool DescribeVpnConnectionResult::getEffectImmediately()const
{
	return effectImmediately_;
}

std::string DescribeVpnConnectionResult::getRemoteSubnet()const
{
	return remoteSubnet_;
}

std::string DescribeVpnConnectionResult::getInternetIp()const
{
	return internetIp_;
}

DescribeVpnConnectionResult::IpsecConfig DescribeVpnConnectionResult::getIpsecConfig()const
{
	return ipsecConfig_;
}

std::string DescribeVpnConnectionResult::getNetworkType()const
{
	return networkType_;
}

std::string DescribeVpnConnectionResult::getRemoteCaCertificate()const
{
	return remoteCaCertificate_;
}

bool DescribeVpnConnectionResult::getEnableNatTraversal()const
{
	return enableNatTraversal_;
}

std::vector<DescribeVpnConnectionResult::Tag> DescribeVpnConnectionResult::getTags()const
{
	return tags_;
}

DescribeVpnConnectionResult::IkeConfig DescribeVpnConnectionResult::getIkeConfig()const
{
	return ikeConfig_;
}

std::string DescribeVpnConnectionResult::getAttachInstanceId()const
{
	return attachInstanceId_;
}

DescribeVpnConnectionResult::VpnBgpConfig DescribeVpnConnectionResult::getVpnBgpConfig()const
{
	return vpnBgpConfig_;
}

std::string DescribeVpnConnectionResult::getTransitRouterId()const
{
	return transitRouterId_;
}

std::string DescribeVpnConnectionResult::getStatus()const
{
	return status_;
}

std::string DescribeVpnConnectionResult::getLocalSubnet()const
{
	return localSubnet_;
}

std::string DescribeVpnConnectionResult::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

long DescribeVpnConnectionResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeVpnConnectionResult::getTransitRouterName()const
{
	return transitRouterName_;
}

DescribeVpnConnectionResult::VcoHealthCheck DescribeVpnConnectionResult::getVcoHealthCheck()const
{
	return vcoHealthCheck_;
}

std::string DescribeVpnConnectionResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

std::string DescribeVpnConnectionResult::getState()const
{
	return state_;
}

std::string DescribeVpnConnectionResult::getVpnConnectionId()const
{
	return vpnConnectionId_;
}

std::string DescribeVpnConnectionResult::getSpec()const
{
	return spec_;
}

bool DescribeVpnConnectionResult::getEnableDpd()const
{
	return enableDpd_;
}

