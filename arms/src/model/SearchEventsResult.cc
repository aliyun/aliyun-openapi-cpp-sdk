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

#include <alibabacloud/arms/model/SearchEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

SearchEventsResult::SearchEventsResult() :
	ServiceResult()
{}

SearchEventsResult::SearchEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchEventsResult::~SearchEventsResult()
{}

void SearchEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["PageNumber"].isNull())
		pageBean_.pageNumber = std::stoi(pageBeanNode["PageNumber"].asString());
	if(!pageBeanNode["PageSize"].isNull())
		pageBean_.pageSize = std::stoi(pageBeanNode["PageSize"].asString());
	if(!pageBeanNode["TotalCount"].isNull())
		pageBean_.totalCount = std::stoi(pageBeanNode["TotalCount"].asString());
	auto allEventNode = pageBeanNode["Event"]["EventItem"];
	for (auto pageBeanNodeEventEventItem : allEventNode)
	{
		PageBean::EventItem eventItemObject;
		if(!pageBeanNodeEventEventItem["EventTime"].isNull())
			eventItemObject.eventTime = std::stol(pageBeanNodeEventEventItem["EventTime"].asString());
		if(!pageBeanNodeEventEventItem["EventLevel"].isNull())
			eventItemObject.eventLevel = pageBeanNodeEventEventItem["EventLevel"].asString();
		if(!pageBeanNodeEventEventItem["AlertRule"].isNull())
			eventItemObject.alertRule = pageBeanNodeEventEventItem["AlertRule"].asString();
		if(!pageBeanNodeEventEventItem["Message"].isNull())
			eventItemObject.message = pageBeanNodeEventEventItem["Message"].asString();
		if(!pageBeanNodeEventEventItem["AlertType"].isNull())
			eventItemObject.alertType = std::stoi(pageBeanNodeEventEventItem["AlertType"].asString());
		if(!pageBeanNodeEventEventItem["AlertName"].isNull())
			eventItemObject.alertName = pageBeanNodeEventEventItem["AlertName"].asString();
		if(!pageBeanNodeEventEventItem["Id"].isNull())
			eventItemObject.id = std::stol(pageBeanNodeEventEventItem["Id"].asString());
		if(!pageBeanNodeEventEventItem["AlertId"].isNull())
			eventItemObject.alertId = std::stol(pageBeanNodeEventEventItem["AlertId"].asString());
		auto allLinks = value["Links"]["Link"];
		for (auto value : allLinks)
			eventItemObject.links.push_back(value.asString());
		pageBean_.event.push_back(eventItemObject);
	}
	if(!value["IsTrigger"].isNull())
		isTrigger_ = std::stoi(value["IsTrigger"].asString());

}

SearchEventsResult::PageBean SearchEventsResult::getPageBean()const
{
	return pageBean_;
}

int SearchEventsResult::getIsTrigger()const
{
	return isTrigger_;
}

