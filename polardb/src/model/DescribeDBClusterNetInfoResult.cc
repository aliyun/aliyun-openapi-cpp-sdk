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

#include <alibabacloud/polardb/model/DescribeDBClusterNetInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

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
	auto allDBClusterNetInfosNode = value["DBClusterNetInfos"]["DBClusterNetInfo"];
	for (auto valueDBClusterNetInfosDBClusterNetInfo : allDBClusterNetInfosNode)
	{
		DBClusterNetInfo dBClusterNetInfosObject;
		if(!valueDBClusterNetInfosDBClusterNetInfo["VSwitchId"].isNull())
			dBClusterNetInfosObject.vSwitchId = valueDBClusterNetInfosDBClusterNetInfo["VSwitchId"].asString();
		if(!valueDBClusterNetInfosDBClusterNetInfo["ConnectionStringType"].isNull())
			dBClusterNetInfosObject.connectionStringType = valueDBClusterNetInfosDBClusterNetInfo["ConnectionStringType"].asString();
		if(!valueDBClusterNetInfosDBClusterNetInfo["ConnectionString"].isNull())
			dBClusterNetInfosObject.connectionString = valueDBClusterNetInfosDBClusterNetInfo["ConnectionString"].asString();
		if(!valueDBClusterNetInfosDBClusterNetInfo["IPType"].isNull())
			dBClusterNetInfosObject.iPType = valueDBClusterNetInfosDBClusterNetInfo["IPType"].asString();
		if(!valueDBClusterNetInfosDBClusterNetInfo["Port"].isNull())
			dBClusterNetInfosObject.port = valueDBClusterNetInfosDBClusterNetInfo["Port"].asString();
		if(!valueDBClusterNetInfosDBClusterNetInfo["VPCId"].isNull())
			dBClusterNetInfosObject.vPCId = valueDBClusterNetInfosDBClusterNetInfo["VPCId"].asString();
		if(!valueDBClusterNetInfosDBClusterNetInfo["IPAddress"].isNull())
			dBClusterNetInfosObject.iPAddress = valueDBClusterNetInfosDBClusterNetInfo["IPAddress"].asString();
		dBClusterNetInfos_.push_back(dBClusterNetInfosObject);
	}
	auto allDBNodeNetInfosNode = value["DBNodeNetInfos"]["DBNodeNetInfo"];
	for (auto valueDBNodeNetInfosDBNodeNetInfo : allDBNodeNetInfosNode)
	{
		DBNodeNetInfo dBNodeNetInfosObject;
		if(!valueDBNodeNetInfosDBNodeNetInfo["DBNodeRole"].isNull())
			dBNodeNetInfosObject.dBNodeRole = valueDBNodeNetInfosDBNodeNetInfo["DBNodeRole"].asString();
		if(!valueDBNodeNetInfosDBNodeNetInfo["DBInstanceId"].isNull())
			dBNodeNetInfosObject.dBInstanceId = valueDBNodeNetInfosDBNodeNetInfo["DBInstanceId"].asString();
		auto allNetInfosNode = valueDBNodeNetInfosDBNodeNetInfo["NetInfos"]["NetInfo"];
		for (auto valueDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo : allNetInfosNode)
		{
			DBNodeNetInfo::NetInfo netInfosObject;
			if(!valueDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo["VSwitchId"].isNull())
				netInfosObject.vSwitchId = valueDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo["VSwitchId"].asString();
			if(!valueDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo["ConnectionString"].isNull())
				netInfosObject.connectionString = valueDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo["ConnectionString"].asString();
			if(!valueDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo["IPType"].isNull())
				netInfosObject.iPType = valueDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo["IPType"].asString();
			if(!valueDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo["Port"].isNull())
				netInfosObject.port = valueDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo["Port"].asString();
			if(!valueDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo["VPCId"].isNull())
				netInfosObject.vPCId = valueDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo["VPCId"].asString();
			if(!valueDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo["IPAddress"].isNull())
				netInfosObject.iPAddress = valueDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo["IPAddress"].asString();
			dBNodeNetInfosObject.netInfos.push_back(netInfosObject);
		}
		dBNodeNetInfos_.push_back(dBNodeNetInfosObject);
	}
	if(!value["ClusterNetworkType"].isNull())
		clusterNetworkType_ = value["ClusterNetworkType"].asString();

}

std::vector<DescribeDBClusterNetInfoResult::DBClusterNetInfo> DescribeDBClusterNetInfoResult::getDBClusterNetInfos()const
{
	return dBClusterNetInfos_;
}

std::string DescribeDBClusterNetInfoResult::getClusterNetworkType()const
{
	return clusterNetworkType_;
}

std::vector<DescribeDBClusterNetInfoResult::DBNodeNetInfo> DescribeDBClusterNetInfoResult::getDBNodeNetInfos()const
{
	return dBNodeNetInfos_;
}

