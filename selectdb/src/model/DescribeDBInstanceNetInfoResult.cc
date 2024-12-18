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

#include <alibabacloud/selectdb/model/DescribeDBInstanceNetInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Selectdb;
using namespace AlibabaCloud::Selectdb::Model;

DescribeDBInstanceNetInfoResult::DescribeDBInstanceNetInfoResult() :
	ServiceResult()
{}

DescribeDBInstanceNetInfoResult::DescribeDBInstanceNetInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceNetInfoResult::~DescribeDBInstanceNetInfoResult()
{}

void DescribeDBInstanceNetInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBInstanceNetInfosNode = value["DBInstanceNetInfos"]["DBInstanceNetInfosItem"];
	for (auto valueDBInstanceNetInfosDBInstanceNetInfosItem : allDBInstanceNetInfosNode)
	{
		DBInstanceNetInfosItem dBInstanceNetInfosObject;
		if(!valueDBInstanceNetInfosDBInstanceNetInfosItem["NetType"].isNull())
			dBInstanceNetInfosObject.netType = valueDBInstanceNetInfosDBInstanceNetInfosItem["NetType"].asString();
		if(!valueDBInstanceNetInfosDBInstanceNetInfosItem["VpcInstanceId"].isNull())
			dBInstanceNetInfosObject.vpcInstanceId = valueDBInstanceNetInfosDBInstanceNetInfosItem["VpcInstanceId"].asString();
		if(!valueDBInstanceNetInfosDBInstanceNetInfosItem["VpcId"].isNull())
			dBInstanceNetInfosObject.vpcId = valueDBInstanceNetInfosDBInstanceNetInfosItem["VpcId"].asString();
		if(!valueDBInstanceNetInfosDBInstanceNetInfosItem["VswitchId"].isNull())
			dBInstanceNetInfosObject.vswitchId = valueDBInstanceNetInfosDBInstanceNetInfosItem["VswitchId"].asString();
		if(!valueDBInstanceNetInfosDBInstanceNetInfosItem["UserVisible"].isNull())
			dBInstanceNetInfosObject.userVisible = valueDBInstanceNetInfosDBInstanceNetInfosItem["UserVisible"].asString() == "true";
		if(!valueDBInstanceNetInfosDBInstanceNetInfosItem["ConnectionString"].isNull())
			dBInstanceNetInfosObject.connectionString = valueDBInstanceNetInfosDBInstanceNetInfosItem["ConnectionString"].asString();
		if(!valueDBInstanceNetInfosDBInstanceNetInfosItem["Ip"].isNull())
			dBInstanceNetInfosObject.ip = valueDBInstanceNetInfosDBInstanceNetInfosItem["Ip"].asString();
		if(!valueDBInstanceNetInfosDBInstanceNetInfosItem["ClusterId"].isNull())
			dBInstanceNetInfosObject.clusterId = valueDBInstanceNetInfosDBInstanceNetInfosItem["ClusterId"].asString();
		auto allPortListNode = valueDBInstanceNetInfosDBInstanceNetInfosItem["PortList"]["PortListItem"];
		for (auto valueDBInstanceNetInfosDBInstanceNetInfosItemPortListPortListItem : allPortListNode)
		{
			DBInstanceNetInfosItem::PortListItem portListObject;
			if(!valueDBInstanceNetInfosDBInstanceNetInfosItemPortListPortListItem["Protocol"].isNull())
				portListObject.protocol = valueDBInstanceNetInfosDBInstanceNetInfosItemPortListPortListItem["Protocol"].asString();
			if(!valueDBInstanceNetInfosDBInstanceNetInfosItemPortListPortListItem["Port"].isNull())
				portListObject.port = std::stoi(valueDBInstanceNetInfosDBInstanceNetInfosItemPortListPortListItem["Port"].asString());
			dBInstanceNetInfosObject.portList.push_back(portListObject);
		}
		dBInstanceNetInfos_.push_back(dBInstanceNetInfosObject);
	}
	auto allDBClustersNetInfosNode = value["DBClustersNetInfos"]["DBClustersNetInfosItem"];
	for (auto valueDBClustersNetInfosDBClustersNetInfosItem : allDBClustersNetInfosNode)
	{
		DBClustersNetInfosItem dBClustersNetInfosObject;
		if(!valueDBClustersNetInfosDBClustersNetInfosItem["NetType"].isNull())
			dBClustersNetInfosObject.netType = valueDBClustersNetInfosDBClustersNetInfosItem["NetType"].asString();
		if(!valueDBClustersNetInfosDBClustersNetInfosItem["VpcInstanceId"].isNull())
			dBClustersNetInfosObject.vpcInstanceId = valueDBClustersNetInfosDBClustersNetInfosItem["VpcInstanceId"].asString();
		if(!valueDBClustersNetInfosDBClustersNetInfosItem["VpcId"].isNull())
			dBClustersNetInfosObject.vpcId = valueDBClustersNetInfosDBClustersNetInfosItem["VpcId"].asString();
		if(!valueDBClustersNetInfosDBClustersNetInfosItem["VswitchId"].isNull())
			dBClustersNetInfosObject.vswitchId = valueDBClustersNetInfosDBClustersNetInfosItem["VswitchId"].asString();
		if(!valueDBClustersNetInfosDBClustersNetInfosItem["UserVisible"].isNull())
			dBClustersNetInfosObject.userVisible = valueDBClustersNetInfosDBClustersNetInfosItem["UserVisible"].asString() == "true";
		if(!valueDBClustersNetInfosDBClustersNetInfosItem["ConnectionString"].isNull())
			dBClustersNetInfosObject.connectionString = valueDBClustersNetInfosDBClustersNetInfosItem["ConnectionString"].asString();
		if(!valueDBClustersNetInfosDBClustersNetInfosItem["Ip"].isNull())
			dBClustersNetInfosObject.ip = valueDBClustersNetInfosDBClustersNetInfosItem["Ip"].asString();
		if(!valueDBClustersNetInfosDBClustersNetInfosItem["ClusterId"].isNull())
			dBClustersNetInfosObject.clusterId = valueDBClustersNetInfosDBClustersNetInfosItem["ClusterId"].asString();
		auto allPortList1Node = valueDBClustersNetInfosDBClustersNetInfosItem["PortList"]["PortListItem"];
		for (auto valueDBClustersNetInfosDBClustersNetInfosItemPortListPortListItem : allPortList1Node)
		{
			DBClustersNetInfosItem::PortListItem2 portList1Object;
			if(!valueDBClustersNetInfosDBClustersNetInfosItemPortListPortListItem["Protocol"].isNull())
				portList1Object.protocol = valueDBClustersNetInfosDBClustersNetInfosItemPortListPortListItem["Protocol"].asString();
			if(!valueDBClustersNetInfosDBClustersNetInfosItemPortListPortListItem["Port"].isNull())
				portList1Object.port = std::stoi(valueDBClustersNetInfosDBClustersNetInfosItemPortListPortListItem["Port"].asString());
			dBClustersNetInfosObject.portList1.push_back(portList1Object);
		}
		dBClustersNetInfos_.push_back(dBClustersNetInfosObject);
	}

}

std::vector<DescribeDBInstanceNetInfoResult::DBClustersNetInfosItem> DescribeDBInstanceNetInfoResult::getDBClustersNetInfos()const
{
	return dBClustersNetInfos_;
}

std::vector<DescribeDBInstanceNetInfoResult::DBInstanceNetInfosItem> DescribeDBInstanceNetInfoResult::getDBInstanceNetInfos()const
{
	return dBInstanceNetInfos_;
}

