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

#include <alibabacloud/hbase/model/DescribeBackupPlanConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeBackupPlanConfigResult::DescribeBackupPlanConfigResult() :
	ServiceResult()
{}

DescribeBackupPlanConfigResult::DescribeBackupPlanConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupPlanConfigResult::~DescribeBackupPlanConfigResult()
{}

void DescribeBackupPlanConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTables = value["Tables"]["Table"];
	for (const auto &item : allTables)
		tables_.push_back(item.asString());
	if(!value["FullBackupCycle"].isNull())
		fullBackupCycle_ = std::stoi(value["FullBackupCycle"].asString());
	if(!value["MinHFileBackupCount"].isNull())
		minHFileBackupCount_ = std::stoi(value["MinHFileBackupCount"].asString());
	if(!value["NextFullBackupDate"].isNull())
		nextFullBackupDate_ = value["NextFullBackupDate"].asString();

}

int DescribeBackupPlanConfigResult::getFullBackupCycle()const
{
	return fullBackupCycle_;
}

std::string DescribeBackupPlanConfigResult::getNextFullBackupDate()const
{
	return nextFullBackupDate_;
}

std::vector<std::string> DescribeBackupPlanConfigResult::getTables()const
{
	return tables_;
}

int DescribeBackupPlanConfigResult::getMinHFileBackupCount()const
{
	return minHFileBackupCount_;
}

