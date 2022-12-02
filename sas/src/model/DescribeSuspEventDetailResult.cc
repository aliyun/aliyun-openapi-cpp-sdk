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

#include <alibabacloud/sas/model/DescribeSuspEventDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeSuspEventDetailResult::DescribeSuspEventDetailResult() :
	ServiceResult()
{}

DescribeSuspEventDetailResult::DescribeSuspEventDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSuspEventDetailResult::~DescribeSuspEventDetailResult()
{}

void DescribeSuspEventDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDetailsNode = value["Details"]["QuaraFile"];
	for (auto valueDetailsQuaraFile : allDetailsNode)
	{
		QuaraFile detailsObject;
		if(!valueDetailsQuaraFile["Type"].isNull())
			detailsObject.type = valueDetailsQuaraFile["Type"].asString();
		if(!valueDetailsQuaraFile["Value"].isNull())
			detailsObject.value = valueDetailsQuaraFile["Value"].asString();
		if(!valueDetailsQuaraFile["ValueDisplay"].isNull())
			detailsObject.valueDisplay = valueDetailsQuaraFile["ValueDisplay"].asString();
		if(!valueDetailsQuaraFile["InfoType"].isNull())
			detailsObject.infoType = valueDetailsQuaraFile["InfoType"].asString();
		if(!valueDetailsQuaraFile["NameDisplay"].isNull())
			detailsObject.nameDisplay = valueDetailsQuaraFile["NameDisplay"].asString();
		if(!valueDetailsQuaraFile["Name"].isNull())
			detailsObject.name = valueDetailsQuaraFile["Name"].asString();
		details_.push_back(detailsObject);
	}
	auto allEventNotesNode = value["EventNotes"]["EventNote"];
	for (auto valueEventNotesEventNote : allEventNotesNode)
	{
		EventNote eventNotesObject;
		if(!valueEventNotesEventNote["Note"].isNull())
			eventNotesObject.note = valueEventNotesEventNote["Note"].asString();
		if(!valueEventNotesEventNote["NoteId"].isNull())
			eventNotesObject.noteId = std::stol(valueEventNotesEventNote["NoteId"].asString());
		if(!valueEventNotesEventNote["NoteTime"].isNull())
			eventNotesObject.noteTime = valueEventNotesEventNote["NoteTime"].asString();
		eventNotes_.push_back(eventNotesObject);
	}
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["DataSource"].isNull())
		dataSource_ = value["DataSource"].asString();
	if(!value["EventName"].isNull())
		eventName_ = value["EventName"].asString();
	if(!value["InternetIp"].isNull())
		internetIp_ = value["InternetIp"].asString();
	if(!value["AlarmUniqueInfo"].isNull())
		alarmUniqueInfo_ = value["AlarmUniqueInfo"].asString();
	if(!value["IntranetIp"].isNull())
		intranetIp_ = value["IntranetIp"].asString();
	if(!value["LastTime"].isNull())
		lastTime_ = value["LastTime"].asString();
	if(!value["OperateMsg"].isNull())
		operateMsg_ = value["OperateMsg"].asString();
	if(!value["Uuid"].isNull())
		uuid_ = value["Uuid"].asString();
	if(!value["CanBeDealOnLine"].isNull())
		canBeDealOnLine_ = value["CanBeDealOnLine"].asString() == "true";
	if(!value["AccessCode"].isNull())
		accessCode_ = value["AccessCode"].asString();
	if(!value["EventTypeDesc"].isNull())
		eventTypeDesc_ = value["EventTypeDesc"].asString();
	if(!value["EventDesc"].isNull())
		eventDesc_ = value["EventDesc"].asString();
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["EventStatus"].isNull())
		eventStatus_ = value["EventStatus"].asString();
	if(!value["SaleVersion"].isNull())
		saleVersion_ = value["SaleVersion"].asString();
	if(!value["OperateErrorCode"].isNull())
		operateErrorCode_ = value["OperateErrorCode"].asString();
	if(!value["SasId"].isNull())
		sasId_ = value["SasId"].asString();
	if(!value["Level"].isNull())
		level_ = value["Level"].asString();
	if(!value["Id"].isNull())
		id_ = std::stoi(value["Id"].asString());

}

std::string DescribeSuspEventDetailResult::getEventDesc()const
{
	return eventDesc_;
}

std::string DescribeSuspEventDetailResult::getEventTypeDesc()const
{
	return eventTypeDesc_;
}

std::string DescribeSuspEventDetailResult::getOperateErrorCode()const
{
	return operateErrorCode_;
}

std::string DescribeSuspEventDetailResult::getEventStatus()const
{
	return eventStatus_;
}

std::string DescribeSuspEventDetailResult::getAccessCode()const
{
	return accessCode_;
}

std::vector<DescribeSuspEventDetailResult::EventNote> DescribeSuspEventDetailResult::getEventNotes()const
{
	return eventNotes_;
}

std::string DescribeSuspEventDetailResult::getEventName()const
{
	return eventName_;
}

std::string DescribeSuspEventDetailResult::getSaleVersion()const
{
	return saleVersion_;
}

std::string DescribeSuspEventDetailResult::getIntranetIp()const
{
	return intranetIp_;
}

std::string DescribeSuspEventDetailResult::getDataSource()const
{
	return dataSource_;
}

std::string DescribeSuspEventDetailResult::getInstanceName()const
{
	return instanceName_;
}

std::string DescribeSuspEventDetailResult::getType()const
{
	return type_;
}

std::string DescribeSuspEventDetailResult::getOperateMsg()const
{
	return operateMsg_;
}

bool DescribeSuspEventDetailResult::getCanBeDealOnLine()const
{
	return canBeDealOnLine_;
}

std::vector<DescribeSuspEventDetailResult::QuaraFile> DescribeSuspEventDetailResult::getDetails()const
{
	return details_;
}

std::string DescribeSuspEventDetailResult::getUuid()const
{
	return uuid_;
}

std::string DescribeSuspEventDetailResult::getInternetIp()const
{
	return internetIp_;
}

std::string DescribeSuspEventDetailResult::getAlarmUniqueInfo()const
{
	return alarmUniqueInfo_;
}

std::string DescribeSuspEventDetailResult::getLevel()const
{
	return level_;
}

int DescribeSuspEventDetailResult::getId()const
{
	return id_;
}

std::string DescribeSuspEventDetailResult::getLastTime()const
{
	return lastTime_;
}

std::string DescribeSuspEventDetailResult::getSasId()const
{
	return sasId_;
}

