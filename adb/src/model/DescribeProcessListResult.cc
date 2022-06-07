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

#include <alibabacloud/adb/model/DescribeProcessListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeProcessListResult::DescribeProcessListResult() :
	ServiceResult()
{}

DescribeProcessListResult::DescribeProcessListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProcessListResult::~DescribeProcessListResult()
{}

void DescribeProcessListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Process"];
	for (auto valueItemsProcess : allItemsNode)
	{
		Process itemsObject;
		if(!valueItemsProcess["StartTime"].isNull())
			itemsObject.startTime = valueItemsProcess["StartTime"].asString();
		if(!valueItemsProcess["Time"].isNull())
			itemsObject.time = std::stoi(valueItemsProcess["Time"].asString());
		if(!valueItemsProcess["ProcessId"].isNull())
			itemsObject.processId = valueItemsProcess["ProcessId"].asString();
		if(!valueItemsProcess["Host"].isNull())
			itemsObject.host = valueItemsProcess["Host"].asString();
		if(!valueItemsProcess["DB"].isNull())
			itemsObject.dB = valueItemsProcess["DB"].asString();
		if(!valueItemsProcess["Command"].isNull())
			itemsObject.command = valueItemsProcess["Command"].asString();
		if(!valueItemsProcess["User"].isNull())
			itemsObject.user = valueItemsProcess["User"].asString();
		if(!valueItemsProcess["Id"].isNull())
			itemsObject.id = std::stoi(valueItemsProcess["Id"].asString());
		if(!valueItemsProcess["Info"].isNull())
			itemsObject.info = valueItemsProcess["Info"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();

}

std::string DescribeProcessListResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeProcessListResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeProcessListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeProcessListResult::Process> DescribeProcessListResult::getItems()const
{
	return items_;
}

