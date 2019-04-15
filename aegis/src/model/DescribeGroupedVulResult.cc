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

#include <alibabacloud/aegis/model/DescribeGroupedVulResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeGroupedVulResult::DescribeGroupedVulResult() :
	ServiceResult()
{}

DescribeGroupedVulResult::DescribeGroupedVulResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupedVulResult::~DescribeGroupedVulResult()
{}

void DescribeGroupedVulResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allGroupedVulItems = value["GroupedVulItems"]["GroupedVulItem"];
	for (auto value : allGroupedVulItems)
	{
		GroupedVulItem groupedVulItemsObject;
		if(!value["Name"].isNull())
			groupedVulItemsObject.name = value["Name"].asString();
		if(!value["AliasName"].isNull())
			groupedVulItemsObject.aliasName = value["AliasName"].asString();
		if(!value["Type"].isNull())
			groupedVulItemsObject.type = value["Type"].asString();
		if(!value["Status"].isNull())
			groupedVulItemsObject.status = std::stoi(value["Status"].asString());
		if(!value["GmtLast"].isNull())
			groupedVulItemsObject.gmtLast = std::stol(value["GmtLast"].asString());
		if(!value["AsapCount"].isNull())
			groupedVulItemsObject.asapCount = std::stoi(value["AsapCount"].asString());
		if(!value["LaterCount"].isNull())
			groupedVulItemsObject.laterCount = std::stoi(value["LaterCount"].asString());
		if(!value["NntfCount"].isNull())
			groupedVulItemsObject.nntfCount = std::stoi(value["NntfCount"].asString());
		if(!value["HandledCount"].isNull())
			groupedVulItemsObject.handledCount = std::stoi(value["HandledCount"].asString());
		groupedVulItems_.push_back(groupedVulItemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeGroupedVulResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeGroupedVulResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGroupedVulResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeGroupedVulResult::GroupedVulItem> DescribeGroupedVulResult::getGroupedVulItems()const
{
	return groupedVulItems_;
}

