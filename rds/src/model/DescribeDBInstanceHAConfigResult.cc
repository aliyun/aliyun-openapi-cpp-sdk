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

#include <alibabacloud/rds/model/DescribeDBInstanceHAConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceHAConfigResult::DescribeDBInstanceHAConfigResult() :
	ServiceResult()
{}

DescribeDBInstanceHAConfigResult::DescribeDBInstanceHAConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceHAConfigResult::~DescribeDBInstanceHAConfigResult()
{}

void DescribeDBInstanceHAConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHostInstanceInfosNode = value["HostInstanceInfos"]["NodeInfo"];
	for (auto valueHostInstanceInfosNodeInfo : allHostInstanceInfosNode)
	{
		NodeInfo hostInstanceInfosObject;
		if(!valueHostInstanceInfosNodeInfo["DataSyncTime"].isNull())
			hostInstanceInfosObject.dataSyncTime = valueHostInstanceInfosNodeInfo["DataSyncTime"].asString();
		if(!valueHostInstanceInfosNodeInfo["LogSyncTime"].isNull())
			hostInstanceInfosObject.logSyncTime = valueHostInstanceInfosNodeInfo["LogSyncTime"].asString();
		if(!valueHostInstanceInfosNodeInfo["NodeId"].isNull())
			hostInstanceInfosObject.nodeId = valueHostInstanceInfosNodeInfo["NodeId"].asString();
		if(!valueHostInstanceInfosNodeInfo["NodeType"].isNull())
			hostInstanceInfosObject.nodeType = valueHostInstanceInfosNodeInfo["NodeType"].asString();
		if(!valueHostInstanceInfosNodeInfo["RegionId"].isNull())
			hostInstanceInfosObject.regionId = valueHostInstanceInfosNodeInfo["RegionId"].asString();
		if(!valueHostInstanceInfosNodeInfo["SyncStatus"].isNull())
			hostInstanceInfosObject.syncStatus = valueHostInstanceInfosNodeInfo["SyncStatus"].asString();
		if(!valueHostInstanceInfosNodeInfo["ZoneId"].isNull())
			hostInstanceInfosObject.zoneId = valueHostInstanceInfosNodeInfo["ZoneId"].asString();
		hostInstanceInfos_.push_back(hostInstanceInfosObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["HAMode"].isNull())
		hAMode_ = value["HAMode"].asString();
	if(!value["SyncMode"].isNull())
		syncMode_ = value["SyncMode"].asString();

}

std::string DescribeDBInstanceHAConfigResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeDBInstanceHAConfigResult::getHAMode()const
{
	return hAMode_;
}

std::vector<DescribeDBInstanceHAConfigResult::NodeInfo> DescribeDBInstanceHAConfigResult::getHostInstanceInfos()const
{
	return hostInstanceInfos_;
}

std::string DescribeDBInstanceHAConfigResult::getSyncMode()const
{
	return syncMode_;
}

