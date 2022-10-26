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

#include <alibabacloud/polardb/model/DescribeDBClusterNodeInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterNodeInfoResult::DescribeDBClusterNodeInfoResult() :
	ServiceResult()
{}

DescribeDBClusterNodeInfoResult::DescribeDBClusterNodeInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterNodeInfoResult::~DescribeDBClusterNodeInfoResult()
{}

void DescribeDBClusterNodeInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBNodesNode = value["DBNodes"]["DBNode"];
	for (auto valueDBNodesDBNode : allDBNodesNode)
	{
		DBNode dBNodesObject;
		if(!valueDBNodesDBNode["CreationTime"].isNull())
			dBNodesObject.creationTime = valueDBNodesDBNode["CreationTime"].asString();
		if(!valueDBNodesDBNode["FailoverPriority"].isNull())
			dBNodesObject.failoverPriority = std::stoi(valueDBNodesDBNode["FailoverPriority"].asString());
		if(!valueDBNodesDBNode["MaxIOPS"].isNull())
			dBNodesObject.maxIOPS = std::stoi(valueDBNodesDBNode["MaxIOPS"].asString());
		if(!valueDBNodesDBNode["DBNodeClass"].isNull())
			dBNodesObject.dBNodeClass = valueDBNodesDBNode["DBNodeClass"].asString();
		if(!valueDBNodesDBNode["DBNodeRole"].isNull())
			dBNodesObject.dBNodeRole = valueDBNodesDBNode["DBNodeRole"].asString();
		if(!valueDBNodesDBNode["ZoneId"].isNull())
			dBNodesObject.zoneId = valueDBNodesDBNode["ZoneId"].asString();
		if(!valueDBNodesDBNode["MaxConnections"].isNull())
			dBNodesObject.maxConnections = std::stoi(valueDBNodesDBNode["MaxConnections"].asString());
		if(!valueDBNodesDBNode["DBNodeStatus"].isNull())
			dBNodesObject.dBNodeStatus = valueDBNodesDBNode["DBNodeStatus"].asString();
		if(!valueDBNodesDBNode["DBNodeId"].isNull())
			dBNodesObject.dBNodeId = valueDBNodesDBNode["DBNodeId"].asString();
		if(!valueDBNodesDBNode["ImciSwitch"].isNull())
			dBNodesObject.imciSwitch = valueDBNodesDBNode["ImciSwitch"].asString();
		if(!valueDBNodesDBNode["HotReplicaMode"].isNull())
			dBNodesObject.hotReplicaMode = valueDBNodesDBNode["HotReplicaMode"].asString();
		if(!valueDBNodesDBNode["AddedCpuCores"].isNull())
			dBNodesObject.addedCpuCores = valueDBNodesDBNode["AddedCpuCores"].asString();
		if(!valueDBNodesDBNode["MasterId"].isNull())
			dBNodesObject.masterId = valueDBNodesDBNode["MasterId"].asString();
		if(!valueDBNodesDBNode["SccMode"].isNull())
			dBNodesObject.sccMode = valueDBNodesDBNode["SccMode"].asString();
		dBNodes_.push_back(dBNodesObject);
	}
	if(!value["Category"].isNull())
		category_ = value["Category"].asString();
	if(!value["ZoneIds"].isNull())
		zoneIds_ = value["ZoneIds"].asString();

}

std::string DescribeDBClusterNodeInfoResult::getCategory()const
{
	return category_;
}

std::vector<DescribeDBClusterNodeInfoResult::DBNode> DescribeDBClusterNodeInfoResult::getDBNodes()const
{
	return dBNodes_;
}

std::string DescribeDBClusterNodeInfoResult::getZoneIds()const
{
	return zoneIds_;
}

