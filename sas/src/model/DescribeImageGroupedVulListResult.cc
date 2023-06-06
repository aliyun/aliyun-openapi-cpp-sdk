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

#include <alibabacloud/sas/model/DescribeImageGroupedVulListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageGroupedVulListResult::DescribeImageGroupedVulListResult() :
	ServiceResult()
{}

DescribeImageGroupedVulListResult::DescribeImageGroupedVulListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageGroupedVulListResult::~DescribeImageGroupedVulListResult()
{}

void DescribeImageGroupedVulListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupedVulItemsNode = value["GroupedVulItems"]["GroupedVulItem"];
	for (auto valueGroupedVulItemsGroupedVulItem : allGroupedVulItemsNode)
	{
		GroupedVulItem groupedVulItemsObject;
		if(!valueGroupedVulItemsGroupedVulItem["Status"].isNull())
			groupedVulItemsObject.status = std::stoi(valueGroupedVulItemsGroupedVulItem["Status"].asString());
		if(!valueGroupedVulItemsGroupedVulItem["Type"].isNull())
			groupedVulItemsObject.type = valueGroupedVulItemsGroupedVulItem["Type"].asString();
		if(!valueGroupedVulItemsGroupedVulItem["NntfCount"].isNull())
			groupedVulItemsObject.nntfCount = std::stoi(valueGroupedVulItemsGroupedVulItem["NntfCount"].asString());
		if(!valueGroupedVulItemsGroupedVulItem["GmtLast"].isNull())
			groupedVulItemsObject.gmtLast = std::stol(valueGroupedVulItemsGroupedVulItem["GmtLast"].asString());
		if(!valueGroupedVulItemsGroupedVulItem["LastScanTime"].isNull())
			groupedVulItemsObject.lastScanTime = std::stol(valueGroupedVulItemsGroupedVulItem["LastScanTime"].asString());
		if(!valueGroupedVulItemsGroupedVulItem["Tags"].isNull())
			groupedVulItemsObject.tags = valueGroupedVulItemsGroupedVulItem["Tags"].asString();
		if(!valueGroupedVulItemsGroupedVulItem["LaterCount"].isNull())
			groupedVulItemsObject.laterCount = std::stoi(valueGroupedVulItemsGroupedVulItem["LaterCount"].asString());
		if(!valueGroupedVulItemsGroupedVulItem["AliasName"].isNull())
			groupedVulItemsObject.aliasName = valueGroupedVulItemsGroupedVulItem["AliasName"].asString();
		if(!valueGroupedVulItemsGroupedVulItem["Name"].isNull())
			groupedVulItemsObject.name = valueGroupedVulItemsGroupedVulItem["Name"].asString();
		if(!valueGroupedVulItemsGroupedVulItem["AsapCount"].isNull())
			groupedVulItemsObject.asapCount = std::stoi(valueGroupedVulItemsGroupedVulItem["AsapCount"].asString());
		if(!valueGroupedVulItemsGroupedVulItem["CanFix"].isNull())
			groupedVulItemsObject.canFix = valueGroupedVulItemsGroupedVulItem["CanFix"].asString();
		groupedVulItems_.push_back(groupedVulItemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeImageGroupedVulListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeImageGroupedVulListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeImageGroupedVulListResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeImageGroupedVulListResult::GroupedVulItem> DescribeImageGroupedVulListResult::getGroupedVulItems()const
{
	return groupedVulItems_;
}

