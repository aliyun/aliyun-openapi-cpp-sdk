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

#include <alibabacloud/yundun-ds/model/DescribeDepartCountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeDepartCountsResult::DescribeDepartCountsResult() :
	ServiceResult()
{}

DescribeDepartCountsResult::DescribeDepartCountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDepartCountsResult::~DescribeDepartCountsResult()
{}

void DescribeDepartCountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DepartCount"];
	for (auto valueItemsDepartCount : allItemsNode)
	{
		DepartCount itemsObject;
		if(!valueItemsDepartCount["DepartName"].isNull())
			itemsObject.departName = valueItemsDepartCount["DepartName"].asString();
		if(!valueItemsDepartCount["DepartCount"].isNull())
			itemsObject.departCount = std::stol(valueItemsDepartCount["DepartCount"].asString());
		if(!valueItemsDepartCount["Count"].isNull())
			itemsObject.count = std::stol(valueItemsDepartCount["Count"].asString());
		if(!valueItemsDepartCount["UserCount"].isNull())
			itemsObject.userCount = std::stol(valueItemsDepartCount["UserCount"].asString());
		if(!valueItemsDepartCount["DtCount"].isNull())
			itemsObject.dtCount = std::stol(valueItemsDepartCount["DtCount"].asString());
		if(!valueItemsDepartCount["SubCount"].isNull())
			itemsObject.subCount = std::stol(valueItemsDepartCount["SubCount"].asString());
		if(!valueItemsDepartCount["SensitiveCount"].isNull())
			itemsObject.sensitiveCount = std::stol(valueItemsDepartCount["SensitiveCount"].asString());
		if(!valueItemsDepartCount["EventTotalCount"].isNull())
			itemsObject.eventTotalCount = std::stol(valueItemsDepartCount["EventTotalCount"].asString());
		if(!valueItemsDepartCount["ConfirmCount"].isNull())
			itemsObject.confirmCount = std::stol(valueItemsDepartCount["ConfirmCount"].asString());
		if(!valueItemsDepartCount["UserConfirmCount"].isNull())
			itemsObject.userConfirmCount = std::stol(valueItemsDepartCount["UserConfirmCount"].asString());
		if(!valueItemsDepartCount["LastEventCount"].isNull())
			itemsObject.lastEventCount = std::stol(valueItemsDepartCount["LastEventCount"].asString());
		if(!valueItemsDepartCount["TopSubTypeName"].isNull())
			itemsObject.topSubTypeName = std::stol(valueItemsDepartCount["TopSubTypeName"].asString());
		if(!valueItemsDepartCount["TopDisplayName"].isNull())
			itemsObject.topDisplayName = std::stol(valueItemsDepartCount["TopDisplayName"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDepartCountsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDepartCountsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDepartCountsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDepartCountsResult::DepartCount> DescribeDepartCountsResult::getItems()const
{
	return items_;
}

