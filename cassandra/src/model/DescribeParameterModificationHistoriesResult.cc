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

#include <alibabacloud/cassandra/model/DescribeParameterModificationHistoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeParameterModificationHistoriesResult::DescribeParameterModificationHistoriesResult() :
	ServiceResult()
{}

DescribeParameterModificationHistoriesResult::DescribeParameterModificationHistoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParameterModificationHistoriesResult::~DescribeParameterModificationHistoriesResult()
{}

void DescribeParameterModificationHistoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHistoriesNode = value["Histories"]["History"];
	for (auto valueHistoriesHistory : allHistoriesNode)
	{
		History historiesObject;
		if(!valueHistoriesHistory["Name"].isNull())
			historiesObject.name = valueHistoriesHistory["Name"].asString();
		if(!valueHistoriesHistory["OldValue"].isNull())
			historiesObject.oldValue = valueHistoriesHistory["OldValue"].asString();
		if(!valueHistoriesHistory["NewValue"].isNull())
			historiesObject.newValue = valueHistoriesHistory["NewValue"].asString();
		if(!valueHistoriesHistory["Time"].isNull())
			historiesObject.time = std::stol(valueHistoriesHistory["Time"].asString());
		histories_.push_back(historiesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeParameterModificationHistoriesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeParameterModificationHistoriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeParameterModificationHistoriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeParameterModificationHistoriesResult::History> DescribeParameterModificationHistoriesResult::getHistories()const
{
	return histories_;
}

