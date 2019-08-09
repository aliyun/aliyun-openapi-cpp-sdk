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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allVpnConnections = value["VpnConnections"]["VpnConnection"];
	for (auto value : allVpnConnections)
	{
		VpnConnection vpnConnectionsObject;
		if(!value["VpnConnectionId"].isNull())
			vpnConnectionsObject.vpnConnectionId = value["VpnConnectionId"].asString();
		if(!value["CustomerGatewayId"].isNull())
			vpnConnectionsObject.customerGatewayId = value["CustomerGatewayId"].asString();
		if(!value["VpnGatewayId"].isNull())
			vpnConnectionsObject.vpnGatewayId = value["VpnGatewayId"].asString();
		if(!value["Name"].isNull())
			vpnConnectionsObject.name = value["Name"].asString();
		if(!value["LocalSubnet"].isNull())
			vpnConnectionsObject.localSubnet = value["LocalSubnet"].asString();
		if(!value["RemoteSubnet"].isNull())
			vpnConnectionsObject.remoteSubnet = value["RemoteSubnet"].asString();
		if(!value["CreateTime"].isNull())
			vpnConnectionsObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["EffectImmediately"].isNull())
			vpnConnectionsObject.effectImmediately = value["EffectImmediately"].asString() == "true";
		if(!value["Status"].isNull())
			vpnConnectionsObject.status = value["Status"].asString();
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

