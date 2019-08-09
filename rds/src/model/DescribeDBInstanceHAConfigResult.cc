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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allHostInstanceInfos = value["HostInstanceInfos"]["NodeInfo"];
	for (auto value : allHostInstanceInfos)
	{
		NodeInfo hostInstanceInfosObject;
		if(!value["NodeId"].isNull())
			hostInstanceInfosObject.nodeId = value["NodeId"].asString();
		if(!value["RegionId"].isNull())
			hostInstanceInfosObject.regionId = value["RegionId"].asString();
		if(!value["LogSyncTime"].isNull())
			hostInstanceInfosObject.logSyncTime = value["LogSyncTime"].asString();
		if(!value["DataSyncTime"].isNull())
			hostInstanceInfosObject.dataSyncTime = value["DataSyncTime"].asString();
		if(!value["NodeType"].isNull())
			hostInstanceInfosObject.nodeType = value["NodeType"].asString();
		if(!value["ZoneId"].isNull())
			hostInstanceInfosObject.zoneId = value["ZoneId"].asString();
		if(!value["SyncStatus"].isNull())
			hostInstanceInfosObject.syncStatus = value["SyncStatus"].asString();
		hostInstanceInfos_.push_back(hostInstanceInfosObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["SyncMode"].isNull())
		syncMode_ = value["SyncMode"].asString();
	if(!value["HAMode"].isNull())
		hAMode_ = value["HAMode"].asString();

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

