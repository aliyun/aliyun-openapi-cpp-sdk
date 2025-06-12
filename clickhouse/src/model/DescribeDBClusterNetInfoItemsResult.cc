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

#include <alibabacloud/clickhouse/model/DescribeDBClusterNetInfoItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

DescribeDBClusterNetInfoItemsResult::DescribeDBClusterNetInfoItemsResult() :
	ServiceResult()
{}

DescribeDBClusterNetInfoItemsResult::DescribeDBClusterNetInfoItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterNetInfoItemsResult::~DescribeDBClusterNetInfoItemsResult()
{}

void DescribeDBClusterNetInfoItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetInfoItemsNode = value["NetInfoItems"]["NetInfoItem"];
	for (auto valueNetInfoItemsNetInfoItem : allNetInfoItemsNode)
	{
		NetInfoItem netInfoItemsObject;
		if(!valueNetInfoItemsNetInfoItem["VpcId"].isNull())
			netInfoItemsObject.vpcId = valueNetInfoItemsNetInfoItem["VpcId"].asString();
		if(!valueNetInfoItemsNetInfoItem["VSwitchId"].isNull())
			netInfoItemsObject.vSwitchId = valueNetInfoItemsNetInfoItem["VSwitchId"].asString();
		if(!valueNetInfoItemsNetInfoItem["ConnectionString"].isNull())
			netInfoItemsObject.connectionString = valueNetInfoItemsNetInfoItem["ConnectionString"].asString();
		if(!valueNetInfoItemsNetInfoItem["JdbcPort"].isNull())
			netInfoItemsObject.jdbcPort = valueNetInfoItemsNetInfoItem["JdbcPort"].asString();
		if(!valueNetInfoItemsNetInfoItem["NetType"].isNull())
			netInfoItemsObject.netType = valueNetInfoItemsNetInfoItem["NetType"].asString();
		if(!valueNetInfoItemsNetInfoItem["HttpPort"].isNull())
			netInfoItemsObject.httpPort = valueNetInfoItemsNetInfoItem["HttpPort"].asString();
		if(!valueNetInfoItemsNetInfoItem["IPAddress"].isNull())
			netInfoItemsObject.iPAddress = valueNetInfoItemsNetInfoItem["IPAddress"].asString();
		if(!valueNetInfoItemsNetInfoItem["HttpsPort"].isNull())
			netInfoItemsObject.httpsPort = valueNetInfoItemsNetInfoItem["HttpsPort"].asString();
		if(!valueNetInfoItemsNetInfoItem["MySQLPort"].isNull())
			netInfoItemsObject.mySQLPort = valueNetInfoItemsNetInfoItem["MySQLPort"].asString();
		netInfoItems_.push_back(netInfoItemsObject);
	}
	if(!value["ClusterNetworkType"].isNull())
		clusterNetworkType_ = value["ClusterNetworkType"].asString();
	if(!value["EnableSLB"].isNull())
		enableSLB_ = value["EnableSLB"].asString() == "true";

}

std::vector<DescribeDBClusterNetInfoItemsResult::NetInfoItem> DescribeDBClusterNetInfoItemsResult::getNetInfoItems()const
{
	return netInfoItems_;
}

std::string DescribeDBClusterNetInfoItemsResult::getClusterNetworkType()const
{
	return clusterNetworkType_;
}

bool DescribeDBClusterNetInfoItemsResult::getEnableSLB()const
{
	return enableSLB_;
}

