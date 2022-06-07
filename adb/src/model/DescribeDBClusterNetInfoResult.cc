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

#include <alibabacloud/adb/model/DescribeDBClusterNetInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDBClusterNetInfoResult::DescribeDBClusterNetInfoResult() :
	ServiceResult()
{}

DescribeDBClusterNetInfoResult::DescribeDBClusterNetInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterNetInfoResult::~DescribeDBClusterNetInfoResult()
{}

void DescribeDBClusterNetInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Address"];
	for (auto valueItemsAddress : allItemsNode)
	{
		Address itemsObject;
		if(!valueItemsAddress["VSwitchId"].isNull())
			itemsObject.vSwitchId = valueItemsAddress["VSwitchId"].asString();
		if(!valueItemsAddress["ConnectionString"].isNull())
			itemsObject.connectionString = valueItemsAddress["ConnectionString"].asString();
		if(!valueItemsAddress["NetType"].isNull())
			itemsObject.netType = valueItemsAddress["NetType"].asString();
		if(!valueItemsAddress["Port"].isNull())
			itemsObject.port = valueItemsAddress["Port"].asString();
		if(!valueItemsAddress["VPCId"].isNull())
			itemsObject.vPCId = valueItemsAddress["VPCId"].asString();
		if(!valueItemsAddress["IPAddress"].isNull())
			itemsObject.iPAddress = valueItemsAddress["IPAddress"].asString();
		if(!valueItemsAddress["ConnectionStringPrefix"].isNull())
			itemsObject.connectionStringPrefix = valueItemsAddress["ConnectionStringPrefix"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["ClusterNetworkType"].isNull())
		clusterNetworkType_ = value["ClusterNetworkType"].asString();

}

std::string DescribeDBClusterNetInfoResult::getClusterNetworkType()const
{
	return clusterNetworkType_;
}

std::vector<DescribeDBClusterNetInfoResult::Address> DescribeDBClusterNetInfoResult::getItems()const
{
	return items_;
}

