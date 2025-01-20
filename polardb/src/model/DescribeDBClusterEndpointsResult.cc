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

#include <alibabacloud/polardb/model/DescribeDBClusterEndpointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterEndpointsResult::DescribeDBClusterEndpointsResult() :
	ServiceResult()
{}

DescribeDBClusterEndpointsResult::DescribeDBClusterEndpointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterEndpointsResult::~DescribeDBClusterEndpointsResult()
{}

void DescribeDBClusterEndpointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBEndpoint"];
	for (auto valueItemsDBEndpoint : allItemsNode)
	{
		DBEndpoint itemsObject;
		if(!valueItemsDBEndpoint["NodeWithRoles"].isNull())
			itemsObject.nodeWithRoles = valueItemsDBEndpoint["NodeWithRoles"].asString();
		if(!valueItemsDBEndpoint["Nodes"].isNull())
			itemsObject.nodes = valueItemsDBEndpoint["Nodes"].asString();
		if(!valueItemsDBEndpoint["ReadWriteMode"].isNull())
			itemsObject.readWriteMode = valueItemsDBEndpoint["ReadWriteMode"].asString();
		if(!valueItemsDBEndpoint["DBEndpointId"].isNull())
			itemsObject.dBEndpointId = valueItemsDBEndpoint["DBEndpointId"].asString();
		if(!valueItemsDBEndpoint["EndpointConfig"].isNull())
			itemsObject.endpointConfig = valueItemsDBEndpoint["EndpointConfig"].asString();
		if(!valueItemsDBEndpoint["DBEndpointDescription"].isNull())
			itemsObject.dBEndpointDescription = valueItemsDBEndpoint["DBEndpointDescription"].asString();
		if(!valueItemsDBEndpoint["EndpointType"].isNull())
			itemsObject.endpointType = valueItemsDBEndpoint["EndpointType"].asString();
		if(!valueItemsDBEndpoint["AutoAddNewNodes"].isNull())
			itemsObject.autoAddNewNodes = valueItemsDBEndpoint["AutoAddNewNodes"].asString();
		if(!valueItemsDBEndpoint["DBClusterId"].isNull())
			itemsObject.dBClusterId = valueItemsDBEndpoint["DBClusterId"].asString();
		if(!valueItemsDBEndpoint["SccMode"].isNull())
			itemsObject.sccMode = valueItemsDBEndpoint["SccMode"].asString();
		if(!valueItemsDBEndpoint["PolarSccTimeoutAction"].isNull())
			itemsObject.polarSccTimeoutAction = valueItemsDBEndpoint["PolarSccTimeoutAction"].asString();
		if(!valueItemsDBEndpoint["PolarSccWaitTimeout"].isNull())
			itemsObject.polarSccWaitTimeout = valueItemsDBEndpoint["PolarSccWaitTimeout"].asString();
		auto allAddressItemsNode = valueItemsDBEndpoint["AddressItems"]["Address"];
		for (auto valueItemsDBEndpointAddressItemsAddress : allAddressItemsNode)
		{
			DBEndpoint::Address addressItemsObject;
			if(!valueItemsDBEndpointAddressItemsAddress["VSwitchId"].isNull())
				addressItemsObject.vSwitchId = valueItemsDBEndpointAddressItemsAddress["VSwitchId"].asString();
			if(!valueItemsDBEndpointAddressItemsAddress["PrivateZoneConnectionString"].isNull())
				addressItemsObject.privateZoneConnectionString = valueItemsDBEndpointAddressItemsAddress["PrivateZoneConnectionString"].asString();
			if(!valueItemsDBEndpointAddressItemsAddress["ConnectionString"].isNull())
				addressItemsObject.connectionString = valueItemsDBEndpointAddressItemsAddress["ConnectionString"].asString();
			if(!valueItemsDBEndpointAddressItemsAddress["NetType"].isNull())
				addressItemsObject.netType = valueItemsDBEndpointAddressItemsAddress["NetType"].asString();
			if(!valueItemsDBEndpointAddressItemsAddress["Port"].isNull())
				addressItemsObject.port = valueItemsDBEndpointAddressItemsAddress["Port"].asString();
			if(!valueItemsDBEndpointAddressItemsAddress["VpcInstanceId"].isNull())
				addressItemsObject.vpcInstanceId = valueItemsDBEndpointAddressItemsAddress["VpcInstanceId"].asString();
			if(!valueItemsDBEndpointAddressItemsAddress["VPCId"].isNull())
				addressItemsObject.vPCId = valueItemsDBEndpointAddressItemsAddress["VPCId"].asString();
			if(!valueItemsDBEndpointAddressItemsAddress["IPAddress"].isNull())
				addressItemsObject.iPAddress = valueItemsDBEndpointAddressItemsAddress["IPAddress"].asString();
			itemsObject.addressItems.push_back(addressItemsObject);
		}
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBClusterEndpointsResult::DBEndpoint> DescribeDBClusterEndpointsResult::getItems()const
{
	return items_;
}

