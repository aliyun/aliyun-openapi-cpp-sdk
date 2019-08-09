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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["DBEndpoint"];
	for (auto value : allItems)
	{
		DBEndpoint itemsObject;
		if(!value["DBEndpointId"].isNull())
			itemsObject.dBEndpointId = value["DBEndpointId"].asString();
		if(!value["EndpointType"].isNull())
			itemsObject.endpointType = value["EndpointType"].asString();
		if(!value["Nodes"].isNull())
			itemsObject.nodes = value["Nodes"].asString();
		if(!value["ReadWriteMode"].isNull())
			itemsObject.readWriteMode = value["ReadWriteMode"].asString();
		if(!value["AutoAddNewNodes"].isNull())
			itemsObject.autoAddNewNodes = value["AutoAddNewNodes"].asString();
		if(!value["EndpointConfig"].isNull())
			itemsObject.endpointConfig = value["EndpointConfig"].asString();
		auto allAddressItems = value["AddressItems"]["Address"];
		for (auto value : allAddressItems)
		{
			DBEndpoint::Address addressItemsObject;
			if(!value["ConnectionString"].isNull())
				addressItemsObject.connectionString = value["ConnectionString"].asString();
			if(!value["IPAddress"].isNull())
				addressItemsObject.iPAddress = value["IPAddress"].asString();
			if(!value["NetType"].isNull())
				addressItemsObject.netType = value["NetType"].asString();
			if(!value["Port"].isNull())
				addressItemsObject.port = value["Port"].asString();
			if(!value["VPCId"].isNull())
				addressItemsObject.vPCId = value["VPCId"].asString();
			if(!value["VSwitchId"].isNull())
				addressItemsObject.vSwitchId = value["VSwitchId"].asString();
			itemsObject.addressItems.push_back(addressItemsObject);
		}
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBClusterEndpointsResult::DBEndpoint> DescribeDBClusterEndpointsResult::getItems()const
{
	return items_;
}

