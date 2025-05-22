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

#include <alibabacloud/rds/model/DescribeDBInstanceEndpointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceEndpointsResult::DescribeDBInstanceEndpointsResult() :
	ServiceResult()
{}

DescribeDBInstanceEndpointsResult::DescribeDBInstanceEndpointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceEndpointsResult::~DescribeDBInstanceEndpointsResult()
{}

void DescribeDBInstanceEndpointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DBInstanceName"].isNull())
		data_.dBInstanceName = dataNode["DBInstanceName"].asString();
	if(!dataNode["IpVersion"].isNull())
		data_.ipVersion = dataNode["IpVersion"].asString();
	auto allDBInstanceEndpointsNode = dataNode["DBInstanceEndpoints"]["DBInstanceEndpoint"];
	for (auto dataNodeDBInstanceEndpointsDBInstanceEndpoint : allDBInstanceEndpointsNode)
	{
		Data::DBInstanceEndpoint dBInstanceEndpointObject;
		if(!dataNodeDBInstanceEndpointsDBInstanceEndpoint["EndpointDescription"].isNull())
			dBInstanceEndpointObject.endpointDescription = dataNodeDBInstanceEndpointsDBInstanceEndpoint["EndpointDescription"].asString();
		if(!dataNodeDBInstanceEndpointsDBInstanceEndpoint["EndpointId"].isNull())
			dBInstanceEndpointObject.endpointId = dataNodeDBInstanceEndpointsDBInstanceEndpoint["EndpointId"].asString();
		if(!dataNodeDBInstanceEndpointsDBInstanceEndpoint["EndpointType"].isNull())
			dBInstanceEndpointObject.endpointType = dataNodeDBInstanceEndpointsDBInstanceEndpoint["EndpointType"].asString();
		auto allAddressItemsNode = dataNodeDBInstanceEndpointsDBInstanceEndpoint["AddressItems"]["AddressItem"];
		for (auto dataNodeDBInstanceEndpointsDBInstanceEndpointAddressItemsAddressItem : allAddressItemsNode)
		{
			Data::DBInstanceEndpoint::AddressItem addressItemsObject;
			if(!dataNodeDBInstanceEndpointsDBInstanceEndpointAddressItemsAddressItem["ConnectionString"].isNull())
				addressItemsObject.connectionString = dataNodeDBInstanceEndpointsDBInstanceEndpointAddressItemsAddressItem["ConnectionString"].asString();
			if(!dataNodeDBInstanceEndpointsDBInstanceEndpointAddressItemsAddressItem["IpAddress"].isNull())
				addressItemsObject.ipAddress = dataNodeDBInstanceEndpointsDBInstanceEndpointAddressItemsAddressItem["IpAddress"].asString();
			if(!dataNodeDBInstanceEndpointsDBInstanceEndpointAddressItemsAddressItem["IpType"].isNull())
				addressItemsObject.ipType = dataNodeDBInstanceEndpointsDBInstanceEndpointAddressItemsAddressItem["IpType"].asString();
			if(!dataNodeDBInstanceEndpointsDBInstanceEndpointAddressItemsAddressItem["Port"].isNull())
				addressItemsObject.port = dataNodeDBInstanceEndpointsDBInstanceEndpointAddressItemsAddressItem["Port"].asString();
			if(!dataNodeDBInstanceEndpointsDBInstanceEndpointAddressItemsAddressItem["VSwitchId"].isNull())
				addressItemsObject.vSwitchId = dataNodeDBInstanceEndpointsDBInstanceEndpointAddressItemsAddressItem["VSwitchId"].asString();
			if(!dataNodeDBInstanceEndpointsDBInstanceEndpointAddressItemsAddressItem["VpcId"].isNull())
				addressItemsObject.vpcId = dataNodeDBInstanceEndpointsDBInstanceEndpointAddressItemsAddressItem["VpcId"].asString();
			dBInstanceEndpointObject.addressItems.push_back(addressItemsObject);
		}
		auto allNodeItemsNode = dataNodeDBInstanceEndpointsDBInstanceEndpoint["NodeItems"]["NodeItem"];
		for (auto dataNodeDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem : allNodeItemsNode)
		{
			Data::DBInstanceEndpoint::NodeItem nodeItemsObject;
			if(!dataNodeDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem["DBInstanceId"].isNull())
				nodeItemsObject.dBInstanceId = dataNodeDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem["DBInstanceId"].asString();
			if(!dataNodeDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem["NodeId"].isNull())
				nodeItemsObject.nodeId = dataNodeDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem["NodeId"].asString();
			if(!dataNodeDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem["Weight"].isNull())
				nodeItemsObject.weight = std::stoi(dataNodeDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem["Weight"].asString());
			dBInstanceEndpointObject.nodeItems.push_back(nodeItemsObject);
		}
		data_.dBInstanceEndpoints.push_back(dBInstanceEndpointObject);
	}

}

DescribeDBInstanceEndpointsResult::Data DescribeDBInstanceEndpointsResult::getData()const
{
	return data_;
}

