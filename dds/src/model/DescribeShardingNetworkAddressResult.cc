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

#include <alibabacloud/dds/model/DescribeShardingNetworkAddressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeShardingNetworkAddressResult::DescribeShardingNetworkAddressResult() :
	ServiceResult()
{}

DescribeShardingNetworkAddressResult::DescribeShardingNetworkAddressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeShardingNetworkAddressResult::~DescribeShardingNetworkAddressResult()
{}

void DescribeShardingNetworkAddressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCompatibleConnectionsNode = value["CompatibleConnections"]["CompatibleConnection"];
	for (auto valueCompatibleConnectionsCompatibleConnection : allCompatibleConnectionsNode)
	{
		CompatibleConnection compatibleConnectionsObject;
		if(!valueCompatibleConnectionsCompatibleConnection["VswitchId"].isNull())
			compatibleConnectionsObject.vswitchId = valueCompatibleConnectionsCompatibleConnection["VswitchId"].asString();
		if(!valueCompatibleConnectionsCompatibleConnection["ExpiredTime"].isNull())
			compatibleConnectionsObject.expiredTime = valueCompatibleConnectionsCompatibleConnection["ExpiredTime"].asString();
		if(!valueCompatibleConnectionsCompatibleConnection["NetworkType"].isNull())
			compatibleConnectionsObject.networkType = valueCompatibleConnectionsCompatibleConnection["NetworkType"].asString();
		if(!valueCompatibleConnectionsCompatibleConnection["Port"].isNull())
			compatibleConnectionsObject.port = valueCompatibleConnectionsCompatibleConnection["Port"].asString();
		if(!valueCompatibleConnectionsCompatibleConnection["NetworkAddress"].isNull())
			compatibleConnectionsObject.networkAddress = valueCompatibleConnectionsCompatibleConnection["NetworkAddress"].asString();
		if(!valueCompatibleConnectionsCompatibleConnection["VPCId"].isNull())
			compatibleConnectionsObject.vPCId = valueCompatibleConnectionsCompatibleConnection["VPCId"].asString();
		if(!valueCompatibleConnectionsCompatibleConnection["IPAddress"].isNull())
			compatibleConnectionsObject.iPAddress = valueCompatibleConnectionsCompatibleConnection["IPAddress"].asString();
		compatibleConnections_.push_back(compatibleConnectionsObject);
	}
	auto allNetworkAddressesNode = value["NetworkAddresses"]["NetworkAddress"];
	for (auto valueNetworkAddressesNetworkAddress : allNetworkAddressesNode)
	{
		NetworkAddress networkAddressesObject;
		if(!valueNetworkAddressesNetworkAddress["NodeType"].isNull())
			networkAddressesObject.nodeType = valueNetworkAddressesNetworkAddress["NodeType"].asString();
		if(!valueNetworkAddressesNetworkAddress["VswitchId"].isNull())
			networkAddressesObject.vswitchId = valueNetworkAddressesNetworkAddress["VswitchId"].asString();
		if(!valueNetworkAddressesNetworkAddress["ExpiredTime"].isNull())
			networkAddressesObject.expiredTime = valueNetworkAddressesNetworkAddress["ExpiredTime"].asString();
		if(!valueNetworkAddressesNetworkAddress["NetworkType"].isNull())
			networkAddressesObject.networkType = valueNetworkAddressesNetworkAddress["NetworkType"].asString();
		if(!valueNetworkAddressesNetworkAddress["Role"].isNull())
			networkAddressesObject.role = valueNetworkAddressesNetworkAddress["Role"].asString();
		if(!valueNetworkAddressesNetworkAddress["Port"].isNull())
			networkAddressesObject.port = valueNetworkAddressesNetworkAddress["Port"].asString();
		if(!valueNetworkAddressesNetworkAddress["VPCId"].isNull())
			networkAddressesObject.vPCId = valueNetworkAddressesNetworkAddress["VPCId"].asString();
		if(!valueNetworkAddressesNetworkAddress["NetworkAddress"].isNull())
			networkAddressesObject.networkAddress = valueNetworkAddressesNetworkAddress["NetworkAddress"].asString();
		if(!valueNetworkAddressesNetworkAddress["NodeId"].isNull())
			networkAddressesObject.nodeId = valueNetworkAddressesNetworkAddress["NodeId"].asString();
		if(!valueNetworkAddressesNetworkAddress["IPAddress"].isNull())
			networkAddressesObject.iPAddress = valueNetworkAddressesNetworkAddress["IPAddress"].asString();
		if(!valueNetworkAddressesNetworkAddress["ConnectionType"].isNull())
			networkAddressesObject.connectionType = valueNetworkAddressesNetworkAddress["ConnectionType"].asString();
		if(!valueNetworkAddressesNetworkAddress["TxtRecord"].isNull())
			networkAddressesObject.txtRecord = valueNetworkAddressesNetworkAddress["TxtRecord"].asString();
		networkAddresses_.push_back(networkAddressesObject);
	}

}

std::vector<DescribeShardingNetworkAddressResult::CompatibleConnection> DescribeShardingNetworkAddressResult::getCompatibleConnections()const
{
	return compatibleConnections_;
}

std::vector<DescribeShardingNetworkAddressResult::NetworkAddress> DescribeShardingNetworkAddressResult::getNetworkAddresses()const
{
	return networkAddresses_;
}

