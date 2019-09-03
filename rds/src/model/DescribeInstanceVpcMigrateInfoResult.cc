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

#include <alibabacloud/rds/model/DescribeInstanceVpcMigrateInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeInstanceVpcMigrateInfoResult::DescribeInstanceVpcMigrateInfoResult() :
	ServiceResult()
{}

DescribeInstanceVpcMigrateInfoResult::DescribeInstanceVpcMigrateInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceVpcMigrateInfoResult::~DescribeInstanceVpcMigrateInfoResult()
{}

void DescribeInstanceVpcMigrateInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBInstanceMigrateInfos = value["DBInstanceMigrateInfos"]["DBInstanceMigrateInfo"];
	for (auto value : allDBInstanceMigrateInfos)
	{
		DBInstanceMigrateInfo dBInstanceMigrateInfosObject;
		if(!value["DBInstanceId"].isNull())
			dBInstanceMigrateInfosObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["TargetRegionId"].isNull())
			dBInstanceMigrateInfosObject.targetRegionId = value["TargetRegionId"].asString();
		if(!value["TargetZoneId"].isNull())
			dBInstanceMigrateInfosObject.targetZoneId = value["TargetZoneId"].asString();
		if(!value["TargetVPCId"].isNull())
			dBInstanceMigrateInfosObject.targetVPCId = value["TargetVPCId"].asString();
		if(!value["TargetVSwitchId"].isNull())
			dBInstanceMigrateInfosObject.targetVSwitchId = value["TargetVSwitchId"].asString();
		if(!value["TargetIPAddress"].isNull())
			dBInstanceMigrateInfosObject.targetIPAddress = value["TargetIPAddress"].asString();
		if(!value["TargetVpcInstanceId"].isNull())
			dBInstanceMigrateInfosObject.targetVpcInstanceId = value["TargetVpcInstanceId"].asString();
		dBInstanceMigrateInfos_.push_back(dBInstanceMigrateInfosObject);
	}

}

std::vector<DescribeInstanceVpcMigrateInfoResult::DBInstanceMigrateInfo> DescribeInstanceVpcMigrateInfoResult::getDBInstanceMigrateInfos()const
{
	return dBInstanceMigrateInfos_;
}

