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
		auto allIkeConfig = value["IkeConfig"];
		for (auto value : allIkeConfig)
		{
			VpnConnection::IkeConfig ikeConfigObject;
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
			vpnConnectionsObject.ikeConfig.push_back(ikeConfigObject);
		}
		auto allIpsecConfig = value["IpsecConfig"];
		for (auto value : allIpsecConfig)
		{
			VpnConnection::IpsecConfig ipsecConfigObject;
			if(!value["IpsecEncAlg"].isNull())
				ipsecConfigObject.ipsecEncAlg = value["IpsecEncAlg"].asString();
			if(!value["IpsecAuthAlg"].isNull())
				ipsecConfigObject.ipsecAuthAlg = value["IpsecAuthAlg"].asString();
			if(!value["IpsecPfs"].isNull())
				ipsecConfigObject.ipsecPfs = value["IpsecPfs"].asString();
			if(!value["IpsecLifetime"].isNull())
				ipsecConfigObject.ipsecLifetime = std::stol(value["IpsecLifetime"].asString());
			vpnConnectionsObject.ipsecConfig.push_back(ipsecConfigObject);
		}
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

