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

#include <alibabacloud/rds/model/DescribeAvailableClassesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeAvailableClassesResult::DescribeAvailableClassesResult() :
	ServiceResult()
{}

DescribeAvailableClassesResult::DescribeAvailableClassesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableClassesResult::~DescribeAvailableClassesResult()
{}

void DescribeAvailableClassesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBInstanceClassesNode = value["DBInstanceClasses"]["DBInstanceClass"];
	for (auto valueDBInstanceClassesDBInstanceClass : allDBInstanceClassesNode)
	{
		DBInstanceClass dBInstanceClassesObject;
		if(!valueDBInstanceClassesDBInstanceClass["DBInstanceClass"].isNull())
			dBInstanceClassesObject.dBInstanceClass = valueDBInstanceClassesDBInstanceClass["DBInstanceClass"].asString();
		if(!valueDBInstanceClassesDBInstanceClass["StorageRange"].isNull())
			dBInstanceClassesObject.storageRange = valueDBInstanceClassesDBInstanceClass["StorageRange"].asString();
		auto dBInstanceStorageRangeNode = value["DBInstanceStorageRange"];
		if(!dBInstanceStorageRangeNode["MaxValue"].isNull())
			dBInstanceClassesObject.dBInstanceStorageRange.maxValue = std::stoi(dBInstanceStorageRangeNode["MaxValue"].asString());
		if(!dBInstanceStorageRangeNode["MinValue"].isNull())
			dBInstanceClassesObject.dBInstanceStorageRange.minValue = std::stoi(dBInstanceStorageRangeNode["MinValue"].asString());
		if(!dBInstanceStorageRangeNode["Step"].isNull())
			dBInstanceClassesObject.dBInstanceStorageRange.step = std::stoi(dBInstanceStorageRangeNode["Step"].asString());
		dBInstanceClasses_.push_back(dBInstanceClassesObject);
	}

}

std::vector<DescribeAvailableClassesResult::DBInstanceClass> DescribeAvailableClassesResult::getDBInstanceClasses()const
{
	return dBInstanceClasses_;
}

