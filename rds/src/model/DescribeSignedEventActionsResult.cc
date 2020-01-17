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

#include <alibabacloud/rds/model/DescribeSignedEventActionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSignedEventActionsResult::DescribeSignedEventActionsResult() :
	ServiceResult()
{}

DescribeSignedEventActionsResult::DescribeSignedEventActionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSignedEventActionsResult::~DescribeSignedEventActionsResult()
{}

void DescribeSignedEventActionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventItemsNode = value["EventItems"]["EventItemsItem"];
	for (auto valueEventItemsEventItemsItem : allEventItemsNode)
	{
		EventItemsItem eventItemsObject;
		if(!valueEventItemsEventItemsItem["EventId"].isNull())
			eventItemsObject.eventId = std::stoi(valueEventItemsEventItemsItem["EventId"].asString());
		if(!valueEventItemsEventItemsItem["EventContent"].isNull())
			eventItemsObject.eventContent = valueEventItemsEventItemsItem["EventContent"].asString();
		if(!valueEventItemsEventItemsItem["EventSig"].isNull())
			eventItemsObject.eventSig = valueEventItemsEventItemsItem["EventSig"].asString();
		if(!valueEventItemsEventItemsItem["EventRcpt"].isNull())
			eventItemsObject.eventRcpt = valueEventItemsEventItemsItem["EventRcpt"].asString();
		eventItems_.push_back(eventItemsObject);
	}
	if(!value["NextPageEventId"].isNull())
		nextPageEventId_ = std::stoi(value["NextPageEventId"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["FromBegin"].isNull())
		fromBegin_ = value["FromBegin"].asString() == "true";
	if(!value["ToEnd"].isNull())
		toEnd_ = value["ToEnd"].asString() == "true";

}

std::vector<DescribeSignedEventActionsResult::EventItemsItem> DescribeSignedEventActionsResult::getEventItems()const
{
	return eventItems_;
}

int DescribeSignedEventActionsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

bool DescribeSignedEventActionsResult::getToEnd()const
{
	return toEnd_;
}

bool DescribeSignedEventActionsResult::getFromBegin()const
{
	return fromBegin_;
}

int DescribeSignedEventActionsResult::getNextPageEventId()const
{
	return nextPageEventId_;
}

