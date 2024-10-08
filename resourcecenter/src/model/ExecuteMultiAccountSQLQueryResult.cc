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

#include <alibabacloud/resourcecenter/model/ExecuteMultiAccountSQLQueryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

ExecuteMultiAccountSQLQueryResult::ExecuteMultiAccountSQLQueryResult() :
	ServiceResult()
{}

ExecuteMultiAccountSQLQueryResult::ExecuteMultiAccountSQLQueryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExecuteMultiAccountSQLQueryResult::~ExecuteMultiAccountSQLQueryResult()
{}

void ExecuteMultiAccountSQLQueryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allColumnsNode = value["Columns"]["Column"];
	for (auto valueColumnsColumn : allColumnsNode)
	{
		Column columnsObject;
		if(!valueColumnsColumn["Name"].isNull())
			columnsObject.name = valueColumnsColumn["Name"].asString();
		if(!valueColumnsColumn["Type"].isNull())
			columnsObject.type = valueColumnsColumn["Type"].asString();
		columns_.push_back(columnsObject);
	}
	auto allRows = value["Rows"]["Row"];
	for (const auto &item : allRows)
		rows_.push_back(item.asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ExecuteMultiAccountSQLQueryResult::getNextToken()const
{
	return nextToken_;
}

int ExecuteMultiAccountSQLQueryResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ExecuteMultiAccountSQLQueryResult::Column> ExecuteMultiAccountSQLQueryResult::getColumns()const
{
	return columns_;
}

std::vector<std::string> ExecuteMultiAccountSQLQueryResult::getRows()const
{
	return rows_;
}

