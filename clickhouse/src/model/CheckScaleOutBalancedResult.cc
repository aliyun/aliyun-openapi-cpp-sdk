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

#include <alibabacloud/clickhouse/model/CheckScaleOutBalancedResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

CheckScaleOutBalancedResult::CheckScaleOutBalancedResult() :
	ServiceResult()
{}

CheckScaleOutBalancedResult::CheckScaleOutBalancedResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckScaleOutBalancedResult::~CheckScaleOutBalancedResult()
{}

void CheckScaleOutBalancedResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTableDetailsNode = value["TableDetails"]["TableDetail"];
	for (auto valueTableDetailsTableDetail : allTableDetailsNode)
	{
		TableDetail tableDetailsObject;
		if(!valueTableDetailsTableDetail["TableName"].isNull())
			tableDetailsObject.tableName = valueTableDetailsTableDetail["TableName"].asString();
		if(!valueTableDetailsTableDetail["Cluster"].isNull())
			tableDetailsObject.cluster = valueTableDetailsTableDetail["Cluster"].asString();
		if(!valueTableDetailsTableDetail["Database"].isNull())
			tableDetailsObject.database = valueTableDetailsTableDetail["Database"].asString();
		if(!valueTableDetailsTableDetail["Detail"].isNull())
			tableDetailsObject.detail = std::stoi(valueTableDetailsTableDetail["Detail"].asString());
		tableDetails_.push_back(tableDetailsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["CheckCode"].isNull())
		checkCode_ = value["CheckCode"].asString();
	if(!value["TimeDuration"].isNull())
		timeDuration_ = value["TimeDuration"].asString();

}

std::vector<CheckScaleOutBalancedResult::TableDetail> CheckScaleOutBalancedResult::getTableDetails()const
{
	return tableDetails_;
}

int CheckScaleOutBalancedResult::getTotalCount()const
{
	return totalCount_;
}

int CheckScaleOutBalancedResult::getPageSize()const
{
	return pageSize_;
}

int CheckScaleOutBalancedResult::getPageNumber()const
{
	return pageNumber_;
}

std::string CheckScaleOutBalancedResult::getCheckCode()const
{
	return checkCode_;
}

std::string CheckScaleOutBalancedResult::getTimeDuration()const
{
	return timeDuration_;
}

