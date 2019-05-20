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
	auto allItems = value["Items"]["DepartCount"];
	for (auto value : allItems)
	{
		DepartCount itemsObject;
		if(!value["DepartName"].isNull())
			itemsObject.departName = value["DepartName"].asString();
		if(!value["DepartCount"].isNull())
			itemsObject.departCount = std::stol(value["DepartCount"].asString());
		if(!value["Count"].isNull())
			itemsObject.count = std::stol(value["Count"].asString());
		if(!value["UserCount"].isNull())
			itemsObject.userCount = std::stol(value["UserCount"].asString());
		if(!value["DtCount"].isNull())
			itemsObject.dtCount = std::stol(value["DtCount"].asString());
		if(!value["SubCount"].isNull())
			itemsObject.subCount = std::stol(value["SubCount"].asString());
		if(!value["SensitiveCount"].isNull())
			itemsObject.sensitiveCount = std::stol(value["SensitiveCount"].asString());
		if(!value["EventTotalCount"].isNull())
			itemsObject.eventTotalCount = std::stol(value["EventTotalCount"].asString());
		if(!value["ConfirmCount"].isNull())
			itemsObject.confirmCount = std::stol(value["ConfirmCount"].asString());
		if(!value["UserConfirmCount"].isNull())
			itemsObject.userConfirmCount = std::stol(value["UserConfirmCount"].asString());
		if(!value["LastEventCount"].isNull())
			itemsObject.lastEventCount = std::stol(value["LastEventCount"].asString());
		if(!value["TopSubTypeName"].isNull())
			itemsObject.topSubTypeName = std::stol(value["TopSubTypeName"].asString());
		if(!value["TopDisplayName"].isNull())
			itemsObject.topDisplayName = std::stol(value["TopDisplayName"].asString());
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

