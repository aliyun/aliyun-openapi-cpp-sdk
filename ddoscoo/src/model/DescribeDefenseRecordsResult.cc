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

#include <alibabacloud/ddoscoo/model/DescribeDefenseRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDefenseRecordsResult::DescribeDefenseRecordsResult() :
	ServiceResult()
{}

DescribeDefenseRecordsResult::DescribeDefenseRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDefenseRecordsResult::~DescribeDefenseRecordsResult()
{}

void DescribeDefenseRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDefenseRecordsNode = value["DefenseRecords"]["DefenseRecord"];
	for (auto valueDefenseRecordsDefenseRecord : allDefenseRecordsNode)
	{
		DefenseRecord defenseRecordsObject;
		if(!valueDefenseRecordsDefenseRecord["EndTime"].isNull())
			defenseRecordsObject.endTime = std::stol(valueDefenseRecordsDefenseRecord["EndTime"].asString());
		if(!valueDefenseRecordsDefenseRecord["Status"].isNull())
			defenseRecordsObject.status = std::stoi(valueDefenseRecordsDefenseRecord["Status"].asString());
		if(!valueDefenseRecordsDefenseRecord["StartTime"].isNull())
			defenseRecordsObject.startTime = std::stol(valueDefenseRecordsDefenseRecord["StartTime"].asString());
		if(!valueDefenseRecordsDefenseRecord["EventCount"].isNull())
			defenseRecordsObject.eventCount = std::stoi(valueDefenseRecordsDefenseRecord["EventCount"].asString());
		if(!valueDefenseRecordsDefenseRecord["InstanceId"].isNull())
			defenseRecordsObject.instanceId = valueDefenseRecordsDefenseRecord["InstanceId"].asString();
		if(!valueDefenseRecordsDefenseRecord["AttackPeak"].isNull())
			defenseRecordsObject.attackPeak = std::stol(valueDefenseRecordsDefenseRecord["AttackPeak"].asString());
		defenseRecords_.push_back(defenseRecordsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<DescribeDefenseRecordsResult::DefenseRecord> DescribeDefenseRecordsResult::getDefenseRecords()const
{
	return defenseRecords_;
}

long DescribeDefenseRecordsResult::getTotalCount()const
{
	return totalCount_;
}

