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

#include <alibabacloud/cusanalytic_sc_online/model/ListVisitorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

ListVisitorsResult::ListVisitorsResult() :
	ServiceResult()
{}

ListVisitorsResult::ListVisitorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVisitorsResult::~ListVisitorsResult()
{}

void ListVisitorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allVisitorItems = value["VisitorItems"]["VisitorItem"];
	for (auto value : allVisitorItems)
	{
		VisitorItem visitorItemsObject;
		if(!value["Img"].isNull())
			visitorItemsObject.img = value["Img"].asString();
		if(!value["PkId"].isNull())
			visitorItemsObject.pkId = value["PkId"].asString();
		if(!value["LatelyTime"].isNull())
			visitorItemsObject.latelyTime = std::stol(value["LatelyTime"].asString());
		if(!value["EarliestPlace"].isNull())
			visitorItemsObject.earliestPlace = value["EarliestPlace"].asString();
		if(!value["UkId"].isNull())
			visitorItemsObject.ukId = value["UkId"].asString();
		if(!value["Gender"].isNull())
			visitorItemsObject.gender = value["Gender"].asString();
		if(!value["EarliestTime"].isNull())
			visitorItemsObject.earliestTime = std::stol(value["EarliestTime"].asString());
		if(!value["LatelyPlace"].isNull())
			visitorItemsObject.latelyPlace = value["LatelyPlace"].asString();
		if(!value["Age"].isNull())
			visitorItemsObject.age = std::stol(value["Age"].asString());
		if(!value["StoreId"].isNull())
			visitorItemsObject.storeId = std::stol(value["StoreId"].asString());
		if(!value["EnterCount"].isNull())
			visitorItemsObject.enterCount = std::stol(value["EnterCount"].asString());
		visitorItems_.push_back(visitorItemsObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());
	if(!value["PageIndex"].isNull())
		pageIndex_ = std::stoi(value["PageIndex"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListVisitorsResult::getPageSize()const
{
	return pageSize_;
}

long ListVisitorsResult::getTotal()const
{
	return total_;
}

std::vector<ListVisitorsResult::VisitorItem> ListVisitorsResult::getVisitorItems()const
{
	return visitorItems_;
}

int ListVisitorsResult::getPageIndex()const
{
	return pageIndex_;
}

