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

#include <alibabacloud/dds/model/DescribeDBInstanceSwitchLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeDBInstanceSwitchLogResult::DescribeDBInstanceSwitchLogResult() :
	ServiceResult()
{}

DescribeDBInstanceSwitchLogResult::DescribeDBInstanceSwitchLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceSwitchLogResult::~DescribeDBInstanceSwitchLogResult()
{}

void DescribeDBInstanceSwitchLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogItemsNode = value["LogItems"]["LogItemsItem"];
	for (auto valueLogItemsLogItemsItem : allLogItemsNode)
	{
		LogItemsItem logItemsObject;
		if(!valueLogItemsLogItemsItem["SwitchStatus"].isNull())
			logItemsObject.switchStatus = valueLogItemsLogItemsItem["SwitchStatus"].asString();
		if(!valueLogItemsLogItemsItem["SwitchTime"].isNull())
			logItemsObject.switchTime = valueLogItemsLogItemsItem["SwitchTime"].asString();
		if(!valueLogItemsLogItemsItem["SwitchCode"].isNull())
			logItemsObject.switchCode = valueLogItemsLogItemsItem["SwitchCode"].asString();
		if(!valueLogItemsLogItemsItem["NodeId"].isNull())
			logItemsObject.nodeId = valueLogItemsLogItemsItem["NodeId"].asString();
		logItems_.push_back(logItemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DescribeDBInstanceSwitchLogResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeDBInstanceSwitchLogResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeDBInstanceSwitchLogResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

long DescribeDBInstanceSwitchLogResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBInstanceSwitchLogResult::LogItemsItem> DescribeDBInstanceSwitchLogResult::getLogItems()const
{
	return logItems_;
}

