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

#include <alibabacloud/rds/model/DescribePreCheckResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribePreCheckResultsResult::DescribePreCheckResultsResult() :
	ServiceResult()
{}

DescribePreCheckResultsResult::DescribePreCheckResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePreCheckResultsResult::~DescribePreCheckResultsResult()
{}

void DescribePreCheckResultsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["PreCheckResult"];
	for (auto value : allItems)
	{
		PreCheckResult itemsObject;
		if(!value["PreCheckName"].isNull())
			itemsObject.preCheckName = value["PreCheckName"].asString();
		if(!value["PreCheckResult"].isNull())
			itemsObject.preCheckResult = value["PreCheckResult"].asString();
		if(!value["FailReasion"].isNull())
			itemsObject.failReasion = value["FailReasion"].asString();
		if(!value["RepairMethod"].isNull())
			itemsObject.repairMethod = value["RepairMethod"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();

}

std::string DescribePreCheckResultsResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::vector<DescribePreCheckResultsResult::PreCheckResult> DescribePreCheckResultsResult::getItems()const
{
	return items_;
}

