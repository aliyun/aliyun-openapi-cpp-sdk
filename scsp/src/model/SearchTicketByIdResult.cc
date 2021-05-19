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

#include <alibabacloud/scsp/model/SearchTicketByIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

SearchTicketByIdResult::SearchTicketByIdResult() :
	ServiceResult()
{}

SearchTicketByIdResult::SearchTicketByIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchTicketByIdResult::~SearchTicketByIdResult()
{}

void SearchTicketByIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CarbonCopy"].isNull())
		data_.carbonCopy = dataNode["CarbonCopy"].asString();
	if(!dataNode["MemberName"].isNull())
		data_.memberName = dataNode["MemberName"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["ServiceId"].isNull())
		data_.serviceId = std::stol(dataNode["ServiceId"].asString());
	if(!dataNode["TicketId"].isNull())
		data_.ticketId = std::stol(dataNode["TicketId"].asString());
	if(!dataNode["Priority"].isNull())
		data_.priority = std::stoi(dataNode["Priority"].asString());
	if(!dataNode["CreatorId"].isNull())
		data_.creatorId = std::stol(dataNode["CreatorId"].asString());
	if(!dataNode["FormData"].isNull())
		data_.formData = dataNode["FormData"].asString();
	if(!dataNode["FromInfo"].isNull())
		data_.fromInfo = dataNode["FromInfo"].asString();
	if(!dataNode["ModifiedTime"].isNull())
		data_.modifiedTime = std::stol(dataNode["ModifiedTime"].asString());
	if(!dataNode["CreatorName"].isNull())
		data_.creatorName = dataNode["CreatorName"].asString();
	if(!dataNode["CategoryId"].isNull())
		data_.categoryId = std::stol(dataNode["CategoryId"].asString());
	if(!dataNode["CreatorType"].isNull())
		data_.creatorType = std::stoi(dataNode["CreatorType"].asString());
	if(!dataNode["MemberId"].isNull())
		data_.memberId = std::stol(dataNode["MemberId"].asString());
	if(!dataNode["CaseStatus"].isNull())
		data_.caseStatus = std::stoi(dataNode["CaseStatus"].asString());
	if(!dataNode["TemplateId"].isNull())
		data_.templateId = std::stol(dataNode["TemplateId"].asString());
	if(!dataNode["TicketName"].isNull())
		data_.ticketName = dataNode["TicketName"].asString();
	auto allActivitiesNode = dataNode["Activities"]["ActivitiesItem"];
	for (auto dataNodeActivitiesActivitiesItem : allActivitiesNode)
	{
		Data::ActivitiesItem activitiesItemObject;
		if(!dataNodeActivitiesActivitiesItem["ActivityFormData"].isNull())
			activitiesItemObject.activityFormData = dataNodeActivitiesActivitiesItem["ActivityFormData"].asString();
		if(!dataNodeActivitiesActivitiesItem["ActivityCode"].isNull())
			activitiesItemObject.activityCode = dataNodeActivitiesActivitiesItem["ActivityCode"].asString();
		data_.activities.push_back(activitiesItemObject);
	}
	auto allActivityRecordsNode = dataNode["ActivityRecords"]["ActivityRecordsItem"];
	for (auto dataNodeActivityRecordsActivityRecordsItem : allActivityRecordsNode)
	{
		Data::ActivityRecordsItem activityRecordsItemObject;
		if(!dataNodeActivityRecordsActivityRecordsItem["ActionCode"].isNull())
			activityRecordsItemObject.actionCode = dataNodeActivityRecordsActivityRecordsItem["ActionCode"].asString();
		if(!dataNodeActivityRecordsActivityRecordsItem["ActionCodeDesc"].isNull())
			activityRecordsItemObject.actionCodeDesc = dataNodeActivityRecordsActivityRecordsItem["ActionCodeDesc"].asString();
		if(!dataNodeActivityRecordsActivityRecordsItem["OperatorName"].isNull())
			activityRecordsItemObject.operatorName = dataNodeActivityRecordsActivityRecordsItem["OperatorName"].asString();
		if(!dataNodeActivityRecordsActivityRecordsItem["Memo"].isNull())
			activityRecordsItemObject.memo = dataNodeActivityRecordsActivityRecordsItem["Memo"].asString();
		if(!dataNodeActivityRecordsActivityRecordsItem["GmtCreate"].isNull())
			activityRecordsItemObject.gmtCreate = std::stol(dataNodeActivityRecordsActivityRecordsItem["GmtCreate"].asString());
		data_.activityRecords.push_back(activityRecordsItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());

}

std::string SearchTicketByIdResult::getMessage()const
{
	return message_;
}

long SearchTicketByIdResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

SearchTicketByIdResult::Data SearchTicketByIdResult::getData()const
{
	return data_;
}

std::string SearchTicketByIdResult::getCode()const
{
	return code_;
}

bool SearchTicketByIdResult::getSuccess()const
{
	return success_;
}

