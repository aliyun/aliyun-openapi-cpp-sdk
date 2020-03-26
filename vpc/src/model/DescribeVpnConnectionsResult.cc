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
		if(!valueVpnConnectionsVpnConnection["VpnConnectionId"].isNull())
			vpnConnectionsObject.vpnConnectionId = valueVpnConnectionsVpnConnection["VpnConnectionId"].asString();
		if(!valueVpnConnectionsVpnConnection["CustomerGatewayId"].isNull())
			vpnConnectionsObject.customerGatewayId = valueVpnConnectionsVpnConnection["CustomerGatewayId"].asString();
		if(!valueVpnConnectionsVpnConnection["VpnGatewayId"].isNull())
			vpnConnectionsObject.vpnGatewayId = valueVpnConnectionsVpnConnection["VpnGatewayId"].asString();
		if(!valueVpnConnectionsVpnConnection["Name"].isNull())
			vpnConnectionsObject.name = valueVpnConnectionsVpnConnection["Name"].asString();
		if(!valueVpnConnectionsVpnConnection["LocalSubnet"].isNull())
			vpnConnectionsObject.localSubnet = valueVpnConnectionsVpnConnection["LocalSubnet"].asString();
		if(!valueVpnConnectionsVpnConnection["RemoteSubnet"].isNull())
			vpnConnectionsObject.remoteSubnet = valueVpnConnectionsVpnConnection["RemoteSubnet"].asString();
		if(!valueVpnConnectionsVpnConnection["CreateTime"].isNull())
			vpnConnectionsObject.createTime = std::stol(valueVpnConnectionsVpnConnection["CreateTime"].asString());
		if(!valueVpnConnectionsVpnConnection["EffectImmediately"].isNull())
			vpnConnectionsObject.effectImmediately = valueVpnConnectionsVpnConnection["EffectImmediately"].asString() == "true";
		if(!valueVpnConnectionsVpnConnection["Status"].isNull())
			vpnConnectionsObject.status = valueVpnConnectionsVpnConnection["Status"].asString();
		if(!valueVpnConnectionsVpnConnection["EnableDpd"].isNull())
			vpnConnectionsObject.enableDpd = valueVpnConnectionsVpnConnection["EnableDpd"].asString() == "true";
		if(!valueVpnConnectionsVpnConnection["EnableNatTraversal"].isNull())
			vpnConnectionsObject.enableNatTraversal = valueVpnConnectionsVpnConnection["EnableNatTraversal"].asString() == "true";
		auto ikeConfigNode = value["IkeConfig"];
		if(!ikeConfigNode["Psk"].isNull())
			vpnConnectionsObject.ikeConfig.psk = ikeConfigNode["Psk"].asString();
		if(!ikeConfigNode["IkeVersion"].isNull())
			vpnConnectionsObject.ikeConfig.ikeVersion = ikeConfigNode["IkeVersion"].asString();
		if(!ikeConfigNode["IkeMode"].isNull())
			vpnConnectionsObject.ikeConfig.ikeMode = ikeConfigNode["IkeMode"].asString();
		if(!ikeConfigNode["IkeEncAlg"].isNull())
			vpnConnectionsObject.ikeConfig.ikeEncAlg = ikeConfigNode["IkeEncAlg"].asString();
		if(!ikeConfigNode["IkeAuthAlg"].isNull())
			vpnConnectionsObject.ikeConfig.ikeAuthAlg = ikeConfigNode["IkeAuthAlg"].asString();
		if(!ikeConfigNode["IkePfs"].isNull())
			vpnConnectionsObject.ikeConfig.ikePfs = ikeConfigNode["IkePfs"].asString();
		if(!ikeConfigNode["IkeLifetime"].isNull())
			vpnConnectionsObject.ikeConfig.ikeLifetime = std::stol(ikeConfigNode["IkeLifetime"].asString());
		if(!ikeConfigNode["LocalId"].isNull())
			vpnConnectionsObject.ikeConfig.localId = ikeConfigNode["LocalId"].asString();
		if(!ikeConfigNode["RemoteId"].isNull())
			vpnConnectionsObject.ikeConfig.remoteId = ikeConfigNode["RemoteId"].asString();
		auto ipsecConfigNode = value["IpsecConfig"];
		if(!ipsecConfigNode["IpsecEncAlg"].isNull())
			vpnConnectionsObject.ipsecConfig.ipsecEncAlg = ipsecConfigNode["IpsecEncAlg"].asString();
		if(!ipsecConfigNode["IpsecAuthAlg"].isNull())
			vpnConnectionsObject.ipsecConfig.ipsecAuthAlg = ipsecConfigNode["IpsecAuthAlg"].asString();
		if(!ipsecConfigNode["IpsecPfs"].isNull())
			vpnConnectionsObject.ipsecConfig.ipsecPfs = ipsecConfigNode["IpsecPfs"].asString();
		if(!ipsecConfigNode["IpsecLifetime"].isNull())
			vpnConnectionsObject.ipsecConfig.ipsecLifetime = std::stol(ipsecConfigNode["IpsecLifetime"].asString());
		auto vcoHealthCheckNode = value["VcoHealthCheck"];
		if(!vcoHealthCheckNode["Enable"].isNull())
			vpnConnectionsObject.vcoHealthCheck.enable = vcoHealthCheckNode["Enable"].asString();
		if(!vcoHealthCheckNode["Sip"].isNull())
			vpnConnectionsObject.vcoHealthCheck.sip = vcoHealthCheckNode["Sip"].asString();
		if(!vcoHealthCheckNode["Dip"].isNull())
			vpnConnectionsObject.vcoHealthCheck.dip = vcoHealthCheckNode["Dip"].asString();
		if(!vcoHealthCheckNode["Interval"].isNull())
			vpnConnectionsObject.vcoHealthCheck.interval = std::stoi(vcoHealthCheckNode["Interval"].asString());
		if(!vcoHealthCheckNode["Retry"].isNull())
			vpnConnectionsObject.vcoHealthCheck.retry = std::stoi(vcoHealthCheckNode["Retry"].asString());
		if(!vcoHealthCheckNode["Status"].isNull())
			vpnConnectionsObject.vcoHealthCheck.status = vcoHealthCheckNode["Status"].asString();
		vpnConnections_.push_back(vpnConnectionsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

