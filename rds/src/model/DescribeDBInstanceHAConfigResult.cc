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
	auto allHostInstanceInfos = value["HostInstanceInfos"]["NodeInfo"];
	for (auto value : allHostInstanceInfos)
	{
		NodeInfo nodeInfoObject;
		nodeInfoObject.nodeId = value["NodeId"].asString();
		nodeInfoObject.regionId = value["RegionId"].asString();
		nodeInfoObject.logSyncTime = value["LogSyncTime"].asString();
		nodeInfoObject.dataSyncTime = value["DataSyncTime"].asString();
		nodeInfoObject.nodeType = value["NodeType"].asString();
		nodeInfoObject.zoneId = value["ZoneId"].asString();
		nodeInfoObject.syncStatus = value["SyncStatus"].asString();
		hostInstanceInfos_.push_back(nodeInfoObject);
	}
	dBInstanceId_ = value["DBInstanceId"].asString();
	syncMode_ = value["SyncMode"].asString();
	hAMode_ = value["HAMode"].asString();

}

std::string DescribeDBInstanceHAConfigResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceHAConfigResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

std::string DescribeDBInstanceHAConfigResult::getHAMode()const
{
	return hAMode_;
}

void DescribeDBInstanceHAConfigResult::setHAMode(const std::string& hAMode)
{
	hAMode_ = hAMode;
}

std::string DescribeDBInstanceHAConfigResult::getSyncMode()const
{
	return syncMode_;
}

void DescribeDBInstanceHAConfigResult::setSyncMode(const std::string& syncMode)
{
	syncMode_ = syncMode;
}

