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
	auto allVisitorItemsNode = value["VisitorItems"]["VisitorItem"];
	for (auto valueVisitorItemsVisitorItem : allVisitorItemsNode)
	{
		VisitorItem visitorItemsObject;
		if(!valueVisitorItemsVisitorItem["Img"].isNull())
			visitorItemsObject.img = valueVisitorItemsVisitorItem["Img"].asString();
		if(!valueVisitorItemsVisitorItem["PkId"].isNull())
			visitorItemsObject.pkId = valueVisitorItemsVisitorItem["PkId"].asString();
		if(!valueVisitorItemsVisitorItem["LatelyTime"].isNull())
			visitorItemsObject.latelyTime = std::stol(valueVisitorItemsVisitorItem["LatelyTime"].asString());
		if(!valueVisitorItemsVisitorItem["EarliestPlace"].isNull())
			visitorItemsObject.earliestPlace = valueVisitorItemsVisitorItem["EarliestPlace"].asString();
		if(!valueVisitorItemsVisitorItem["UkId"].isNull())
			visitorItemsObject.ukId = valueVisitorItemsVisitorItem["UkId"].asString();
		if(!valueVisitorItemsVisitorItem["Gender"].isNull())
			visitorItemsObject.gender = valueVisitorItemsVisitorItem["Gender"].asString();
		if(!valueVisitorItemsVisitorItem["EarliestTime"].isNull())
			visitorItemsObject.earliestTime = std::stol(valueVisitorItemsVisitorItem["EarliestTime"].asString());
		if(!valueVisitorItemsVisitorItem["LatelyPlace"].isNull())
			visitorItemsObject.latelyPlace = valueVisitorItemsVisitorItem["LatelyPlace"].asString();
		if(!valueVisitorItemsVisitorItem["Age"].isNull())
			visitorItemsObject.age = std::stol(valueVisitorItemsVisitorItem["Age"].asString());
		if(!valueVisitorItemsVisitorItem["StoreId"].isNull())
			visitorItemsObject.storeId = std::stol(valueVisitorItemsVisitorItem["StoreId"].asString());
		if(!valueVisitorItemsVisitorItem["EnterCount"].isNull())
			visitorItemsObject.enterCount = std::stol(valueVisitorItemsVisitorItem["EnterCount"].asString());
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

