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

#include <alibabacloud/eventbridge/model/ListAliyunOfficialEventSourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

ListAliyunOfficialEventSourcesResult::ListAliyunOfficialEventSourcesResult() :
	ServiceResult()
{}

ListAliyunOfficialEventSourcesResult::ListAliyunOfficialEventSourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAliyunOfficialEventSourcesResult::~ListAliyunOfficialEventSourcesResult()
{}

void ListAliyunOfficialEventSourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	if(!dataNode["Total"].isNull())
		data_.total = std::stof(dataNode["Total"].asString());
	auto allEventSourceListNode = dataNode["EventSourceList"]["eventSourceListItem"];
	for (auto dataNodeEventSourceListeventSourceListItem : allEventSourceListNode)
	{
		Data::EventSourceListItem eventSourceListItemObject;
		if(!dataNodeEventSourceListeventSourceListItem["Name"].isNull())
			eventSourceListItemObject.name = dataNodeEventSourceListeventSourceListItem["Name"].asString();
		if(!dataNodeEventSourceListeventSourceListItem["FullName"].isNull())
			eventSourceListItemObject.fullName = dataNodeEventSourceListeventSourceListItem["FullName"].asString();
		if(!dataNodeEventSourceListeventSourceListItem["Arn"].isNull())
			eventSourceListItemObject.arn = dataNodeEventSourceListeventSourceListItem["Arn"].asString();
		if(!dataNodeEventSourceListeventSourceListItem["Status"].isNull())
			eventSourceListItemObject.status = dataNodeEventSourceListeventSourceListItem["Status"].asString();
		if(!dataNodeEventSourceListeventSourceListItem["Type"].isNull())
			eventSourceListItemObject.type = dataNodeEventSourceListeventSourceListItem["Type"].asString();
		if(!dataNodeEventSourceListeventSourceListItem["Ctime"].isNull())
			eventSourceListItemObject.ctime = std::stof(dataNodeEventSourceListeventSourceListItem["Ctime"].asString());
		if(!dataNodeEventSourceListeventSourceListItem["Description"].isNull())
			eventSourceListItemObject.description = dataNodeEventSourceListeventSourceListItem["Description"].asString();
		if(!dataNodeEventSourceListeventSourceListItem["EventBusName"].isNull())
			eventSourceListItemObject.eventBusName = dataNodeEventSourceListeventSourceListItem["EventBusName"].asString();
		auto allEventTypesNode = dataNodeEventSourceListeventSourceListItem["EventTypes"]["eventTypesItem"];
		for (auto dataNodeEventSourceListeventSourceListItemEventTypeseventTypesItem : allEventTypesNode)
		{
			Data::EventSourceListItem::EventTypesItem eventTypesObject;
			if(!dataNodeEventSourceListeventSourceListItemEventTypeseventTypesItem["Name"].isNull())
				eventTypesObject.name = dataNodeEventSourceListeventSourceListItemEventTypeseventTypesItem["Name"].asString();
			if(!dataNodeEventSourceListeventSourceListItemEventTypeseventTypesItem["ShortName"].isNull())
				eventTypesObject.shortName = dataNodeEventSourceListeventSourceListItemEventTypeseventTypesItem["ShortName"].asString();
			if(!dataNodeEventSourceListeventSourceListItemEventTypeseventTypesItem["GroupName"].isNull())
				eventTypesObject.groupName = dataNodeEventSourceListeventSourceListItemEventTypeseventTypesItem["GroupName"].asString();
			if(!dataNodeEventSourceListeventSourceListItemEventTypeseventTypesItem["Description"].isNull())
				eventTypesObject.description = dataNodeEventSourceListeventSourceListItemEventTypeseventTypesItem["Description"].asString();
			if(!dataNodeEventSourceListeventSourceListItemEventTypeseventTypesItem["EventSourceName"].isNull())
				eventTypesObject.eventSourceName = dataNodeEventSourceListeventSourceListItemEventTypeseventTypesItem["EventSourceName"].asString();
			eventSourceListItemObject.eventTypes.push_back(eventTypesObject);
		}
		data_.eventSourceList.push_back(eventSourceListItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAliyunOfficialEventSourcesResult::getMessage()const
{
	return message_;
}

ListAliyunOfficialEventSourcesResult::Data ListAliyunOfficialEventSourcesResult::getData()const
{
	return data_;
}

std::string ListAliyunOfficialEventSourcesResult::getCode()const
{
	return code_;
}

bool ListAliyunOfficialEventSourcesResult::getSuccess()const
{
	return success_;
}

