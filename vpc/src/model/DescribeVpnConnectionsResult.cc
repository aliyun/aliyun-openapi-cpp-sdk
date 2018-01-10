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
		VpnConnection vpnConnectionObject;
		vpnConnectionObject.vpnConnectionId = value["VpnConnectionId"].asString();
		vpnConnectionObject.customerGatewayId = value["CustomerGatewayId"].asString();
		vpnConnectionObject.vpnGatewayId = value["VpnGatewayId"].asString();
		vpnConnectionObject.name = value["Name"].asString();
		vpnConnectionObject.localSubnet = value["LocalSubnet"].asString();
		vpnConnectionObject.remoteSubnet = value["RemoteSubnet"].asString();
		vpnConnectionObject.createTime = std::stol(value["CreateTime"].asString());
		vpnConnectionObject.effectImmediately = std::stoi(value["EffectImmediately"].asString());
		vpnConnectionObject.status = value["Status"].asString();
		auto allIkeConfig = value["IkeConfig"];
		for (auto value : allIkeConfig)
		{
			VpnConnection::IkeConfig ikeConfigObject;
			ikeConfigObject.psk = value["Psk"].asString();
			ikeConfigObject.ikeVersion = value["IkeVersion"].asString();
			ikeConfigObject.ikeMode = value["IkeMode"].asString();
			ikeConfigObject.ikeEncAlg = value["IkeEncAlg"].asString();
			ikeConfigObject.ikeAuthAlg = value["IkeAuthAlg"].asString();
			ikeConfigObject.ikePfs = value["IkePfs"].asString();
			ikeConfigObject.ikeLifetime = std::stol(value["IkeLifetime"].asString());
			ikeConfigObject.localId = value["LocalId"].asString();
			ikeConfigObject.remoteId = value["RemoteId"].asString();
			vpnConnectionObject.ikeConfig.push_back(ikeConfigObject);
		}
		auto allIpsecConfig = value["IpsecConfig"];
		for (auto value : allIpsecConfig)
		{
			VpnConnection::IpsecConfig ipsecConfigObject;
			ipsecConfigObject.ipsecEncAlg = value["IpsecEncAlg"].asString();
			ipsecConfigObject.ipsecAuthAlg = value["IpsecAuthAlg"].asString();
			ipsecConfigObject.ipsecPfs = value["IpsecPfs"].asString();
			ipsecConfigObject.ipsecLifetime = std::stol(value["IpsecLifetime"].asString());
			vpnConnectionObject.ipsecConfig.push_back(ipsecConfigObject);
		}
		vpnConnections_.push_back(vpnConnectionObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeVpnConnectionsResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeVpnConnectionsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeVpnConnectionsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeVpnConnectionsResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeVpnConnectionsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVpnConnectionsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

