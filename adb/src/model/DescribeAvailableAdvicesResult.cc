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

#include <alibabacloud/adb/model/DescribeAvailableAdvicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeAvailableAdvicesResult::DescribeAvailableAdvicesResult() :
	ServiceResult()
{}

DescribeAvailableAdvicesResult::DescribeAvailableAdvicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableAdvicesResult::~DescribeAvailableAdvicesResult()
{}

void DescribeAvailableAdvicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["AdviceId"].isNull())
			itemsObject.adviceId = valueItemsItemsItem["AdviceId"].asString();
		if(!valueItemsItemsItem["AdviceDate"].isNull())
			itemsObject.adviceDate = valueItemsItemsItem["AdviceDate"].asString();
		if(!valueItemsItemsItem["AdviceType"].isNull())
			itemsObject.adviceType = valueItemsItemsItem["AdviceType"].asString();
		if(!valueItemsItemsItem["SQL"].isNull())
			itemsObject.sQL = valueItemsItemsItem["SQL"].asString();
		if(!valueItemsItemsItem["Reason"].isNull())
			itemsObject.reason = valueItemsItemsItem["Reason"].asString();
		if(!valueItemsItemsItem["Benefit"].isNull())
			itemsObject.benefit = valueItemsItemsItem["Benefit"].asString();
		if(!valueItemsItemsItem["TotalCount"].isNull())
			itemsObject.totalCount = std::stol(valueItemsItemsItem["TotalCount"].asString());
		if(!valueItemsItemsItem["PageSize"].isNull())
			itemsObject.pageSize = std::stol(valueItemsItemsItem["PageSize"].asString());
		if(!valueItemsItemsItem["PageNumber"].isNull())
			itemsObject.pageNumber = std::stol(valueItemsItemsItem["PageNumber"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeAvailableAdvicesResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeAvailableAdvicesResult::getPageSize()const
{
	return pageSize_;
}

long DescribeAvailableAdvicesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAvailableAdvicesResult::ItemsItem> DescribeAvailableAdvicesResult::getItems()const
{
	return items_;
}

