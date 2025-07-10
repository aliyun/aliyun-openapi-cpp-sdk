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

#include <alibabacloud/vpc/model/DescribeVpnConnectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVpnConnectionsResult::DescribeVpnConnectionsResult() :
	ServiceResult()
{}

DescribeVpnConnectionsResult::DescribeVpnConnectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpnConnectionsResult::~DescribeVpnConnectionsResult()
{}

void DescribeVpnConnectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpnConnectionsNode = value["VpnConnections"]["VpnConnection"];
	for (auto valueVpnConnectionsVpnConnection : allVpnConnectionsNode)
	{
		VpnConnection vpnConnectionsObject;
		if(!valueVpnConnectionsVpnConnection["Status"].isNull())
			vpnConnectionsObject.status = valueVpnConnectionsVpnConnection["Status"].asString();
		if(!valueVpnConnectionsVpnConnection["EnableNatTraversal"].isNull())
			vpnConnectionsObject.enableNatTraversal = valueVpnConnectionsVpnConnection["EnableNatTraversal"].asString() == "true";
		if(!valueVpnConnectionsVpnConnection["RemoteCaCertificate"].isNull())
			vpnConnectionsObject.remoteCaCertificate = valueVpnConnectionsVpnConnection["RemoteCaCertificate"].asString();
		if(!valueVpnConnectionsVpnConnection["CreateTime"].isNull())
			vpnConnectionsObject.createTime = std::stol(valueVpnConnectionsVpnConnection["CreateTime"].asString());
		if(!valueVpnConnectionsVpnConnection["EffectImmediately"].isNull())
			vpnConnectionsObject.effectImmediately = valueVpnConnectionsVpnConnection["EffectImmediately"].asString() == "true";
		if(!valueVpnConnectionsVpnConnection["VpnGatewayId"].isNull())
			vpnConnectionsObject.vpnGatewayId = valueVpnConnectionsVpnConnection["VpnGatewayId"].asString();
		if(!valueVpnConnectionsVpnConnection["LocalSubnet"].isNull())
			vpnConnectionsObject.localSubnet = valueVpnConnectionsVpnConnection["LocalSubnet"].asString();
		if(!valueVpnConnectionsVpnConnection["VpnConnectionId"].isNull())
			vpnConnectionsObject.vpnConnectionId = valueVpnConnectionsVpnConnection["VpnConnectionId"].asString();
		if(!valueVpnConnectionsVpnConnection["RemoteSubnet"].isNull())
			vpnConnectionsObject.remoteSubnet = valueVpnConnectionsVpnConnection["RemoteSubnet"].asString();
		if(!valueVpnConnectionsVpnConnection["CustomerGatewayId"].isNull())
			vpnConnectionsObject.customerGatewayId = valueVpnConnectionsVpnConnection["CustomerGatewayId"].asString();
		if(!valueVpnConnectionsVpnConnection["Name"].isNull())
			vpnConnectionsObject.name = valueVpnConnectionsVpnConnection["Name"].asString();
		if(!valueVpnConnectionsVpnConnection["EnableDpd"].isNull())
			vpnConnectionsObject.enableDpd = valueVpnConnectionsVpnConnection["EnableDpd"].asString() == "true";
		if(!valueVpnConnectionsVpnConnection["AttachType"].isNull())
			vpnConnectionsObject.attachType = valueVpnConnectionsVpnConnection["AttachType"].asString();
		if(!valueVpnConnectionsVpnConnection["NetworkType"].isNull())
			vpnConnectionsObject.networkType = valueVpnConnectionsVpnConnection["NetworkType"].asString();
		if(!valueVpnConnectionsVpnConnection["AttachInstanceId"].isNull())
			vpnConnectionsObject.attachInstanceId = valueVpnConnectionsVpnConnection["AttachInstanceId"].asString();
		if(!valueVpnConnectionsVpnConnection["Spec"].isNull())
			vpnConnectionsObject.spec = valueVpnConnectionsVpnConnection["Spec"].asString();
		if(!valueVpnConnectionsVpnConnection["State"].isNull())
			vpnConnectionsObject.state = valueVpnConnectionsVpnConnection["State"].asString();
		if(!valueVpnConnectionsVpnConnection["TransitRouterId"].isNull())
			vpnConnectionsObject.transitRouterId = valueVpnConnectionsVpnConnection["TransitRouterId"].asString();
		if(!valueVpnConnectionsVpnConnection["TransitRouterName"].isNull())
			vpnConnectionsObject.transitRouterName = valueVpnConnectionsVpnConnection["TransitRouterName"].asString();
		if(!valueVpnConnectionsVpnConnection["CrossAccountAuthorized"].isNull())
			vpnConnectionsObject.crossAccountAuthorized = valueVpnConnectionsVpnConnection["CrossAccountAuthorized"].asString() == "true";
		if(!valueVpnConnectionsVpnConnection["InternetIp"].isNull())
			vpnConnectionsObject.internetIp = valueVpnConnectionsVpnConnection["InternetIp"].asString();
		if(!valueVpnConnectionsVpnConnection["EnableTunnelsBgp"].isNull())
			vpnConnectionsObject.enableTunnelsBgp = valueVpnConnectionsVpnConnection["EnableTunnelsBgp"].asString() == "true";
		if(!valueVpnConnectionsVpnConnection["ResourceGroupId"].isNull())
			vpnConnectionsObject.resourceGroupId = valueVpnConnectionsVpnConnection["ResourceGroupId"].asString();
		auto allTagNode = valueVpnConnectionsVpnConnection["Tag"]["TagItem"];
		for (auto valueVpnConnectionsVpnConnectionTagTagItem : allTagNode)
		{
			VpnConnection::TagItem tagObject;
			if(!valueVpnConnectionsVpnConnectionTagTagItem["Key"].isNull())
				tagObject.key = valueVpnConnectionsVpnConnectionTagTagItem["Key"].asString();
			if(!valueVpnConnectionsVpnConnectionTagTagItem["Value"].isNull())
				tagObject.value = valueVpnConnectionsVpnConnectionTagTagItem["Value"].asString();
			vpnConnectionsObject.tag.push_back(tagObject);
		}
		auto allTunnelOptionsSpecificationNode = valueVpnConnectionsVpnConnection["TunnelOptionsSpecification"]["TunnelOptions"];
		for (auto valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions : allTunnelOptionsSpecificationNode)
		{
			VpnConnection::TunnelOptions tunnelOptionsSpecificationObject;
			if(!valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["TunnelId"].isNull())
				tunnelOptionsSpecificationObject.tunnelId = valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["TunnelId"].asString();
			if(!valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["CustomerGatewayId"].isNull())
				tunnelOptionsSpecificationObject.customerGatewayId = valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["CustomerGatewayId"].asString();
			if(!valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["EnableDpd"].isNull())
				tunnelOptionsSpecificationObject.enableDpd = valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["EnableDpd"].asString();
			if(!valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["EnableNatTraversal"].isNull())
				tunnelOptionsSpecificationObject.enableNatTraversal = valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["EnableNatTraversal"].asString();
			if(!valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["InternetIp"].isNull())
				tunnelOptionsSpecificationObject.internetIp = valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["InternetIp"].asString();
			if(!valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["RemoteCaCertificate"].isNull())
				tunnelOptionsSpecificationObject.remoteCaCertificate = valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["RemoteCaCertificate"].asString();
			if(!valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["Role"].isNull())
				tunnelOptionsSpecificationObject.role = valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["Role"].asString();
			if(!valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["TunnelIndex"].isNull())
				tunnelOptionsSpecificationObject.tunnelIndex = std::stoi(valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["TunnelIndex"].asString());
			if(!valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["State"].isNull())
				tunnelOptionsSpecificationObject.state = valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["State"].asString();
			if(!valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["Status"].isNull())
				tunnelOptionsSpecificationObject.status = valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["Status"].asString();
			if(!valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["ZoneNo"].isNull())
				tunnelOptionsSpecificationObject.zoneNo = valueVpnConnectionsVpnConnectionTunnelOptionsSpecificationTunnelOptions["ZoneNo"].asString();
			auto tunnelBgpConfigNode = value["TunnelBgpConfig"];
			if(!tunnelBgpConfigNode["BgpStatus"].isNull())
				tunnelOptionsSpecificationObject.tunnelBgpConfig.bgpStatus = tunnelBgpConfigNode["BgpStatus"].asString();
			if(!tunnelBgpConfigNode["LocalAsn"].isNull())
				tunnelOptionsSpecificationObject.tunnelBgpConfig.localAsn = tunnelBgpConfigNode["LocalAsn"].asString();
			if(!tunnelBgpConfigNode["LocalBgpIp"].isNull())
				tunnelOptionsSpecificationObject.tunnelBgpConfig.localBgpIp = tunnelBgpConfigNode["LocalBgpIp"].asString();
			if(!tunnelBgpConfigNode["PeerAsn"].isNull())
				tunnelOptionsSpecificationObject.tunnelBgpConfig.peerAsn = tunnelBgpConfigNode["PeerAsn"].asString();
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
				tunnelOptionsSpecificationObject.tunnelIkeConfig.ikeLifetime = tunnelIkeConfigNode["IkeLifetime"].asString();
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
				tunnelOptionsSpecificationObject.tunnelIpsecConfig.ipsecLifetime = tunnelIpsecConfigNode["IpsecLifetime"].asString();
			if(!tunnelIpsecConfigNode["IpsecPfs"].isNull())
				tunnelOptionsSpecificationObject.tunnelIpsecConfig.ipsecPfs = tunnelIpsecConfigNode["IpsecPfs"].asString();
			vpnConnectionsObject.tunnelOptionsSpecification.push_back(tunnelOptionsSpecificationObject);
		}
		auto ikeConfigNode = value["IkeConfig"];
		if(!ikeConfigNode["RemoteId"].isNull())
			vpnConnectionsObject.ikeConfig.remoteId = ikeConfigNode["RemoteId"].asString();
		if(!ikeConfigNode["IkeLifetime"].isNull())
			vpnConnectionsObject.ikeConfig.ikeLifetime = std::stol(ikeConfigNode["IkeLifetime"].asString());
		if(!ikeConfigNode["IkeEncAlg"].isNull())
			vpnConnectionsObject.ikeConfig.ikeEncAlg = ikeConfigNode["IkeEncAlg"].asString();
		if(!ikeConfigNode["LocalId"].isNull())
			vpnConnectionsObject.ikeConfig.localId = ikeConfigNode["LocalId"].asString();
		if(!ikeConfigNode["IkeMode"].isNull())
			vpnConnectionsObject.ikeConfig.ikeMode = ikeConfigNode["IkeMode"].asString();
		if(!ikeConfigNode["IkeVersion"].isNull())
			vpnConnectionsObject.ikeConfig.ikeVersion = ikeConfigNode["IkeVersion"].asString();
		if(!ikeConfigNode["IkePfs"].isNull())
			vpnConnectionsObject.ikeConfig.ikePfs = ikeConfigNode["IkePfs"].asString();
		if(!ikeConfigNode["Psk"].isNull())
			vpnConnectionsObject.ikeConfig.psk = ikeConfigNode["Psk"].asString();
		if(!ikeConfigNode["IkeAuthAlg"].isNull())
			vpnConnectionsObject.ikeConfig.ikeAuthAlg = ikeConfigNode["IkeAuthAlg"].asString();
		auto ipsecConfigNode = value["IpsecConfig"];
		if(!ipsecConfigNode["IpsecAuthAlg"].isNull())
			vpnConnectionsObject.ipsecConfig.ipsecAuthAlg = ipsecConfigNode["IpsecAuthAlg"].asString();
		if(!ipsecConfigNode["IpsecLifetime"].isNull())
			vpnConnectionsObject.ipsecConfig.ipsecLifetime = std::stol(ipsecConfigNode["IpsecLifetime"].asString());
		if(!ipsecConfigNode["IpsecEncAlg"].isNull())
			vpnConnectionsObject.ipsecConfig.ipsecEncAlg = ipsecConfigNode["IpsecEncAlg"].asString();
		if(!ipsecConfigNode["IpsecPfs"].isNull())
			vpnConnectionsObject.ipsecConfig.ipsecPfs = ipsecConfigNode["IpsecPfs"].asString();
		auto vcoHealthCheckNode = value["VcoHealthCheck"];
		if(!vcoHealthCheckNode["Status"].isNull())
			vpnConnectionsObject.vcoHealthCheck.status = vcoHealthCheckNode["Status"].asString();
		if(!vcoHealthCheckNode["Dip"].isNull())
			vpnConnectionsObject.vcoHealthCheck.dip = vcoHealthCheckNode["Dip"].asString();
		if(!vcoHealthCheckNode["Interval"].isNull())
			vpnConnectionsObject.vcoHealthCheck.interval = std::stoi(vcoHealthCheckNode["Interval"].asString());
		if(!vcoHealthCheckNode["Retry"].isNull())
			vpnConnectionsObject.vcoHealthCheck.retry = std::stoi(vcoHealthCheckNode["Retry"].asString());
		if(!vcoHealthCheckNode["Sip"].isNull())
			vpnConnectionsObject.vcoHealthCheck.sip = vcoHealthCheckNode["Sip"].asString();
		if(!vcoHealthCheckNode["Enable"].isNull())
			vpnConnectionsObject.vcoHealthCheck.enable = vcoHealthCheckNode["Enable"].asString();
		if(!vcoHealthCheckNode["Policy"].isNull())
			vpnConnectionsObject.vcoHealthCheck.policy = vcoHealthCheckNode["Policy"].asString();
		auto vpnBgpConfigNode = value["VpnBgpConfig"];
		if(!vpnBgpConfigNode["Status"].isNull())
			vpnConnectionsObject.vpnBgpConfig.status = vpnBgpConfigNode["Status"].asString();
		if(!vpnBgpConfigNode["PeerBgpIp"].isNull())
			vpnConnectionsObject.vpnBgpConfig.peerBgpIp = vpnBgpConfigNode["PeerBgpIp"].asString();
		if(!vpnBgpConfigNode["TunnelCidr"].isNull())
			vpnConnectionsObject.vpnBgpConfig.tunnelCidr = vpnBgpConfigNode["TunnelCidr"].asString();
		if(!vpnBgpConfigNode["LocalBgpIp"].isNull())
			vpnConnectionsObject.vpnBgpConfig.localBgpIp = vpnBgpConfigNode["LocalBgpIp"].asString();
		if(!vpnBgpConfigNode["PeerAsn"].isNull())
			vpnConnectionsObject.vpnBgpConfig.peerAsn = std::stol(vpnBgpConfigNode["PeerAsn"].asString());
		if(!vpnBgpConfigNode["LocalAsn"].isNull())
			vpnConnectionsObject.vpnBgpConfig.localAsn = std::stol(vpnBgpConfigNode["LocalAsn"].asString());
		if(!vpnBgpConfigNode["AuthKey"].isNull())
			vpnConnectionsObject.vpnBgpConfig.authKey = vpnBgpConfigNode["AuthKey"].asString();
		vpnConnections_.push_back(vpnConnectionsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVpnConnectionsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVpnConnectionsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVpnConnectionsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeVpnConnectionsResult::VpnConnection> DescribeVpnConnectionsResult::getVpnConnections()const
{
	return vpnConnections_;
}

