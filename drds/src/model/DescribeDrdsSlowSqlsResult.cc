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

#include <alibabacloud/drds/model/DescribeDrdsSlowSqlsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsSlowSqlsResult::DescribeDrdsSlowSqlsResult() :
	ServiceResult()
{}

DescribeDrdsSlowSqlsResult::DescribeDrdsSlowSqlsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsSlowSqlsResult::~DescribeDrdsSlowSqlsResult()
{}

void DescribeDrdsSlowSqlsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["SendTime"].isNull())
			itemsObject.sendTime = std::stol(valueItemsItem["SendTime"].asString());
		if(!valueItemsItem["Host"].isNull())
			itemsObject.host = valueItemsItem["Host"].asString();
		if(!valueItemsItem["Sql"].isNull())
			itemsObject.sql = valueItemsItem["Sql"].asString();
		if(!valueItemsItem["ResponseTime"].isNull())
			itemsObject.responseTime = std::stol(valueItemsItem["ResponseTime"].asString());
		if(!valueItemsItem["Schema"].isNull())
			itemsObject.schema = valueItemsItem["Schema"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int DescribeDrdsSlowSqlsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDrdsSlowSqlsResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDrdsSlowSqlsResult::getTotal()const
{
	return total_;
}

std::vector<DescribeDrdsSlowSqlsResult::Item> DescribeDrdsSlowSqlsResult::getItems()const
{
	return items_;
}

bool DescribeDrdsSlowSqlsResult::getSuccess()const
{
	return success_;
}

