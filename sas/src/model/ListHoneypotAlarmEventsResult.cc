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

#include <alibabacloud/sas/model/ListHoneypotAlarmEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListHoneypotAlarmEventsResult::ListHoneypotAlarmEventsResult() :
	ServiceResult()
{}

ListHoneypotAlarmEventsResult::ListHoneypotAlarmEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHoneypotAlarmEventsResult::~ListHoneypotAlarmEventsResult()
{}

void ListHoneypotAlarmEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHoneypotAlarmEventsNode = value["HoneypotAlarmEvents"]["HoneypotAlarmEvent"];
	for (auto valueHoneypotAlarmEventsHoneypotAlarmEvent : allHoneypotAlarmEventsNode)
	{
		HoneypotAlarmEvent honeypotAlarmEventsObject;
		if(!valueHoneypotAlarmEventsHoneypotAlarmEvent["AlarmEventId"].isNull())
			honeypotAlarmEventsObject.alarmEventId = std::stol(valueHoneypotAlarmEventsHoneypotAlarmEvent["AlarmEventId"].asString());
		if(!valueHoneypotAlarmEventsHoneypotAlarmEvent["AlarmEventType"].isNull())
			honeypotAlarmEventsObject.alarmEventType = valueHoneypotAlarmEventsHoneypotAlarmEvent["AlarmEventType"].asString();
		if(!valueHoneypotAlarmEventsHoneypotAlarmEvent["AlarmEventName"].isNull())
			honeypotAlarmEventsObject.alarmEventName = valueHoneypotAlarmEventsHoneypotAlarmEvent["AlarmEventName"].asString();
		if(!valueHoneypotAlarmEventsHoneypotAlarmEvent["AlarmUniqueInfo"].isNull())
			honeypotAlarmEventsObject.alarmUniqueInfo = valueHoneypotAlarmEventsHoneypotAlarmEvent["AlarmUniqueInfo"].asString();
		if(!valueHoneypotAlarmEventsHoneypotAlarmEvent["FirstTime"].isNull())
			honeypotAlarmEventsObject.firstTime = std::stol(valueHoneypotAlarmEventsHoneypotAlarmEvent["FirstTime"].asString());
		if(!valueHoneypotAlarmEventsHoneypotAlarmEvent["LastTime"].isNull())
			honeypotAlarmEventsObject.lastTime = std::stol(valueHoneypotAlarmEventsHoneypotAlarmEvent["LastTime"].asString());
		if(!valueHoneypotAlarmEventsHoneypotAlarmEvent["RiskLevel"].isNull())
			honeypotAlarmEventsObject.riskLevel = valueHoneypotAlarmEventsHoneypotAlarmEvent["RiskLevel"].asString();
		if(!valueHoneypotAlarmEventsHoneypotAlarmEvent["EventCount"].isNull())
			honeypotAlarmEventsObject.eventCount = std::stoi(valueHoneypotAlarmEventsHoneypotAlarmEvent["EventCount"].asString());
		if(!valueHoneypotAlarmEventsHoneypotAlarmEvent["OperateStatus"].isNull())
			honeypotAlarmEventsObject.operateStatus = std::stoi(valueHoneypotAlarmEventsHoneypotAlarmEvent["OperateStatus"].asString());
		auto allMergeFieldListNode = valueHoneypotAlarmEventsHoneypotAlarmEvent["MergeFieldList"]["MergeFieldListItem"];
		for (auto valueHoneypotAlarmEventsHoneypotAlarmEventMergeFieldListMergeFieldListItem : allMergeFieldListNode)
		{
			HoneypotAlarmEvent::MergeFieldListItem mergeFieldListObject;
			if(!valueHoneypotAlarmEventsHoneypotAlarmEventMergeFieldListMergeFieldListItem["FieldType"].isNull())
				mergeFieldListObject.fieldType = valueHoneypotAlarmEventsHoneypotAlarmEventMergeFieldListMergeFieldListItem["FieldType"].asString();
			if(!valueHoneypotAlarmEventsHoneypotAlarmEventMergeFieldListMergeFieldListItem["FieldKey"].isNull())
				mergeFieldListObject.fieldKey = valueHoneypotAlarmEventsHoneypotAlarmEventMergeFieldListMergeFieldListItem["FieldKey"].asString();
			if(!valueHoneypotAlarmEventsHoneypotAlarmEventMergeFieldListMergeFieldListItem["FieldValue"].isNull())
				mergeFieldListObject.fieldValue = valueHoneypotAlarmEventsHoneypotAlarmEventMergeFieldListMergeFieldListItem["FieldValue"].asString();
			if(!valueHoneypotAlarmEventsHoneypotAlarmEventMergeFieldListMergeFieldListItem["FieldExtInfo"].isNull())
				mergeFieldListObject.fieldExtInfo = valueHoneypotAlarmEventsHoneypotAlarmEventMergeFieldListMergeFieldListItem["FieldExtInfo"].asString();
			honeypotAlarmEventsObject.mergeFieldList.push_back(mergeFieldListObject);
		}
		honeypotAlarmEvents_.push_back(honeypotAlarmEventsObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["LastRowKey"].isNull())
		pageInfo_.lastRowKey = pageInfoNode["LastRowKey"].asString();
	if(!pageInfoNode["NextToken"].isNull())
		pageInfo_.nextToken = pageInfoNode["NextToken"].asString();

}

ListHoneypotAlarmEventsResult::PageInfo ListHoneypotAlarmEventsResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<ListHoneypotAlarmEventsResult::HoneypotAlarmEvent> ListHoneypotAlarmEventsResult::getHoneypotAlarmEvents()const
{
	return honeypotAlarmEvents_;
}

