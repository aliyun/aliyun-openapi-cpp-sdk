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

#include <alibabacloud/sddp/model/DescribeDepartsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeDepartsResult::DescribeDepartsResult() :
	ServiceResult()
{}

DescribeDepartsResult::DescribeDepartsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDepartsResult::~DescribeDepartsResult()
{}

void DescribeDepartsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Depart"];
	for (auto value : allItems)
	{
		Depart itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stol(value["Id"].asString());
		if(!value["DepartId"].isNull())
			itemsObject.departId = std::stol(value["DepartId"].asString());
		if(!value["DepartName"].isNull())
			itemsObject.departName = value["DepartName"].asString();
		if(!value["Comment"].isNull())
			itemsObject.comment = value["Comment"].asString();
		if(!value["ParentDepartId"].isNull())
			itemsObject.parentDepartId = std::stol(value["ParentDepartId"].asString());
		if(!value["ParentDepartName"].isNull())
			itemsObject.parentDepartName = value["ParentDepartName"].asString();
		if(!value["Level"].isNull())
			itemsObject.level = std::stoi(value["Level"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDepartsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDepartsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDepartsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDepartsResult::Depart> DescribeDepartsResult::getItems()const
{
	return items_;
}

