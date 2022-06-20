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

#include <alibabacloud/sas/model/DescribeEmgVulItemResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeEmgVulItemResult::DescribeEmgVulItemResult() :
	ServiceResult()
{}

DescribeEmgVulItemResult::DescribeEmgVulItemResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEmgVulItemResult::~DescribeEmgVulItemResult()
{}

void DescribeEmgVulItemResult::parse(const std::string &payload)
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
		if(!valueGroupedVulItemsGroupedVulItem["CheckType"].isNull())
			groupedVulItemsObject.checkType = std::stoi(valueGroupedVulItemsGroupedVulItem["CheckType"].asString());
		if(!valueGroupedVulItemsGroupedVulItem["GmtLastCheck"].isNull())
			groupedVulItemsObject.gmtLastCheck = std::stol(valueGroupedVulItemsGroupedVulItem["GmtLastCheck"].asString());
		if(!valueGroupedVulItemsGroupedVulItem["Progress"].isNull())
			groupedVulItemsObject.progress = std::stoi(valueGroupedVulItemsGroupedVulItem["Progress"].asString());
		if(!valueGroupedVulItemsGroupedVulItem["Description"].isNull())
			groupedVulItemsObject.description = valueGroupedVulItemsGroupedVulItem["Description"].asString();
		if(!valueGroupedVulItemsGroupedVulItem["GmtPublish"].isNull())
			groupedVulItemsObject.gmtPublish = std::stol(valueGroupedVulItemsGroupedVulItem["GmtPublish"].asString());
		if(!valueGroupedVulItemsGroupedVulItem["PendingCount"].isNull())
			groupedVulItemsObject.pendingCount = std::stoi(valueGroupedVulItemsGroupedVulItem["PendingCount"].asString());
		if(!valueGroupedVulItemsGroupedVulItem["AliasName"].isNull())
			groupedVulItemsObject.aliasName = valueGroupedVulItemsGroupedVulItem["AliasName"].asString();
		if(!valueGroupedVulItemsGroupedVulItem["Name"].isNull())
			groupedVulItemsObject.name = valueGroupedVulItemsGroupedVulItem["Name"].asString();
		groupedVulItems_.push_back(groupedVulItemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEmgVulItemResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeEmgVulItemResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEmgVulItemResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeEmgVulItemResult::GroupedVulItem> DescribeEmgVulItemResult::getGroupedVulItems()const
{
	return groupedVulItems_;
}

